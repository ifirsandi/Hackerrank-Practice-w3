#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int t;
    scanf("%d", &t);
    for (int test=0; test<t; test++){
        int n, m;
        scanf("%d\n%d", &m, &n);
        int ar[n];
        for (int i=0; i<n; i++){
            scanf("%d", &ar[i]);
        }
        int temp =0;
        int j=0;
        while (temp!=m && j<n){
            for (int i=j+1; i<n; i++){
                temp = ar[i]+ar[j];
                if (temp==m){
                    printf("%d %d", j+1, i+1);
                    break;
                }
            }
            j++;
        }
        printf("\n");
    }

    return 0;
}


