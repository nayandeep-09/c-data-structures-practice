// Push and pop operation in single program.
//once program exits the data will lost.

#include <stdio.h>
#define max_size 5

int arr[max_size];
top = -1;

void push(int item)
{
    if (top == max_size - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        arr[top = top + 1] = item;
        printf("%d insertion complete\n", item);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! & exit\n");
    }
    else
    {
        int item = arr[top = top - 1];
        printf("Deletation completed\n");
    }
}

void display()
{
    if (top == -1)
    {
        printf("Nothing in Stack\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf(" %d\n", arr[i]);
        }
    }
}
int main()
{
    int option, item;
    printf("======>  Select any option: <====== \n (1) for insert or push element. \n (2) for delete any of element. \n (3) for display all elements. \n (4) for exit from program.\n");
    while (1)
    {
         printf("choice ==> ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice selected choose again\n");
            break;
        }
    }
    return 0;
}