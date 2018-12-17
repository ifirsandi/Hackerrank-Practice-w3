
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n, k;
    scanf ("%d %d", &n, &k);
    int page=0;
    int count=0;
    int b=1;
    for (int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        if (b!=0){
            page++;
            b=0;
        }
        for (int j=1; j<=a; j++){          
            b++;
            if (j == page){
                count++;
                //printf("*");
            }
            //printf("problems = %d, page = %d\n", j, page);
            if (b==k){
                page++;
                b=0;
            }

        }
    }
    printf("%d", count);

    return 0;
}

