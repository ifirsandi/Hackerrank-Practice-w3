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
    int m;
    int j=0;
    scanf("%d", &m);
    int brr[m-n];
    int k=0;
    for (int i=0; i<m; i++){
        int a;
        scanf("%d", &a);
        if (a!=ar[j]){
            brr[k]=a;
            k++;
        } else {
            j++;
        }
    }
    for (int p=0; p<k; p++){
        for (int q=p+1; q<k; q++){
            if (brr[q]<brr[p]){
                int temp=brr[q];
                brr[q]=brr[p];
                brr[p]=temp;
            }
        }
    }
    printf ("%d ", brr[0]);
    for (int i=1; i<k; i++){
        if (brr[i]!=brr[i-1]){
            printf ("%d ", brr[i]);
        }
    }

    return 0;
}


