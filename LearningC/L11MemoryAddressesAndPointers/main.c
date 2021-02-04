#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    //Printing memory addresses
    /*printf("age: %p\n",&age);
    printf("gpa: %p\n",&gpa);
    printf("grade: %p\n",&grade);*/

    
    //Pointers
    int age2 = 30;
    int * pAge2 = &age2; //Use * to make a variable a pointer

    printf("age's memory address: %p\n",pAge2);

    //Dereferencing Pointers in C
    int age3 = 30;
    int *pAge3 = &age3;

    printf("%d\n",*pAge3); //This takes the data at that memory address




}
