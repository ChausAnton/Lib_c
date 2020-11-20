#include "../inc/libmx.h"

char *mx_itoa(int number) {
    char *arr = mx_strnew(10);
    bool min = false;
    unsigned int num = number;
    int i = 0;

    if (number < 0) {
        min = true;
        num = num * -1;
    } 
    
    while(num != 0) {
        arr[i] = (num % 10) + 48;
        num = num / 10;
        i++;
    }
    if(min == true) arr[i] = '-';
    mx_str_reverse(arr);
    return arr;
}
