#Singly linked lists
1. Task one
Write a function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);

Return: the number of nodes

Format: see example

If str is NULL, print [0] (nil)

	You are allowed to use printf

	Solution: 0-print_list.c

2. Task two
Write a function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);

Solution: 1-list_len.c

3. Task Three
Write a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);

Return: the address of the new element, or NULL if it failed

str needs to be duplicated

You are allowed to use strdup

Solution: 2-add_node.c

3. Task Four
Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);

Return: the address of the new element, or NULL if it failed

str needs to be duplicated

You are allowed to use strdup

Solution: 3-add_node_end.c

4. Task Four
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

You are allowed to use the printf function

Solution: 100-first.c
