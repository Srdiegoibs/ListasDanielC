#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_NODES (sizeof(dict)/sizeof(*dict))
typedef struct Animal *animalptr;
typedef int (*compare)(const char*, const char*);

typedef struct elements {
    char *weight;
    char *str;
} Elements;

Elements dict[] = {
    {"1", "Mamifero?"}, 
    {"2", "aves?"}, 
    {"3", "repteis?"}, 
    {"11", "quadrupede?"}, 
    {"12", "bipede?"}, 
    {"13", "voadores?"}, 
    {"14","aquaticos?"},
    {"21", "nao-voadoras?"}, 
    {"22", "nadadoras?"}, 
    {"23", "de rapina?"}, 
    {"31", "com casco?"}, 
    {"32", "carnivoros?"}, 
    {"33", "sem patas?"},
    {"111", "carnivoro?"},
    {"112", "herbivoro?"}, 
    {"121", "onivoro?"}, 
    {"122", "frutifero?"}, 
    {"211", "tropical?"}, 
    {"212", "polar?"}, 
    {"1111", "leao"}, 
    {"1121", "cavalo"}, 
    {"1211", "homem"}, 
    {"1221", "macaco"}, 
    {"131", "morcego"}, 
    {"141", "baleia"}, 
    {"2111", "avestruz"}, 
    {"2121", "pinguim"}, 
    {"221", "pato"}, 
    {"231", "aguia"}, 
    {"311", "tartaruga"}, 
    {"321", "crocodilo"}, 
    {"331", "cobra"}
};


typedef struct Animal {
    char *weight;
    char *str;
    animalptr left, right;
} Animal;


void insert(Elements *key, Animal **leaf, compare cmp) {
    int res;
    if (*leaf == NULL) { 
        *leaf = (Animal*) malloc(sizeof(Animal));
        (*leaf)->str = strdup(key->str);
        (*leaf)->weight = strdup(key->weight);

        (*leaf)->left = NULL; 
        (*leaf)->right = NULL;
    } 
    else {
        res = cmp(key->weight, (*leaf)->weight);
        if (res < 0) insert (key, &(*leaf)->left, cmp);
        else if (res > 0) insert (key, &(*leaf)->right, cmp);
    } 
}

int cmpStr(const char *a, const char *b) {
    // Case are equal
    if (strcmp(a, b) == 0)
        return 0;

    // If the prefixes are the same, it means a is a child of b, 
    // insert on the right e.g.: {"1", "Mamifero"} and {"11", "quadrupide"}
    if (strncmp(a, b, strlen(b)) == 0)
        return 1;

    // Otherwise insert left
    return -1;
}

char *search(Animal *leaf) {
    char *ret =  (char *) malloc(16);
    // char *buf = "";
    char buf[16];

    // printf("%s\n", leaf->str);

    // do {
        while (leaf) {
            if (!leaf->right && !leaf->left) {
                ret = leaf->str;
                break;
            }

            printf("%s ", leaf->str);
            fgets(buf, sizeof(buf), stdin);

            // case input is 'q' 'Q' or close the program
            if (strcmp(buf, "q\n") == 0 || strcmp(buf, "Q\n") == 0) {
                strcpy(ret, buf);
                break;
            }
            // If yes, go to the right
            if ((*buf == 's') || (*buf == 'S')) leaf = leaf->right;   
            // Otherwise, left
            else if ((*buf == 'n') || (*buf == 'N')) leaf = leaf->left;
        }
    // } while ((*buf != 'q') || (*buf != 'Q'));
    return ret;
}

int main() {
    Animal *parent = NULL;

    // Fill the tree with the elements
    for (int i = 0; i < NUM_NODES; i++) {
        insert(&dict[i], &parent, (compare)cmpStr);
    }

    char *res = search(parent);

    do {
        if (strcmp(res, "q\n") == 0 || strcmp(res, "Q\n") == 0) { printf("Finished!\n"); break; }
        else if ((strcmp(res, "") != 0))  printf("> %s\n", res);
        else printf("> Not found\n");    

        res = search(parent);
        
    } while (1);

    return 0;
}
