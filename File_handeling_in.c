// Copy contents of one file to another

#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("copy.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("File error");
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF) {  // getc inputs the first written alphabet,number,symbol or anythying.
        fputc(ch, fp2);                 // putc paste and save the first written alphabet,number,symbol or anythying in the file.
    }

    printf("File copied successfully");

    fclose(fp1);
    fclose(fp2);

    return 0;
}


// Write into a file

#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("File not created");
        return 0;
    }

    fprintf(fp, "Welcome to C programming\n");
    fprintf(fp, "File handling example");

    fclose(fp);

    printf("Data written successfully");
    return 0;
}

// Read data from a file
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}

// Count lines, words, and characters in a file

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
