#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char *




typedef struct Animal *animalptr;

typedef struct Animal {
    int n;
    char *str;
    animalptr left, right;
} Animal;

Animal* insert (Animal *root, char* str, int n) {
    if(root == NULL) {
        root = (Animal*) malloc(sizeof(Animal));
        root->n = n;
        root->str = str;

        root->left = NULL;
        root->right = NULL;
    }
    else if (n > root->n) {
        insert (root->left, str, n);
        printf ("%s", root->left->str);
    }        

    else if (n < root->n)
        insert (root->right, str, n);

    return root;
}

void printTree (Animal *root) {
    if (root != NULL) {
        printTree (root->left);
        printf("%s", root->str);
        printTree (root->right);
    }
}

int main () {
    Animal *a;
    
    a = insert(a, "cavalo", 1);
    a = insert(a, "leao", 2);
    a = insert(a, "homem", 3);
    a = insert(a, "macaco", 4);
    a = insert(a, "baleia", 5);
    a = insert(a, "avestruz", 6);
    a = insert(a, "pinguin", 7);
    a = insert(a, "pato", 8);
    a = insert(a, "aguia", 9);
    a = insert(a, "tartaruga", 10);
    a = insert(a, "crocodilo", 11);
    a = insert(a, "cobra", 12);


    return 0;
}
