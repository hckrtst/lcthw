#include "Tree.h"
#include <stdlib.h>

static sk_err_code make_node(int data, struct sk_node **node)
{
    *node = (struct sk_node*) malloc(sizeof(struct sk_node));
    if (*node) {
        printf("allocted node for %d\n", data);
        return SK_SUCC;
    }
    printf("Error allocating memory for node\n");
    return SK_GEN_ERR;
}

sk_err_code sk_insert_recursive(struct sk_tree *tree, int data)
{
    tree->root =  sk_insert_r(tree->root, data);
    return SK_SUCC;
}

struct sk_node *sk_insert_r(struct sk_node *root, int data) 
{
    do {
        if (NULL == root) {
            if (SK_SUCC != make_node(data, &root)) {
                printf("Error making new node");
                break;
            }           
            return root;
        } else if (root->data == data) {
            // Don't allow duplicates
            printf("Already inserted");
            return root;
        } else {
            int child_index = root->data < data;            
            root->children[child_index] = sk_insert_r(root->children[child_index], data);
            printf("Inserted %d", data);
        }
    } while(0);
    return NULL;
}

sk_err_code sk_insert_iterative(struct sk_tree *tree, int data)
{
    return SK_GEN_ERR;
}

struct sk_node *sk_insert_i(struct sk_node *root, int data)
{
    return NULL;
}
    
sk_err_code sk_find_r(struct sk_node *root, int data)
{
    sk_err_code ret = SK_GEN_ERR;
    
    do {
        if (NULL == root) {
            break;        
        } else if (data == root->data) {
            ret = SK_SUCC;
            break;
        } else {
            ret = sk_find_r(root, data);
        }        
    }while(0);
    
    return ret;
}

sk_err_code sk_find_recursive(struct sk_tree *tree, int data)
{
    sk_err_code ret = SK_GEN_ERR;
    do {
        if ((NULL == tree) || (NULL == tree->root)) break;
        ret = sk_find_r(tree->root, data);
    } while(0);
    
    return ret;
}

sk_err_code sk_find_i(struct sk_node *root, int data)
{
    return SK_GEN_ERR;
}

sk_err_code sk_find_iterative(struct sk_tree *tree, int data)
{
    return SK_GEN_ERR;
}