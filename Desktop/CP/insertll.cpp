#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* root = NULL;

Node* createNewNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;

}



Node* insertAtBegin(Node* root , int data)
{
    Node* newNode = createNewNode(data);
    newNode->next = root;
    root = newNode;
    // cout<<"root -> data"<<root->data<<endl;
    return root;
}

void print()
{
    Node* temp = root;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    int N , num;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        root = insertAtBegin(root , num);
    } 
    print();   
}
