#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //Numbers
    int age = 21; //Whole numbers
    double pi = 3.14; //Decimal numbers

    //Characters
    char grade = 'A'; //Single Characters
    char phrase[] = "Life is a boat";

    //printf
    printf("Hello\n\"World\"!");
    printf("\n%d\n",500);

    //numbers
    printf("Adding two numbers:%f\n", 5.0 + 4.5 );

    //Mathematical Functions
    printf("%f\n",pow(4,2));
    printf("%f\n",sqrt(4));
    printf("%f\n",ceil(4.3));
    printf("%f\n",floor(4.3));

    //Constants
    int num = 5;
    printf("%d\n",num);
    num=8;
    printf("%d\n",num);
        //vs
    const int CNUM = 5; //All capital names



    return 0; 
}