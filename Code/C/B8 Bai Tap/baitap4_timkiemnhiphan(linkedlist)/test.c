#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void add_node(Node **head, int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL || (*head)->data >= value) {
        new_node->next = *head;
        *head = new_node;
        return;
    }
    
    Node *current = *head;
    while (current->next != NULL && current->next->data < value) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
}
typedef struct CenterPoint {
    int value;
    struct CenterPoint *left;
    struct CenterPoint *right;
} CenterPoint;

CenterPoint *centerPoint(Node *head) {
    int length = 0;
    Node *node = head;
    while (node != NULL) {
        node = node->next;
        length++;
    }
    printf("%d",length);
}
void print_list(Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int thuong(int a, int b){
    return a/b;
}
int main() {
    Node *head = NULL;

//tao ngau nhien 10000 node
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        int value = rand() % 4 + 1;
        add_node(&head, value);
    }
    print_list(head);
    CenterPoint *ptr = centerPoint(head);
    printf("\n %d\n",thuong(17,2));
}
