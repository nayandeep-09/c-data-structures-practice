#include <stdio.h>
#include <string.h>

int main() {
    int length, n = 0;
    char str[50];

    printf("Enter the string: ");
    scanf("%s", str);

    length = strlen(str) - 1; // because string stores last element as \0 null to skip it.

    while (length > n) {
        if (str[length] != str[n]) {
            printf("Not palindrome");
            return 0;   // stop immediately
        }
        length--;
        n++;
    }

    printf("Yes its palindrome");
    return 0;
}