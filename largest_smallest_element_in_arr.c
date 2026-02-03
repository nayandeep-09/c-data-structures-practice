// Largest element of arr

#include <stdio.h>

int main(){
    int arr[5]= {1,2,6,5,1};
    int max = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d",max);
        

    return 0;
}

//Smallest element of an arr

#include <stdio.h>

int main(){
    int arr[5]= {1,2,6,5,1};
    int max = 0;
    int min;
    
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
        min = max;
     for (int i = 0; i < 5; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
        printf("The smallest value of array is : %d",min);

    return 0;
}