// Binary Search
// First condition array need sorted to binary search
#include <stdio.h>

#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int left = 0;
    int right = n - 1;
    int found = 0;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target value is present at the middle index
        if (arr[mid] == target) {
            found = 1;
            index = mid;
            break;
        }

        // If the target value is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;

        // If the target value is smaller, ignore the right half
        else
            right = mid - 1;
    }

    if (found)
        printf("Element found at index %d.\n", index);
    else
        printf("Element not found in the array.\n");

    return 0;
}
