#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n;
    scanf("%d\n", &n);
    char arc[n][n];
    int ari[n][n];
    bool space= false;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            char temp;
            scanf("%c", &temp);
            if (temp != ' '){
                arc[i][j] = temp;
                ari[i][j] = arc[i][j] - '0';
            } else {
                j=j-1;
                space = true;
            }
        }
        scanf("\n");
    }
    for (int i=1; i<n-1; i++){
        for (int j=1; j<n-1; j++){
          if (ari[i][j] > ari[i - 1][j] && ari[i][j] > ari[i][j - 1] &&
              ari[i][j] > ari[i][j + 1] && ari[i][j] > ari[i + 1][j]){
                  arc[i][j] = 'X';
              }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%c", arc[i][j]);
            if (space == true){
                printf (" ");
            }
        }
        printf("\n");
    }

    return 0;
}

