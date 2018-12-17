
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    int ar[n];
    for (int a=0; a<n; a++){
        scanf("%d", &ar[a]);
    }   

    for (int tes=0; tes<t; tes++){
        int i, j;
        scanf ("%d %d", &i, &j);
        int min =3;
        for (int a=i; a<=j; a++){
            if (ar[a]<min){
                min = ar[a];
            }
        }
        printf("%d \n", min);
    }


    return 0;
}
