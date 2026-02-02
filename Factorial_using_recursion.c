#include <stdio.h>
int fact(int n);
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    // fact(n)=fact(n-1)*n;
    return fact(n-1)*n;
    // recursion
}

int main(){
    int a;
printf("enter the number to know the factorial: ");
scanf("%d", &a);
    printf("factorial for %d is : %d",a, fact(a));
    
    return 0;
}