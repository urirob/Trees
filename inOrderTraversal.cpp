/*
 
 Hare Krishna Hare Krishna Krishna Krishna Hare Hare
 Hare Rama Hare Rama Rama Rama Hare Hare
 
 You will win, Lord Krsna always there to guide and protect you
 
 
 */

//INORDER TRAVERSAL ALGORITHM
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>


using namespace std;

/*
 PSEUDO CODE->
 
 void inorder(node){
    
    if(node==NULL)
        return;
    
    inorder(node->left)
 
    print(node->data)
    
    inorder(node->right)
 }
 */

struct node{
    int data;
    struct node*left,*right;
};

vector<int> inOrderTrav(node*currentNode){
    vector<int> inOrder;
    stack <node*> s;
    while(true){
        if(currentNode!=NULL){
            s.push(currentNode);
            currentNode=currentNode->left;
            
        }
        
        else{
            if(s.empty())   break;
            currentNode=s.top();
            inOrder.push_back(currentNode->data);
            s.pop();
            currentNode=currentNode->right;
        }
    }
    return inOrder;
}

struct node*newNode(int data){
    struct node*node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    
    return (node);
}


int32_t main(){
  //HERE WE GO :)
    struct node*root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->left->right->left=newNode(8);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->right->left=newNode(9);
    root->right->right->right=newNode(10);

    
    
    vector<int> inOrder;
    inOrder=inOrderTrav(root);
    
    cout<<"inorder traversal is ";
    for(int i=0;i<inOrder.size();i++){
        cout<<inOrder[i]<<" ";
    }
    return 0;
}


/*
Sample Test Case->

Input->

Output->

T.C.->0(n)
S.C.->0(n)



*/
