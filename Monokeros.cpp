#include <stdio.h>
#include <stdlib.h>

struct node 
    { 
        long int key; 
        struct node *left, *right; 
    };
    
    int depth = 1;
    
    struct node *newNode(long int item) 
    { 
        struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
        temp->key = item; 
        temp->left = temp->right = NULL; 
        return temp; 
    } 
    
    
    struct node* insert(struct node* node, long int key) 
    { 
    
    if (node == NULL) {
       printf("%d ",depth);
       return newNode(key);
    } 
    
    if (key <= node->key) {
        depth++;
        node->left  = insert(node->left, key);
    }
         
    else if (key > node->key) {
        depth++;
        node->right = insert(node->right, key);
    }
            
    return node; 
    } 
    
    int main() {
        struct node *root = NULL;
        long int N,key;
        scanf("%ld %ld", &N,&key);
        root = insert(root,key);
        int i =1;
        while(i<N) {
            scanf("%ld", &key);
            insert(root,key);
            depth = 1;
            i++;
        }
        
    
    
}