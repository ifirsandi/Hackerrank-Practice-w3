
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int heigth (int n, int h, bool isOdd){
    if (isOdd == true){
        h++;
        isOdd = false;
    } else {
        h = h*2;
        isOdd = true;
    }
    if (n==0){
        return h;
    } else {
        return heigth(n-1,h,isOdd);
    }
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int t=0; t<test; t++){
        int n;
        scanf("%d", &n);
        printf("%d\n", heigth(n, 0, true));
    } 
    return 0;
}

