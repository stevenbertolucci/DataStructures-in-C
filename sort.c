// Author: Steven Bertolucci
// Date: 8/31/23
// File: sort.c
// Description: This file sorts arrays in ascending order

#include <stdio.h>

void sort(int nums[]) {

    // Save the number of indexes in the array
    int n = sizeof(nums) - 1;

    // Loop to sort the array
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Is the current value greater than the next value?
            if (nums[i] > nums[j]) {
                // If so, swap those values
                int a = nums[i];
                nums[i] = nums[j];
                nums[j] = a;
            }
        }
    }
}


int main() {
    int numbers[] = {24, 1, 6, 21, 2, 9, 3};

    // Print the current array
    printf("Here are the numbers in the array: ");
    for (int i = 0; i < (sizeof(numbers) / 4); i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Print the sorted array
    sort(numbers);
    printf("Here is the array sorted: ");
    for (int i = 0; i < (sizeof(numbers) / 4); i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}
