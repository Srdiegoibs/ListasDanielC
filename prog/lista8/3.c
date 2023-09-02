//3) Modifique o programa anterior para incluir um registro. Remova as entradas
//excedentes caso o limite de 256 entradas seja extrapolado. Como critério de escolha,
//remova os registros cujos valores numéricos sejam os maiores.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 256
#define MAX_NAME_LENGTH 255

struct Tuples{
    char entries[MAX_ENTRIES][2][MAX_NAME_LENGTH];
    int values[MAX_ENTRIES]; 
};

int compare(const void *a, const void *b); 

int main() {
    struct Tuples t; 
   
    FILE *fp = fopen("file.txt", "r");
    if (!fp) {
        printf("Error\n");
        return 1;
    }

    while(fscanf(fp, "%s %d", t.entries[]


    return 0;
//    char entries[MAX_ENTRIES][2][MAX_NAME_LENGTH];
//    int values[MAX_ENTRIES];
//    int num_entries = 0;
//
//    FILE *fp;
//    fp = fopen("file.txt", "r");
//    if (!fp) {
//        printf("EERRO\n");
//        return 1;
//    }
//    
//    while(fscanf(fp, "%s %d", entries[num_entries][0], &values[num_entries]) == 2) {
//        strcpy(entries[num_entries][1], entries[num_entries][0]);
//        num_entries++;
//    }
//    
//    qsort(values, num_entries, sizeof(int), compare);
//
//    for (int i = 0; i < num_entries; i++) {
//        printf("(%s, %d)\n", entries[i][1], values[i]);
//    }
//
//    fclose(fp);
//
//    return 0;
}


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
