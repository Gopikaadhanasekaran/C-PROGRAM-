#include <stdio.h>
int m_e(int arr[], int n) {
    int x = 0;
    int y = 0;
    int i = 0;
    while (i < n) {
        if (y == 0) {
            x = arr[i];
            y = 1;
        } else if (arr[i] == x) {
            y += 1;
        } else {
            y -= 1;
        }
        i++;
    }
    y = 0;
    i = 0;
    while (i < n) {
        if (arr[i] == x) {
            y += 1;
        }
        i++;
    }

    if (y > n / 2) {
        return x;
    } else {
        return -1; 
    }
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = m_e(arr, n);
    printf("Majority element: %d\n", result); // Output: 4
    return 0;
}
