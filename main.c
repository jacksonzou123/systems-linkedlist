#include<stdlib.h>
#include<stdio.h>
#include"node.h"

int main() {
  struct node *test;
  printf("Printing empty list:\n");
  print_list(test);
  printf("Adding values to list:\n");
  test = insert_front(test, 1);
  test = insert_front(test, 2);
  test = insert_front(test, 3);
  test = insert_front(test, 4);
  test = insert_front(test, 5);
  test = insert_front(test, 6);
  print_list(test);
  printf("Removing 4:\n");
  test = remove_node(test, 4);
  print_list(test);
  printf("Removing 3:\n");
  test = remove_node(test, 3);
  print_list(test);
  printf("Freeing list:\n");
  test = free_list(test);
  print_list(test);
  return 0;
}
