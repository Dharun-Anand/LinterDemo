#include <stdio.h>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[min_idx])
                min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

void swap(int *xp, int *yp) {
    *xp = *yp;
    *yp = temp;
}

int main() {
    int arr[5] = {4, 2, 9, 7, 1};
    selection_sort(arr, 5);
    for (int i = 0; i < 5; i++)
        printf("%d , arr[i]);
    return 0;
}
