#include <stdio.h>
#define arr_max 5
int arr[arr_max];
int front = -1, rear = -1;
void enqueue(int element)
{
    if (rear == arr_max - 1)
    {
        printf("\nthe array is full");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = element;
        printf("\nthe entered element is %d", arr[rear]);
    }
}
void dequeue()
{
    if (front > rear || front == -1 || rear == -1)
    {
        printf("array is empty!\n");
    }
    else
    {
        rear--;
        printf("deletation performed..");
    }
}
void display()
{
    if (front == -1 || rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        for (int i = 0; i <= rear; i++)
        {
            printf(" %d", arr[i]);
        }
    }
}

int main()
{
    int choice, element;
    while (1)
    {
        printf("\n===> Enter the choice <===");
        printf("\n 1 > For enqueue or insert the element\n 2 > For dequeue to delete an element\n 3 > for display all inserted elements\n 4 > Exit from program\n");
        printf("==> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            enqueue(element);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting...\n");
            return 0; 

        default:
            printf(" ___________________________________\n");
            printf("|    Invalid input, try again       |\n");
            printf(" -----------------------------------\n");
            break;
        }
    }
    return 0;
}