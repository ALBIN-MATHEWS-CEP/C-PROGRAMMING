#include <stdio.h>
#include <stdlib.h>
void insert(int arr[], int *n)
{
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", n);
    printf("Enter the elements  :\n");
    for(i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void linearSearch(int arr[], int n)
{
    int i, key, found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Element %d is not present.\n", key);
    }
}
void binarySearch(int arr[], int n)
{
    int key;
    int low = 0, high = n - 1, mid;
    int found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("Element %d found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(found == 0)
    {
        printf("Element %d is not present.\n", key);
    }
}
void deleteElement(int arr[], int *n)
{
    int i, key, pos = -1;
    printf("Enter the element to be deleted: ");
    scanf("%d", &key);
    for(i = 0; i < *n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
    {
        printf("Element %d is not present.\n", key);
        return;
    }
    for(i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Element %d deleted successfully.\n", key);
}
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted successfully.\n");
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100];
    int n ;
    int choice;
    do
    {
        printf("\nMENU\n1. Insert\n2. Display\n3. Linear Search\n4. Binary Search\n5. Delete an Element\n6.Bubble Sort \n7. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                insert(arr, &n);
                break;
            case 2:
                display(arr, n);
                break;
            case 3:
                linearSearch(arr, n);
                break;
            case 4:
                binarySearch(arr, n);
                break;
            case 5:
                deleteElement(arr, &n);
                break;
             case 6:
             	bubbleSort(arr,  n);
             	break;
            case 7:
                printf("Exit\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 7);
    return 0;
}

