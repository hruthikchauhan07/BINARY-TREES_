// headers are included

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//creating a structure called tree

struct tree{
    int data;           //information of the node
    struct tree* left;  //left position
    struct tree* right; //right position
};

//creating the node so that every element in the tree can repeat the process

struct tree* createnode(int data){
    struct tree *n;  //node pointer as n
    n = (struct tree*)malloc(sizeof(struct tree));  //allocating memory in the heap
    n->data  = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

//creating a fucntion for the preorder traversal
//most important snippet of this program

void preorder(struct tree* root){
    if(root!=NULL){  
        printf("-> %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() // STARTING THE MAIN FUNCTION
{
  /*
    these are the elements present accordingly in a noraml binary tree
    GIVEN DATA |
               
    p=30
    p1=10
    p2=70
    p3=25
    p4=18
    p5=27
    p6=23
    p7=60
    p8=80

    */
    // calling the function "createnode()"
    //now assigning each and every elements for the child nodes(left and right) from the given data
    //basically we are just linking the branches(edges) to the children of a tree

    struct tree *p = createnode(30);
    struct tree *p1 = createnode(10);
    struct tree *p2 = createnode(70);
    struct tree *p3 = createnode(25);
    struct tree *p4 = createnode(18);
    struct tree *p5 = createnode(27);
    struct tree *p6 = createnode(23);
    struct tree *p7 = createnode(60);
    struct tree *p8 = createnode(80);

    //now we have to assign the left and right nodes for each of the data


    p->left=p1;
    p->right=p2;
    p1->left=NULL; //LEFT NODE OF THIS CHILD IS EMPTY
    p1->right=p3;
    p3->left=p4;
    p3->right=p5;
    p4->left=NULL;  //LEFT NODE OF THIS CHILD IS EMPTY
    p4->right=p6;
    p2->left=p7;
    p2->right=p8;
    

    //CALLING THE FUNCTION preorder()
    //TRAVERSING THE TREE ELEMENTS AS
    // ROOT-> LEFT-> RIGHT.
    // p is the PARENT NODE(ROOT OF THE TREE) 

    preorder(p);
    
    return 0;
} // ENDING THE MAIN FUNCTION 
