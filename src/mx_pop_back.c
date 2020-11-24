#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {

    if (*head == NULL || head == NULL) return;

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    t_list *node = *head;
    while(node && node->next->next != NULL) {
        node = node->next;
    }
    free(node->next);
    node->next = NULL;
}
