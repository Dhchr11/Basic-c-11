//15. Store 5 numbers in array and sort it in ascending order 
#include <stdio.h>

// Function to sort an array using bubble sort
void bubbleSort(int arr[], int n) {
    int temp,i,j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 5;
    int arr[n],i;

    // Input 5 numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i= 0; i< n;i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort the array
    bubbleSort(arr, n);

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


