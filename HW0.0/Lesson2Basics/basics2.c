#include <stdio.h>

void newLine(){
    printf("\n");
}

int main(int argc, char *argv[]) {
    newLine();

    //Step 5
    int num;
    printf("Give me a int\n");
    scanf("%d",&num);
    printf("You entered %d\n",num);

    float fnum;
    printf("Give me a float\n");
    scanf("%f",&fnum);
    printf("You entered %f\n",fnum);

    char str[256];
    printf("Give me a string\n");
    scanf("%s",str);
    printf("You entered %s\n",str);

    //Step 6
    char str2[256];
    printf("Enter lines of text; blank line to finish:\n");
    do{

        fgets(str2,255,stdin);
        printf("You typed: %s \n",str2);

    }while(str2[0] != '\n');

}