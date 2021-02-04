#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayHi();
void sayHiwName(char name[]);

int main(int argc, const char * argv[]){
    

    int luckyNumbers[]={4,5,2,3,6,9};

    printf("%d\n",luckyNumbers[2]);

    //Using Functions
    sayHiwName("Abner");

}

//Fucntions
void sayHi(){
    printf("Hello user.\n");
}
void sayHiwName(char name[]){
    printf("Hello %s.\n",name);
}

