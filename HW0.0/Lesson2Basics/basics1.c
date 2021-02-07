/*
 * File: main.c
 */
#include <stdio.h>

void newLine(){
    printf("\n");
}

//Step 1 
float fahrenheitToKelvin(float fahrenheit){
    float kelvin = (fahrenheit+459.67)*(5.0/9.0);
    return kelvin;
}

//Step2
void hotOrColdinFahrenheit(float temp){
    if(temp <= 32.0){
        printf("Thats freezing!\n");
    }else if(temp >= 212.0){
        printf("That\'s boiling!\n");
    }else{
        printf("That\'s nice.\n");
    }
}

//Step3
void oneToTen(){
    newLine();
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
}

void tenToOne(){
    newLine();
    for(int i=10;i>=1;i-=2){
        printf("%d\n",i);
    }

}

//Step 4
void stars(int numStars){
    for(int i=0;i<numStars;i++){
        printf("*");
    }
    newLine();
}

float kelvinToFahrenheit(float kelvin){
    float fahrenheit = ((kelvin-273.15) * (9.0/5.0)) + 32.0;
    return fahrenheit;
}

int main(int argc, char *argv[]) {
    newLine();

    //Step 1
    float fahrenheit = 212.0;
    printf("%gF is %.2fK\n",fahrenheit,fahrenheitToKelvin(fahrenheit));

    //Step 2
    newLine();
    hotOrColdinFahrenheit(220);

    //Step 3
    oneToTen();
    tenToOne();

    //Step 4
    newLine();
    stars(4);
    printf("20 Kelvin is %f Fahrenheit\n",kelvinToFahrenheit(20.0));

}