/* 
 * File:   Tree.h
 * Author: sanket
 *
 * Created on July 31, 2015, 12:51 PM
 */

#ifndef TREE_H
#define	TREE_H

#include <stdio.h>

#ifdef	__cplusplus
extern "C" {
#endif

struct sk_node {
    int data;
    struct sk_node* children[2];
};

struct sk_tree {
    struct sk_node * root;
};

typedef enum {
    SK_SUCC,SK_GEN_ERR,SK_BAD_PARAM            
}sk_err_code;


/* functions */
sk_err_code sk_insert_recursive(struct sk_tree *tree, int data);
struct sk_node *sk_insert_r(struct sk_node *root, int data);

sk_err_code sk_insert_iterative(struct sk_tree *tree, int data);
struct sk_node *sk_insert_i(struct sk_node *root, int data);
    
sk_err_code sk_find_r(struct sk_node *root, int data);
sk_err_code sk_find_recursive(struct sk_tree *tree, int data);

sk_err_code sk_find_i(struct sk_node *root, int data);
sk_err_code sk_find_iterative(struct sk_tree *tree, int data);

/*static inline void sk_dump_tree(struct sk_tree *tree) {
    // TODO write recursive version
    if ((NULL == tree) || (NULL == tree->root)) {
        printf("empty\n");
    }
    
    struct sk_node *node = tree->root;
    
    for(;;) {
        
    }
}*/

#ifdef	__cplusplus
}
#endif

#endif	/* TREE_H */

