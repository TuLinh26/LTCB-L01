#include <stdio.h>
#include <math.h>
int main(){
    //TH1
    int a[3][3] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf ("%d", a[i][j]);
        }
        printf ("\n");
    }
//TH2
    int b[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf ("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf ("%d ", b[i][j]);
        }
        printf ("\n");
    }
}

