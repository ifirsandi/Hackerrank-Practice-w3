
#include <stdio.h>
#include <stdlib.h>




int main()
{
    int n, k;
    scanf ("%d %d", &n, &k);
    int l[n];
    int imp=0;
    int count=0;
    for (int i=0; i<n; i++){
        int a,b;
        scanf("%d %d", &a, &b);
        if (b==1){
            l[imp]=a;
            imp++;
        } else {
            count= count + a;
        }
    }
      for (int i = 0; i < imp; i++) {
        for (int j=i+1; j<imp; j++){
            if (l[i]>l[j]){
                int temp = l[i];
                l[i] = l[j];
                l[j] = temp;
            }
        }
    }
    for (int i=0; i<imp; i++){
        //printf ("%d ",l[i]);
        if (i<imp-k){
            count = count - l[i];
        } else {
            count =count + l[i];
        }
    }
    printf ("%d", count);

    return 0;
}


