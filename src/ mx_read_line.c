#include "../inc/libmx.h"

char *mx_join_for_read_line(char *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }

    int length1 = 0;
    if(s1 != NULL) {
        length1 = mx_strlen(s1);
    }

    int length2 = 0;
    if(s2 != NULL) {
        length2 = mx_strlen(s2);
    }

    char *str = mx_strnew(length1 + length2);
    if (str == NULL) {
        return NULL;
    }

    if(s1 != NULL)
        mx_strcat(str, s1);
    if(s2 != NULL)
        mx_strcat(str, s2);

    mx_strdel(&s1);///////
    return str;

}


int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (buf_size < 0 || fd < 0) return -2;
    buf_size = 1;
    int byte = 0;
    char buf;
    int length = 0;
    mx_strdel(lineptr);

    if ((byte = read(fd, &buf, buf_size)) > 0){
        *lineptr = mx_join_for_read_line(*lineptr, &buf);
    }
    else {
        return -1;
    }
    while((byte = read(fd, &buf, buf_size)) > 0) {
        if(delim == buf) break;
        if(length == 0) length++;
        length += byte;
        *lineptr = mx_join_for_read_line(*lineptr, &buf);
    }
    if(length == 0) {
        mx_strdel(lineptr);
        *lineptr = "";
    }
    buf_size = (size_t)length;
    return buf_size;
}
