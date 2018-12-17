
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int max =0;
    for (int i=0; i<n; i++){
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (ar[j]-ar[i] == 1 || ar[j]-ar[i] == 0) {
                count++;
            }
        }
        if (count > max) {
            max = count;
        }
    }
    printf("%d", max);

    return 0;
}


