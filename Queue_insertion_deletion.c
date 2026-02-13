// =====> FIFO

#include <stdio.h>
#define size 5

int arr[size];
int front = -1, rear = -1;

void enqueue(int a)
{
    if (rear == size - 1)
    {
        printf("the queue is currently full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = a;
        printf("element inserted %d\n", arr[rear]);
    }
}
void dequeue()
{

    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("%d removed\n", arr[front]);
        front++;

        // reset when empty
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    void display();
    {
        if (front == -1 || front > rear)
        {
            printf("Queue is Empty!\n");
        }
        else
        {
            int i;
            for (i = front; i <= rear; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int choice, element;
    while (1)
    {
        printf("===> Enter the choice <===");
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
            return 0; // Exit only here

        default:
            printf(" ___________________________________\n");
            printf("|    Invalid input, try again       |\n");
            printf(" -----------------------------------\n");
            break;
        }
    }
    return 0;
}