
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[m];
    for (int i=0; i<m; i++){
        scanf("%d", &ar[i]);
    }
    int max =0;
    for (int i=0; i<n; i++){
        int min = n;
        for (int j=0; j<m; j++){
            int temp = i - ar[j];
            if (temp<0){
                temp=temp*(-1);
            } 
            if (temp<min){
                min = temp;
            }
        }
        if (min>max){
            max =min;
        }
    }
    printf ("%d", max);

    return 0;
}


