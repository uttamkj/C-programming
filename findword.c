#include <stdio.h>
#include <string.h>

// Function to check if a word is present in a string
int isWordPresent(const char *string, const char *word) {
    int strLen = strlen(string);
    int wordLen = strlen(word);

    // Iterate through the string
    for (int i = 0; i <= strLen - wordLen; i++) {
        // Check if the substring matches the given word
        if (strncmp(string + i, word, wordLen) == 0) {
            return 1; // Word is present
        }
    }

    return 0; // Word is not present
}

int main() {
    char inputString[100], searchWord[20];

    // Input the string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input
    inputString[strcspn(inputString, "\n")] = '\0';

    // Input the word to search
    printf("Enter the word to search: ");
    scanf("%s", searchWord);

    // Check if the word is present in the string
    if (isWordPresent(inputString, searchWord)) {
        printf("The word '%s' is present in the string.\n", searchWord);
    } else {
        printf("The word '%s' is not present in the string.\n", searchWord);
    }

    return 0;
}
