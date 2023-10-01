/* Explanation:

The binarySearch function takes a sorted array arr and a target element target.
It uses a while loop to iteratively search for the target element by narrowing down the search range using the left and right indices.
The middle index mid is calculated as the average of the left and right indices.
If the target is found at the middle, the function returns the index where the target is found.
If the target is greater than the middle element, the search is continued in the right half of the array by updating the left index.
If the target is smaller than the middle element, the search is continued in the left half of the array by updating the right index.
If the target is not found in the array, the function returns -1.
In the main function, a sample sorted array is defined, and the binarySearch function is called to search for a target element. The result is then printed accordingly.

 */

#include <iostream>
#include <vector>

using namespace std;

// Binary Search function to search for a target element in a sorted array
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;           // Index of the leftmost element in the array
    int right = arr.size() - 1;  // Index of the rightmost element in the array

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index

        // Check if the target is at the middle
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If the target is not found in the array
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int target = 9;

    int result = binarySearch(arr, target);

    if (result != -1)
        cout << "Target " << target << " found at index " << result << endl;
    else
        cout << "Target " << target << " not found in the array" << endl;

    return 0;
}
