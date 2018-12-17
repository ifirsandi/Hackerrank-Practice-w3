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
    char *sos = (char *)malloc(10240 * sizeof(char));
    scanf("%s", sos);
    int i;
    int count = 0;
    for(i=0;sos[i]!='\0';i+=3){
        if (sos[i] != 'S') {
            count++;
            //printf("%c di %d\n", sos[i], i);
        }
        if (sos[i + 1] != 'O') {
            count++;
            //printf("%c di %d\n", sos[i + 1], i + 1);
        }
        if (sos[i + 2] != 'S') {
            count++;
            //printf("%c di %d\n", sos[i + 2], i + 2);
        }
    }
    printf("%d", count);
    return 0;
}

