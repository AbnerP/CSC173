#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){
    int points[3][2] = {{1,2},{3,4},{5,6}};
    
    //printf("%d",points[0][1]);

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d,",points[i][j]);
        }
        printf("\n");
    }
}
