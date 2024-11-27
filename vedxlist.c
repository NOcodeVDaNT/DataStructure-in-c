#include "vedxlist.h"

// Function to create a new node
Node* getNode(int x) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = x;
    p->next = NULL;
    return p;
}

// Function to build a linked list with 3 nodes (1 -> 2 -> 3)
Node* build123() {
    Node* t1 = getNode(1);
    Node* t2 = getNode(2);
    Node* t3 = getNode(3);

    t1->next = t2;
    t2->next = t3;

    return t1;
}

void display(Node* p) {
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}

// Function to add a node at the end of the list
Node* addend(Node* s, int x) {
    Node* p = getNode(x);
    while (s->next != NULL) {
        s = s->next;
    }
    s->next = p;
    return s; // Return the modified list
}

Node* addbegin(Node *s, int x) {
    Node *p = getNode(x);
    p->next = s;
    return p;
}




int main() {
    Node* start;

    start = build123();
    display(start);

    start = addbegin(start, 4);
    addend(start, 5);

    display(start);

    return 0;
}
