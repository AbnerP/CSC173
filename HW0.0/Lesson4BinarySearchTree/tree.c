#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void newLine(){
    printf("\n");
}

struct Node{
    int value;
    struct Node* leftChild;
    struct Node* rightChild;
};

struct Node* new_Node(int value){
    struct Node* this = (struct Node*)malloc(sizeof(struct Node));

    if(this == NULL){
        return NULL; //Out of memory
    }

    this->value = value;
    this->leftChild = NULL;
    this->rightChild = NULL;

    return this;

}

struct Node* Node_add(struct Node* this, int value){
    if(this==NULL){
        this = new_Node(value);
    }else if(value < this->value){
        this->leftChild = Node_add(this->leftChild,value);
    }else if(value > this->value){
        this->rightChild = Node_add(this->rightChild,value);
    }else{
        printf("Already in tree\n");
    }
    return this;
}

void Node_print(struct Node* this){
    if(this != NULL){
        Node_print(this->leftChild);
        printf("%d\n", this->value);
        Node_print(this->rightChild);
    }
    
}


int main(int argc, char *argv[]) {
    struct Node* root = NULL;
    root = Node_add(root,20);
    root = Node_add(root,10);
    root = Node_add(root,5);
    root = Node_add(root,15);
    root = Node_add(root,30);
    root = Node_add(root,40);
    root = Node_add(root,20);
    Node_print(root);
}