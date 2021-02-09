#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data){
	struct node* node=(struct node*)malloc(sizeof(struct node));
//    node* node=new node;
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
	
	}
	void PostOrder(struct node* node)
	{
		if(node==NULL)
		{
			return;
		}
		else{
			PostOrder(node->left);
			PostOrder(node->right);
//			cout<<"postorder order is"<<endl;
			cout<<node->data<<"  ";
		}
	}
		void InOrder(struct node* node)
	{
		if(node==NULL)
		{
			return;
		}
		else{
			InOrder(node->left);
//			cout<<"InOrder order is"<<endl;
			cout<<node->data<<"  ";
				InOrder(node->right);
		}
	}
		void PreOrder(struct node* node)
	{
		if(node==NULL)
		{
			return;
		}
		else{
//				cout<<"preorder  is"<<endl;
			cout<<node->data<<"  ";
			PreOrder(node->left);
			PreOrder(node->right);
		
		}
	}
	int main(){
		struct node* root=newNode(1);
		root->left=newNode(2);
		root->right=newNode(3);
		root->left->left=newNode(4);
		root->left->right=newNode(5);
		cout<<"Preorder is"<<": ";
		PreOrder(root); 
		cout<<endl;
			cout<<"postorder is"<<": ";
		PostOrder(root);
		cout<<endl;
			cout<<"Inorder is"<<": ";
		InOrder(root);  
		getchar();
		return 0;
		
	}
