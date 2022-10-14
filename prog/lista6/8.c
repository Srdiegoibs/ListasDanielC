#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_LENGTH 100


int main(){
    char *phrase = malloc(MAX_LENGTH);
    scanf("%[^\n]s", phrase);
    char *word = malloc(MAX_LENGTH);
    scanf("%s", word);

    int posWord = 0;

    while (phrase[posWord] != '\0') {
        if (phrase[posWord] == word[0]) {
            int posWord2 = posWord;
            int posWord3 = 0;
            while (phrase[posWord2] == word[posWord3]) {
                posWord2++;
                posWord3++;
                if (word[posWord3] == '\0') {
                    printf("%d\n", posWord);
                    break;
                }
            }
        }
        posWord++;
    }

    free(phrase);
    free(word);
    
    return 0;
}