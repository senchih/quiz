#include <stdlib.h>
#include <stdio.h>
typedef struct node {
    int value;
    struct node *left;
    struct node *right;
} TreeNode;

void flatten(TreeNode *root) {
    if(!root)
        return;
    if(root->left)
        flatten(root->left);
    if(root->right)
        flatten(root->right);
    TreeNode *tmp = root->right;
    root->right = root->left;
    root->left = NULL;
    while(root->right != NULL)
        root = root->right;
    root->right = tmp;
}

int main()
{
    TreeNode *node[6];
    TreeNode *e, *root;

    for(int i=0; i<6; i++) {
        node[i] = (TreeNode *) malloc(sizeof(TreeNode));
        e = node[i];
        e->value = i+1;
        e->left = NULL;
        e->right = NULL;
    }

    root = node[0];
    node[0]->left = node[1];
    node[0]->right = node[4];
    node[1]->left = node[2];
    node[1]->right = node[3];
    node[4]->right = node[5];

    flatten(root);
    e=root;
    while(e->right) {
        printf("%d\n",e->value);
        e=e->right;
    }
    printf("%d\n",e->value);

    for(int i=0; i<6; i++) {
        free(node[i]);
    }
    return 0;
}

