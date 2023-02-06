#ifndef LIST_H
#define LIST_H

#define E int

void create_list(void);
void insert(E element);
int find(E element);
void print_list(void);
void remove_node(int idx);
void pop_back(void);
int top(void);
int front(void);
void close_list(void);


#endif