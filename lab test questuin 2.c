#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    Node *left, *right;
    };

    Node*newNode(int item){
    Node*temp = newNode;
    temp -> data= item;
    temp -> left=temp -> right= NULL;
    return temp;
    }
    int getLvl(Node *root,Node*node, int lvl){
    if(root==NULL)
    return 1;
    if(root==node)
        return lvl;
    int downlvl=getlvl(root->left,node,lvl+1);
        if(downlvl!=0)
            return downlvl;
        return getlvl(root->right,node,lvl+1);
    }

    void printGivenlvl(Node*root,Node*node,int lvl);
    {
    if(root==NULL||lvl<2)
        return;
        if(lvl==2){
        if(root->left==node||root->right==node)
            return;
            if(root->left)
                printf("%d", root->left->data);
                if(root->right)
                    printf("%d",root->right->data);
                    }
                    else if(lvl>2)
                    {
                    printGivenlvl(root->left.node,lvl-1);
                    }
        void printCousins(Node*root,Node*node)
            {
            int lvl= getlvl(root,node,1);
            printf("%d%d%d", &root,&node,&lvl);
        }
        int main(){
            Node*root=newNode(1);
            root->left= newNode(2);
            root->right= newNode;
            root->left->left=newNode(4);
            root->left->right=newNode(5);
            root->left->right->right=newNode(15);
            root->right->left=newNode(6);
            root->right->right=newNode(7);
            root->right->left->right=newNode(8);

        printcousins(root,root->left->right);

        return 1;

        }
    }
