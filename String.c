#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    int inWord = 0; // Flag to track if currently in a word
    int i = 0;

    // Iterate through each character in the string
    while (str[i] != '\0') {
        // Check if the current character is a space, tab, or newline
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            // If we were previously in a word, increment word count
            if (inWord) {
                count++;
                inWord = 0; // Reset the flag
            }
        } 
        // If the current character is not a space, tab, or newline,
        // then it is part of a word
        else {
            inWord = 1; // Set the flag
        }
        i++; // Move to the next character
    }

    // If the last character was part of a word, increment word count
    if (inWord) {
        count++;
    }

    return count;
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the number of words
    int wordCount = countWords(str);

    // Output the result
    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}
