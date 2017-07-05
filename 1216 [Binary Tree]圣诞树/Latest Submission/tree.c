#include "tree.h"
Node* init_root(int value) {
  Node *current = (Node *)malloc(sizeof(Node));
  current -> left = NULL;
  current -> right = NULL;
  current -> value = value;
  return current;
}
Node* create_node(int value) {
  Node *current;
  current = (Node *)malloc(sizeof(Node));
  current -> left = NULL;
  current -> right = NULL;
  current -> value = value;
  return current;
}
void insert_node(Node *p, int value) {
  while (p != NULL) {
    if (value < p -> value) {
      if (p -> left) {
        p = p -> left;
      }
      else {
        p -> left = create_node(value);
        break;
      }
    } else {
      if (p -> right) {
        p = p -> right;
      }
      else {
        p -> right = create_node(value);
        break;
      }
    }
  }
}
void traverse_tree_inorder(Node *p) {
  if (p != NULL) {
    traverse_tree_inorder(p -> left);
    printf("%d ", p -> value);
    traverse_tree_inorder(p -> right);
  }
}
void recycle_nodes(Node *p) {
  if (p != NULL) {
    recycle_nodes(p -> left);
    recycle_nodes(p -> right);
    free(p);
  }
}