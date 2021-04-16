// #include <iostream>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* next;
// };

// typedef struct Node Node;

// Node* root = NULL;

// Node* createNewNode(int data)
// {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;

// }



// Node* insertAtBegin(Node* root , int data)
// {
//     Node* newNode = createNewNode(data);
//     newNode->next = root;
//     root = newNode;
//     // cout<<"root -> data"<<root->data<<endl;
//     return root;
// }

// void print()
// {
//     Node* temp = root;
//     while(temp->next)
//     {
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<temp->data;
// }

// int main() {
//     int N , num;
//     cin>>N;
//     for(int i=0;i<N;i++)
//     {
//         cin>>num;
//         root = insertAtBegin(root , num);
//     } 
//     print();   
// }


#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};

void print(struct node* root)
{
    struct node * t = root;
    while(t->link)
    {    
        printf("%d->" , t->data);
        t = t->link;
    }

    printf("%d\n",t->data);
}

struct node * delet(struct node* head , int K)
{
    // struct node *head = *=head_ref;
    struct node *t = head;
    while(K--)
    {
        t  = head;
        head = head->link;
        t->link = NULL;
        free(t);
    }
    return head;

}


int main(){
    struct node *head = NULL;

    int N , K;

    scanf("%d",&N);
    // for(int i=0;i<N;i++)
    // {
    //     struct node* temp =  (struct node*)malloc(sizeof(struct node));
    //     if(i==0) head = temp;
    //     temp->link =NULL;
    //     scanf("%d" , &(temp->data));
    //     struct node* tr = head;
    //     while(tr->link!=NULL){
    //         tr = tr->link;
    //     }
    //     tr->link = temp;
    // }
    
    scanf("%d" , &K);

    print(head);

    head  = delet(head , K);

    print(head);


   return 0;
}
