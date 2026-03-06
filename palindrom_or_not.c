#include <stdio.h>

int main(){
    int a,b,r,sol=0;
    printf("Enter the number to check: ");
    scanf("%d",&a);
    b=a;

    while(a>0){
        r= a%10;
        sol = r+(sol*10);
        a = a/10;
    }
    if(b==sol){
        printf("palindrome");
    }else{
        printf("Not palindrome");
    }
    return 0;
}

// With string.

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