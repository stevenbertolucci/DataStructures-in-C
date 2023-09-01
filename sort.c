// Author: Steven Bertolucci
// Date: 8/31/23
// File: sort.c
// Description: This file sorts arrays in ascending order

#include <stdio.h>
#include <stdlib.h>

void sort(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                int a = nums[i];
                nums[i] = nums[j];
                nums[j] = a;
            }
        }
    }
}



int main() {
    int numbers[] = {24, 1, 6, 21, 2, 9, 3};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int randomArray[1000];
    int m = sizeof(randomArray) / sizeof(randomArray[0]);

    // Print the current array
    printf("Here are the numbers in the array: ");
    for (int i = 0; i < (sizeof(numbers) / 4); i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Print the sorted array
    sort(numbers, n);
    printf("Here is the array sorted: ");
    for (int i = 0; i < (sizeof(numbers) / 4); i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n\n");

    // Stress test
    printf("Here is the randomized array of 1000 indices: ");
    int length = sizeof(randomArray) / sizeof(randomArray[0]);
    for (int i = 0; i < length + 1; i++) {
        // Random integers will be between 0 - 100
        randomArray[i] = rand() % 101;
        printf("%d ", randomArray[i]);
    }

    printf("\n");
    printf("Number of indices: %d", length);

    printf("\n\n");

    // Print the sorted randomized array
    sort(randomArray, m);
    printf("Here is the randomized array sorted: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", randomArray[i]);
    }
    printf("\n");
    printf("Number of indices: %d", length);

    printf("\n\n");
    return 0;
}
