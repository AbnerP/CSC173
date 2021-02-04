#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(int argc, const char * argv[]){
    struct Student student1;
    student1.age = 21;
    student1.gpa = 3.5;
    strcpy(student1.name,"Abner");
    strcpy(student1.major,"Computer Science");

    struct Student student2;
    student2.age = 24;
    student2.gpa = 3.7;
    strcpy(student2.name,"Sonia");
    strcpy(student2.major,"Business");
}

