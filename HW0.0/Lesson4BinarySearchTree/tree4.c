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

int Node_lookup(struct Node* this, int value) {
    if (this == NULL) {
	return 0;
    } else if (value < this->value) {
	return Tree_lookup(this->leftChild, value);
    } else if (value > this->value) {
	return Tree_lookup(this->rightChild, value);
    } else {
	return 1; // value == this->value
    }
}

struct Tree{
    struct Node* root;
};

struct Tree* new_Tree(){
    struct Tree* this = (struct Tree*)malloc(sizeof(struct Tree));

    if(this == NULL){
        return NULL; //Out of memory
    }

    this->root = NULL;
    return this;

}

void Tree_add(struct Tree* this,int value){
    this->root = Node_add(this->root,value);
}

void Tree_print(struct Tree* this){
    Node_print(this->root);
}

int Tree_lookup(struct Tree* this, int value) {
    return Node_lookup(this->root, value);
}

int main(int argc, char *argv[]) {
    struct Tree* tree = new_Tree();
    Tree_add(tree,20);
    Tree_add(tree,10);
    Tree_add(tree,5);
    Tree_add(tree,15);
    Tree_add(tree,30);
    Tree_add(tree,40);
    Tree_add(tree,20);
    Tree_print(tree);
    printf("%d\n", Tree_lookup(tree, 15)); // 1
    printf("%d\n", Tree_lookup(tree, 99)); // 0
}