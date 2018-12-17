#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char time[10];
    for (int i=0; i<10; i++){
       scanf("%c", &time[i]);
    }
    int jam = (time[0] - '0')*10 + (time[1] - '0');
    //printf ("%d", jam);
    if (time[8] == 'P'){
        jam = jam + 12;
        time[0] = jam/10 +'0';
        time[1] = jam%10 +'0';
    }
    time [8]= ' ';
    time [9]= ' ';

    printf("%s", time);
    return 0;
}

