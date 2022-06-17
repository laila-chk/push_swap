# push_swap
in this project we have to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. We had to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.
there are so many known sorting algorithmes, but they won't work for us since we should use two stacks to sort our data, only pushing elements from a stack to another, and swapping, rotating or reverse rotating them, the actions we are allowed to use in details are :
sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
rrr : rra and rrb at the same time.
