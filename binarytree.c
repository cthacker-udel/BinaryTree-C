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

void addNode(int value, struct node *parentNode){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->right = NULL;
    newNode->left = NULL;
    if(parentNode == NULL){
        parentNode = newNode;
    }

}


void printMenu(){

    printf("\n")

}



int main(){

    

    return 0;
}