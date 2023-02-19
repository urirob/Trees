/*
 
 Hare Krishna Hare Krishna Krishna Krishna Hare Hare
 Hare Rama Hare Rama Rama Rama Hare Hare
 
 You will win, Lord Krsna always there to guide and protect you
 
 
 */

//POSTORDER TRAVERSAL ALGORITHM
//https://takeuforward.org/data-structure/post-order-traversal-of-binary-tree/
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
 
 void postorder(node){
    
    if(node==NULL)
        return;
    
    postorder(node->left)
 
    postorder(node->right)
 
    print(node->data)
 }
 */

struct node{
    int data;
    struct node*left,*right;
};

void postOrderTrav(node*currentNode, vector<int>&postOrder){
    if(currentNode==NULL)
        return;
    
    postOrderTrav(currentNode->left,postOrder);
    postOrderTrav(currentNode->right, postOrder);
    postOrder.push_back(currentNode->data);
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

    
    
    vector<int> postOrder;
    postOrderTrav(root, postOrder);
    
    cout<<"postorder traversal is ";
    for(int i=0;i<postOrder.size();i++){
        cout<<postOrder[i]<<" ";
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
