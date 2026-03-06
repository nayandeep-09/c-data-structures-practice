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


// easy one

#include <stdio.h>

void swap(int *p, int *q) // definition
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a = 100, b = 200;
    swap(&a, &b); // calling
    printf("a=%d b=%d", a, b);

    return 0;
}