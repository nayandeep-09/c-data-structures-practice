#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n')
            words++;
    }

    fclose(fp);

    printf("Lines = %d\n", lines);
    printf("Words = %d\n", words + 1);
    printf("Characters = %d\n", chars);

    return 0;
}
