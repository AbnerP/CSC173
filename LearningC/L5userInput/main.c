#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int age;

    printf("Enter your age.\n");
    scanf("%d",&age);

    //Getting a name
    //char name[20];//length of string
    //printf("Enter your name.\n");
    //scanf("%s",name);
    //printf("Your name is %s and you are %d years old.\n",name,age);

    //Getting a phrase
    char phrase[20];//length of string
    printf("Enter your full name:21");
    fgets(phrase,20, stdin);
    printf("Your name is %s and you are %d years old.\n",phrase,age);

    return 0; 
}