# Push_Swap

## Push Swap - Optimized Sorting Project

Push Swap is an iconic algorithmic project from the 42 school curriculum that serves as an excellent exercise in logic and optimization. The objective is to sort a stack of integers using a limited set of operations while minimizing the number of moves required.

## The Concept

The project provides two stacks: stack A (initially containing the numbers to sort) and stack B (initially empty). The challenge is to sort all numbers in stack A in ascending order using only a defined set of operations:

sa/sb: swap - exchange the first two elements of a stack
pa/pb: push - move the first element from one stack to the other
ra/rb: rotate - rotate the stack upward (the first element becomes the last)
rra/rrb: reverse rotate - rotate the stack downward (the last element becomes the first)
ss/rr/rrr: perform the operation on both stacks simultaneously

## The Challenge
The difficulty lies in designing an efficient algorithm that minimizes the number of operations. The grading scale is strict and depends on the number of elements to sort:

For 3 numbers: maximum 3 operations
For 5 numbers: limit around 12 operations
For 100 numbers: approximately 700 operations for maximum grade
For 500 numbers: approximately 5500 operations for maximum grade
