#include <stdio.h>
#include <stdlib.h>
typedef struct Node Node;
struct Node{
    int data;
    Node* left;
    Node* right;
};



Node* newNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root , int data)
{
    if(root == NULL)
        return newNode(data);

    if(data <= root->data)  root->left = insert(root->left , data);

    if(data > root->data)  root->right = insert(root->right , data);

    return root;
}

//-----------------------------------------------
void inOrder(Node* root){
    if(root == NULL) return; 
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}
//----------------------------------------------
int max(int a , int b){
    return (a>b)?a:b;
}


int height(Node* root){
    if(root == NULL)  return -1;
    if(root->left == NULL && root->right==NULL) return 1;
    int leftHeight  = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max( leftHeight , rightHeight );
}



int main()
{
    Node* root = NULL;

    int T;
    scanf("%d" , &T);

    while(T--){
        int a,b;
        scanf("%d" , &a);
        if(a ==0){
            scanf("%d",&b);
            root = insert(root , b);
        }
        else {
            printf("%d\n" , height(root));
        }

    }

    printf("Inorder is "); inOrder(root);
}

// 8
// 0 5 
// 0 3
// 0 8
// 0 1
// 0 4
// 0 7
// 0 10 
// 1