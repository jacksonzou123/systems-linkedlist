#include<stdlib.h>
#include<stdio.h>
#include"node.h"

void print_list(struct node *p) {
  printf("[ ");
  while (p != NULL) {
    printf("%d ", p->i);
    p = p->next;
  }
  printf("]\n");
}

struct node * insert_front(struct node *p, int num) {
  struct node *new = calloc(1, sizeof(struct node));
  new->i = num;
  new->next = p;
  return new;
}

struct node * free_list(struct node *p) {
  if (p->next != NULL) {
    free_list(p->next);
  }
  free(p);
  return NULL;
}

struct node * remove_node(struct node *front, int data) {
  struct node * new;
  if (front->i == data) {
    int more = 1;
    if (front->next == NULL) {
      more = 0;
    }
    new = front->next;
    free(front);
    if (more) {
      new = remove_node(new, data);
    }
    return new;
  }
  else {
    int more = 1;
    if (front->next == NULL) {
      more = 0;
    }
    if (more) {
      front->next = remove_node(front->next, data);
    }
    return front;
  }
}
