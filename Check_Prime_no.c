#include <stdio.h>

int main(){
    int n;
    printf("Enter the digit to know that number is prime or not : ");
    scanf("%d", &n);

if(n <= 1){
    printf("Non prime");
}

for (int i = 2; i < n; i++)
{
    if (n%i==0 && n!=i)
    {
        printf("Non prime");
    
}else{
    printf("prime");
}
}

    return 0;

}