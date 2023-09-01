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

void count(int nums[], int n) {
    int count = 1;
    int total[n];
    int index = 0;

    for (int i = 0; i < n - 1; i++) { // Check up to n - 1
        if (nums[i] == nums[i + 1]) {
            count++;
        } else {
            total[index] = count;
            index++;
            count = 1; // Reset count for the next number
        }
    }

    // Add the count for the last set of similar numbers
    total[index] = count;
    index++;

    printf("Here is the count of each value: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", total[i]);
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

    printf("\n\n");

    // Print the sorted randomized array
    sort(randomArray, m);
    printf("Here is the randomized array sorted: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", randomArray[i]);
    }
    printf("\n");

    printf("\n\n");

    count(randomArray, m);

    printf("\n\n");
    return 0;
}
