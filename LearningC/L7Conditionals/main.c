#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >=num3){
        result = num1;
    }else if(num2 >= num1 && num2 >=num3){
        result = num2;
    }else{
        result=num3;
    }
    return result;
}

void grade(char letter){
    switch(letter){
        case 'A':
            printf("You got an %c\n",letter);
            break;
        case 'B':
            printf("You got an %c\n",letter);
            break;
        case 'C':
            printf("You got an %c\n",letter);
            break;
        case 'D':
            printf("You got an %c\n",letter);
            break;
        case 'F':
            printf("You got an %c\n",letter);
            break;
    }
    
}
int main(int argc, const char * argv[]){
    printf("%d\n",max(40,39,45));
    grade('A');
}
