//5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice 
#include <stdio.h>

// Function prototypes
void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void sortArray(int arr[], int size, int order);

int main() {
    int size1, size2, order;
    
    // Taking input for the sizes of the arrays
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    
    // Taking input for the elements of the arrays
    printf("Enter elements of the first array:\n");
    inputArray(arr1, size1);
    
    printf("Enter elements of the second array:\n");
    inputArray(arr2, size2);
    
    // Taking input for the sorting order
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &order);
    
    // Sorting the arrays
    sortArray(arr1, size1, order);
    sortArray(arr2, size2, order);
    
    // Displaying the sorted arrays
    printf("Sorted first array:\n");
    printArray(arr1, size1);
    
    printf("Sorted second array:\n");
    printArray(arr2, size2);
    
    return 0;
}

// Function to take array input from the user
void inputArray(int arr[], int size) {
	int i;
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort an array
void sortArray(int arr[], int size, int order) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if((order == 1 && arr[j] > arr[j+1]) || (order == 2 && arr[j] < arr[j+1])) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


