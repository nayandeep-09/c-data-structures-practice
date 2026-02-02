#include <stdio.h>
    int swap(int *x, int *y){
        int c =*x;
        *x= *y;
        *y= c;
        return *x, *y;
    }
int main(){
    int a,b;
    int *p=&a;
    int *p2=&b;

    printf("Enter the two numbers: ");
    scanf("%d\n",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value of a is %d and b is %d",a,b);
    return 0;
}