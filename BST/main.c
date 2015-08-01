/* 
 * File:   main.c
 * Author: sanket
 *
 * Created on July 31, 2015, 12:32 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"


/*
 * 
 */
int main(int argc, char** argv) {

    struct sk_tree *tree = malloc(sizeof(struct sk_tree));
    
    int i;
    
    i = 2;
    printf("Insert %d result = %d\n", i, sk_insert_recursive(tree, i));
    
    i = 5;
    printf("Insert %d result = %d\n", i, sk_insert_recursive(tree, i));
    
    i = 6;
    printf("Insert %d result = %d\n", i, sk_insert_recursive(tree, i));
    
    // TODO free mem!
    
    return (EXIT_SUCCESS);
}

