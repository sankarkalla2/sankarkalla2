#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int new_data)
    {
        data=new_data;
        left=right=NULL;
    }
};
void find_min(Node *temp)
{
    while(temp!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
struct Node* root=NULL;
void insert(int data)
{
    struct Node *temp=root;
    if(temp==NULL)
    {
        struct Node *new_node=new Node(data);
        temp=new_node;
    }
    else if(data<temp->data)
    {
        insert(root->left);
    }
    else
    {
        insert(root->right);
    }
}
Delete_data(Node *temp,int data)
{
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    delete temp;
    temp=NULL;
}
void Delete(int data)
{
    struct Node *temp=root;
    if(temp==NULL)
    {
        return;
    }
    else if(data<temp->data)
    {
        Delete(root->left);
    }
    else if(data>temp->data)
    {
        Delete(root->right);
    }
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            //if node didn't contain childs
            delete temp;
            temp=NULL;
        }
        else if(root->left==NULL)
        {
            //if node contaim right child
            struct Node *current=temp;
            temp=temp->right;
            delete current;
            current=NULL;
        }
        else if(root->right==NULL)
        {
            //if node contain left child
            struct Node* current=temp;
            temp=temp->left;
            delete current;
            current=NULL;
        }
        else
        {
            //if node contains both childs
            struct Node *current;
            current=find_min(temp->right);
            temp->data=current->data;
            Delete_data(temp->data);
        }
    }
}
void print()
{
    void inorder()
    struct Node *temp=root;
    if(root==NULL)
    {
        return;
    }
    inorder(temp->left)
}
int main()
{
    
}
























