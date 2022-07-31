#include <stdio.h>
#include <stdlib.h>




// implement strcat 

int main() {
    int c = 0;
    char *s1 = malloc(sizeof(char) * 100);
    char *s2 = malloc(sizeof(char) * 100);
    char *result = malloc(sizeof(char) * 100);

    scanf("%s", s1);
    while((c = getchar()) != '\n' && c != EOF);
    scanf("%s", s2);

    // printf("%s%s\n", s1, s2);
    // concatenate s1 and s2
    int i = 0;
    while(s1[i] != '\0') {
        result[i] = s1[i];
        i++;
    }
    int j = 0;
    while(s2[j] != '\0') {
        result[i] = s2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    printf("%s\n", result);
    
   
    free(s1);
    free(s2);
    free(result);

    return 0;
}