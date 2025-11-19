



#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element;

    printf("Enter the element to remove: ");
    scanf("%d", &element);

    int newSize = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != element) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Array after removing %d: ", element);
    for(int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
