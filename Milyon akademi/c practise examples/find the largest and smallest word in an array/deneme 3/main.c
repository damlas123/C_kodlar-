#include <string.h>
	
void findLargestAndSmallestWords(char str[]) {
    char word[100], smallestWord[100], largestWord[100];
    int i, j, len;

    // Initialize smallestWord and largestWord with the first word in the string
    sscanf(str, "%s", word);
    strcpy(smallestWord, word);
    strcpy(largestWord, word);

    // Iterate through the string to find the largest and smallest words
    for (i = 0; str[i] != '\0'; i++) {
        // Extract each word from the string
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            word[j] = '\0';
            j = 0;

            // Compare the current word with the smallest and largest words
            len = strlen(word);
            if (len > 0) {
                if (strlen(smallestWord) > len) {
                    strcpy(smallestWord, word);
                }
                if (strlen(largestWord) < len) {
                    strcpy(largestWord, word);
                }
            }
        } else {
            word[j++] = str[i];
        }
    }

    // Compare the last word in the string
    word[j] = '\0';
    len = strlen(word);
    if (len > 0) {
        if (strlen(smallestWord) > len) {
            strcpy(smallestWord, word);
        }
        if (strlen(largestWord) < len) {
            strcpy(largestWord, word);
        }
    }

    printf("\nThe largest word is '%s'\n", largestWord);
    printf("And the smallest word is '%s'\n", smallestWord);
}

int main() {
    char inputString[1000];

    printf("Input the string: ");
    gets(inputString)

    // Remove the trailing newline character from the input
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    findLargestAndSmallestWords(inputString);

    return 0;
}

