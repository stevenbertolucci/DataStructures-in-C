#include <stdio.h>

void sort(int nums[]) {

    int n = sizeof(nums) - 1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
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
