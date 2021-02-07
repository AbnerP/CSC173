#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void newLine(){
    printf("\n");
}

//Doing Malloc for Employee.name
char* stdrup(const char* s){
    char *t = (char*)malloc(strlen(s)+1);
    strcpy(t,s);
    return t;
}

struct Employee{
    char* name;
    int id;
};

struct Employee* new_Employee(char *name,int id){
    struct Employee* this = (struct Employee*)malloc(sizeof(struct Employee));

    if(this == NULL){
        return NULL; //Out of memory
    }

    this->name = stdrup(name);
    this->id = id;
    return this;

}

void Employee_print(struct Employee* this){
    printf("Employee [%s, %d]\n", this->name,this->id);
}

//Getters
char* Employee_get_name(struct Employee* this){
    return this->name;
}
int Employee_get_id(struct Employee* this){
    return this->id;
}

//Setters
void Employee_set_name(struct Employee* this, char* name){
    this->name = name;
}
void Employee_set_id(struct Employee* this, int id){
    this->id = id;
}

//Free
void Employee_free(struct Employee* this){
    free(this->name);
    free(this);
}

int main(int argc, char *argv[]) {
    struct Employee* e1 = new_Employee("Abner Pena",1);
    Employee_print(e1);
    struct Employee* e2 = new_Employee("Xavier Carrion",2);
    Employee_print(e2);

    struct Employee* e3 = new_Employee("Enid Garcia",3);
    //Testing Setters
    //Employee_set_name(e3,"Angel"); 
    //Employee_set_id(e3,4);
    Employee_print(e3);

    Employee_free(e1);
}