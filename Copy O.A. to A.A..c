

#include <stdio.h>

int main() {
    int arr[100], n, i, k, temp;

   
    printf("Enter number of elements: ");
    scanf("%d", &n);

   
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter how many times to rotate: ");
    scanf("%d", &k);

    
    while(k--) {
        temp = arr[0];
        for(i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }

    printf("Array after rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
  return 0;
}

    return 0;
}
