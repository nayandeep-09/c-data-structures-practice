#include <stdio.h>

int main(){
    int year;
    printf("Enter ther year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("Given year is leap year");
    }else{
        printf("Given year is not a leap year");
    }

    return 0;
}