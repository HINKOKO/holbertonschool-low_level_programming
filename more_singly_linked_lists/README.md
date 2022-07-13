# More singly linked lists

**Learning objectives**

The purpose of this project is to make us know how to use singly linked lists.
This is also for getting able to start to look for the right source of information without too much help and without wasting a lot of time.

**Requirements**

Allowed editors: vi, vim, emacs.
Compilation: on Ubuntu 20.04LTS, using gcc, with options  -Wall -Werror -Wextra -pedantic -std=gnu89

**Data Structure**

This one:

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
