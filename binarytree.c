#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct node{

    int value;
    struct node *right;
    struct node *left;

};

struct node *ROOT = NULL;

void makeRoot(int value){

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = value;
    if(ROOT == NULL){
        ROOT = newNode;
        newNode->left = NULL;
        newNode->right = NULL;    
    }
}

void makeNode(int value, struct node *parentNode){

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->right = NULL;
    newNode->left = NULL;
    if(parentNode == NULL){
        parentNode = newNode;
    }

}



int main(){

    

    return 0;
}