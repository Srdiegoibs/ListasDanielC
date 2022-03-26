#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 9


const char * array[] = {
    "Mamifero",
    "aves",
    "Third entry",
};


typedef struct Animal *animalptr;

typedef struct Animal {
    char *str;
    animalptr left, right;
} Animal;

typedef int (*compare)(const char*, const char*);

void insert (char* key, Animal** leaf, compare cmp) {
    int res;
    if (*leaf == NULL) {
        *leaf = (Animal*) malloc(sizeof(Animal));
        (*leaf)->str = malloc(strlen(key) + 1);
        strcpy ((*leaf)->str, key);

        (*leaf)->left = NULL; 
        (*leaf)->right = NULL;

        printf("\nnew node for %s", key); 
    } 
    else {
        res = cmp (key, (*leaf)->str);
        if (res < 0) insert (key, &(*leaf)->left, cmp);
        else if (res > 0) insert (key, &(*leaf)->right, cmp);
        else printf("key '%s' already in tree\n", key);

    } 
}

int cmpStr (const char* a, const char* b) {
    return (strcmp (a,b));
}


void printTree (Animal *parent) {
    if (parent != NULL) {
        printTree (parent->left);
        printf(" [%s]", parent->str);
        printTree (parent->right);
    }
}

char *input(void) {
    static char line[MAXLEN+1];
    fgets(line, sizeof line, stdin);
    return ( strtok(line, "\n" ));
}


int main () {
    Animal *a = NULL;
    char **str;

    
    str = {"teste", "teste1", "teste2", "teste3", "teste3"};
    insert(str, &a, (compare)cmpStr);


    // printTree(a);




    return 0;
}
