# 0x13-more_singly_linked_lists


## 0-print_listint.c 
> A function that prints all the elements of a ``` listint_t ``` list.
> - Prototype: ``` size_t print_listint(const listint_t *h); ```
> - Returns the number of nodes.

## 1-listint_len.c
> A function that returns the number of elements in a linked listint_t list.
> - Prototype: ``` size_t listint_len(const listint_t *h); ```

## 2-addnodeint.c
> A function that adds a new node at the beginning of a ``` listint_t ``` list.
> - Prototype: ``` listint_t *add_nodeint(listint_t **head, const int n); ```.
> - Returns the address of the new element or NULL if it fails.

## 3-add_nodeint_end.c
>  A function that adds a new node at the end of a ``` lintint_t ``` list.
> - Prototype: ``` listint_t *add_nodeint_end(listint_t **head, const int n); ```.
> - Returns the address of the new element or NULL if it fails.

## 4-free_listint.c
> A function that frees a ``` listint_t ``` list.
> - Prototype: ``` void free_listint(listint_t *head); ```.

## 5-free_listint2.c
> A function that frees a ``` listint_t ``` list.
> - Prototype: ``` void free_listint2(listint_t **head); ```.
> - ``` head ``` is set to ``` NULL ```.

## 6-pop_listint.c
>A function that deletes the head node of a listint_t linked list and returns the head node's
data (n).
> - Prototype: ``` int pop_listint(listint_t **head); ```.
> - If the linked list is empty, ``` 0 ``` is returned.

## 7-get_nodeint.c
> A function that returns the nth node of a listint_t.
> - Prorotype: ``` listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); ```.
> - ``` index ``` is the index of the node starting at ``` 0 ```.
> - Returns *NULL* if node does not exist.

## 8-sum_listint.c
> A function that returns the sum of all the data (n) of a ``` listint_t ``` linked list.
> - Protoype: ``` int sum_listint(listint_t *head); ```.
> - If list is empty, ``` 0 ``` is returned.

## 9-insert_nodeint.c
> A function that inserts a new node at a given position.
> - Prototype: ``` listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); ```.
> - ``` idx ``` is the index of the list where the new node should be added. Index starts at 0
> - The function returns the address of the new node or ``` NULL ``` if it failed.
> - If new node cannot be added at ``` idx ```, it is not added, function returns *NULL*.

## 10-delete_nodeint.c
> A function that deletes the node at index ``` index ``` of a ``` listint_t ``` linked list.
> - Prototype: ``` int delete_nodeint_at_index(listint_t **head, unsigned int index); ```.
> - ``` index ``` is the index of the node that should be dleted. Index starts at 0.
> - Returns ``` 1 ``` if succesful, ``` -1 ``` if it fails.

## 100-reverse_listint.c
> A function that reverses a ``` listint_t ``` linked list.
> - Prototype: ``` listint_t *reverse_listint(listint_t **head); ```.
> - Returns a pointer to the first node of te reversed list.

## 101-print_listint_safe.c
> A function that prints a ``` listint_t ``` linked list.
> - Prototype: ``` size_t print_listint_safe(const listint_t *head); ```.
> - Returns the number of nodes in the list.
> - If the function fails, it exits the program with status ``` 98 ```.
## 102-free_listint_safe.c
> A function that free a ``` listint_t ``` list and set the head to null.
> - Prototype: ``` size_t free_listint_safe(listint_t **h)  ```.
> - Returns the size of the list that was free'd
## 103-find_loop.c
> A function that finds the loop in a linked list.
> - Prototype: ``` listint_t *find_listint_loop(listint_t *head); ```.
> - Returns the address of the node where the loop starts or ``` NULL ``` if there is no loop.

## lists.h
> Header file contains function prototypes of all functions written in this project.

