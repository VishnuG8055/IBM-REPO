/*Prompt the user to enter the list of groceries.
Read the input list of groceries.
Implement a sorting algorithm (such as bubble sort, insertion sort, or selection sort) to sort the list alphabetically.
Print the sorted list of groceries.
End the program**/



#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100
#define MAX_LENGTH 50

// Function to perform bubble sort
void bubbleSort(char items[MAX_ITEMS][MAX_LENGTH], int n) {
    int i, j;
    char temp[MAX_LENGTH];

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(items[j], items[j+1]) > 0) {
                strcpy(temp, items[j]);
                strcpy(items[j], items[j+1]);
                strcpy(items[j+1], temp);
            }
        }
    }
}

int main() {
    char groceryList[MAX_ITEMS][MAX_LENGTH];
    int numItems;

    // Prompt user to enter the number of grocery items
    printf("Enter the number of grocery items: ");
    scanf("%d", &numItems);

    // Prompt user to enter each grocery item
    printf("Enter the grocery items:\n");
    for (int i = 0; i < numItems; i++) {
        scanf("%s", groceryList[i]);
    }

    // Sort the grocery list alphabetically
    bubbleSort(groceryList, numItems);

    // Display the sorted grocery list
    printf("\nSorted grocery list:\n");
    for (int i = 0; i < numItems; i++) {
        printf("%s\n", groceryList[i]);
    }

    return 0;
}
