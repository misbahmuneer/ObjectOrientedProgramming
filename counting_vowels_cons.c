//9. Count Vowels and Consonants in a String
//Input a string and count the number of vowels and consonants.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            switch (c) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
