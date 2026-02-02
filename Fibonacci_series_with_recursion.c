// Normal Fibonacci series.

#include <stdio.h>

int main(){
    int a=0, b=1, c,n;
printf("Enter the values till: ");
scanf("%d",&n);

for (int i = n; i >0; i--)
{
    printf("%d",a);
    if (i!=1)
    {
        printf(", ");
    }
    
    c=a+b;
    a=b;
    b=c;
}
    return 0;
}

// Fibonaccu series with recursion.

#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}
