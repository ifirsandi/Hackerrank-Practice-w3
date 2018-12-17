#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
      scanf("%d", &arr[i]);
      for (int j = i; j > 0; j--) {
        if (arr[j] < arr[j - 1]) {
          int temp = arr[j];
          arr[j] = arr[j - 1];
          arr[j - 1] = temp;
        } else {
          break;
        }
      }
    }
    /*for (int i=0; i<n; i++){
        printf ("%d ", arr[i]);
    }*/
    printf("%d", arr[(n)/2]);
    return 0;
}


