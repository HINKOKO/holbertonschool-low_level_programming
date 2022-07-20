
#C - Doubly Linked Lists

##Learning objectives

- What is a doubly linked Lists
- How to use doubly linked Lists
- Start to look for the right source of information withou too much help

##Requirements

- Compilation: on Ubuntu 20.04 LTS using gcc
- Code style: checked with Betty style, a specific style checker used by Holberton School

##Data structure

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
