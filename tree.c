#include<stdio.h>>
typedef struct tree
{
    int data;
    struct tree *left, *right;

}tree;



void inorder(tree *root) {
    if (root == NULL) {  
        return;
    }
    inorder(root->left);           
    printf("%d ", root->data);    
    inorder(root->right);         
}



void postorder(tree *root) {
    if (root == NULL) {  
        return;
    }
    postorder(root->left);          
     
   postorder(root->right);  
    printf("%d ", root->data);           
}


void pre(tree *root) {
    if (root == NULL) {  
        return;
    }
    printf("%d ", root->data);  
    pre(root->left);          
     
    pre(root->right);  
             
}


tree* insertBST(tree *root, int key)
{

if (root == NULL) { 
tree* t = (tree*) malloc(sizeof(tree));
t->data = key;
t->left = t->right =NULL;
return(t) ;
}

if (key < root->data)
root->left = insertBST(root->left, key);

else
root->right = insertBST(root->right, key);

return ;
}


int main(){

}