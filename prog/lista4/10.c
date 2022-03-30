#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 10


char* dict[] = {
    "Mamifero","aves","repteis",
    "quadrupede", "bipede", "voadores", "aquaticos",
    "nao-voadoras", "nadadoras", "de rapina", "com casco", "carnivoros", "sem patas",
    "carnivoro", "herbivoro", "onivoro", "afrutifero", "tropical", "polar", 
    "leao", "cavalo", "homem", "macaco", "morcego", "baleia", "avestruz", "pinguim", 
    "pato", "aguia", "tartaruga", "crocodilo", "cobra"
};

typedef struct Animal *animalptr;

typedef struct Animal {
    char *str;
    animalptr left, right;
} Animal;

typedef int (*compare)(const char*, const char*);


// void insert(char* key, Animal** leaf, compare cmp)
// {
//     int res;
//     if( *leaf == NULL ) {
//         *leaf = (Animal*) malloc( sizeof( Animal ) );
//         (*leaf)->str = malloc( strlen (key) +1 );     // memory for key
//         strcpy ((*leaf)->str, key);                   // copy the key
//         (*leaf)->left = NULL;
//         (*leaf)->right = NULL;
//         //printf(  "\nnew node for %s" , key);
//     } else {
//         res = cmp (key, (*leaf)->str);
//         if( res < 0)
//             insert( key, &(*leaf)->left, cmp);
//         else if( res > 0)
//             insert( key, &(*leaf)->right, cmp);
//         else                                            // key already exists
//             printf ("Key '%s' already in tree\n", key);
//     }
// }

void insert (char* key, Animal** leaf, compare cmp) {
    int res;
    if (*leaf == NULL) { 
        *leaf = (Animal*) malloc(sizeof(Animal));
        (*leaf)->str = malloc(strlen(key) + 1);
        strcpy ((*leaf)->str, key);

        (*leaf)->left = NULL; 
        (*leaf)->right = NULL;

        // printf("\nnew node for %s", key); 
    } 
    else {
        // printf("%d\n", res);
        res = cmp (key, (*leaf)->str);
        if (res < 0) insert (key, &(*leaf)->left, cmp);
        else if (res > 0) insert (key, &(*leaf)->right, cmp);
        else printf("key '%s' already in tree\n", key);

    } 
}

int cmpStr (const char* a, const char* b) {
    // printf("a = %d\n b = %d", strlen(a), strlen(b));
    return (strcmp (a,b));
}

void printTree (Animal *parent) {
    if (parent != NULL) {
        printTree (parent->left);
        printf(" [%s] \n", parent->str);
        printTree (parent->right);
    }
}

int main () {
    Animal *parent = NULL;
    
    // printf("%ld\n", sizeof(dict));
    // insert(dict[0], &parent, (compare)cmpStr);
    // printTree(parent);
    for (int i = 0;  i < 32; i++) {
        insert(dict[i], &parent, (compare)cmpStr);
    }

    printTree(parent);

    return 0;
}
