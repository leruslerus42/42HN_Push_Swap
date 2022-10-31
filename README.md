# Push_Swap

## GENERAL

The task of this exercise is to sort a list of random numbers using two stacks a and b and some given instructions described below. 
The challenge is not only about sorting numbers in general, but also to do so in an efficient way.

## ALLOWED INSTRUCTIONS

- sa: exchange the two elements on the top of the stack A.
- sb: exchange the two elements on the top of the stack B.
- ss: perform a swap on both stacks at the same time.
- pa: push the topmost element of the stack A to the top of stack B.
- pb: push the topmost element of the stack B to the top of stack A.
- ra: rotate the stack A in ascending order.
- rra: rotate the stack A in descending order.
- rb: rotate the stack B in ascending order.
- rrb: rotate the stack B in descending order.
- rr: rotate both stacks in ascending order.
- rrr: rotate both stacks in descending order.

## APPROACH

The sorting algorithm is kept quite simple: at the beginning, the numbers are indiced from 1 to n, where n is the total numbers of inputs or numbers inserted in our stack.
After that, the indices are sorted radix sorting algorithm.
That means by the same amount of input numbers, the number of operation needed to sort our stack will be always the same, indipendently from the values.
This is possible because, we will work with the indexes of the inputs and not with their raw values.

## RADIX ALGORITM
The radix sorting algorithm is quite simple: if the last binary digit is a zero, the number is pushed to the stack B, otherwise, the stack A is rotated. 
After going through the whole stack A, the numbers in the other stack are pushed back to the stack A. 
Then the process is repeated with the second last binary digit, the third last binary digit and so on, until we come to the first binary digit.
At this point the stack will be sorted: the trick about it is that we sort the stack analizing the bits in binary of the indexes of the input numbers,
that is the strenght of the Radix Algoritm.

## EXECUTION

After running the makefile, a list of valid integers can be passed as argument(s) to the executable as argument, negative numbers also (no duplicates). 
The application will the show the number of operations that are needed to sort these numbers.

## CHECKER

The 'checker' (of the Bonus Part) programm can read the Operations from Stdin and perform them on a stack of numbers.
Checker will return 'OK' when the given operations will sort the numbers in ascending order. Otherwise it returns 'KO'.
In case of an error (f.ex. Operations doesn't exist) it returns 'Error'.

## NORMINETTE

As all other C projects at the 42 school, the code has to written in accordance with the norm:
- only 25 lines per function
- only 5 functions per file
- the only predefined functions allowed for this project are: read, write, malloc, free, exit.

## TESTING
<img width="590" alt="screenshot" src="https://user-images.githubusercontent.com/85942176/198931289-a16b9329-d5a4-4c0a-b6a2-162770dd1731.png">

- git@github.com:louisabricot/push_swap_tester.git

## RESULT 
<img width="1174" alt="Screenshot 2022-10-31 at 05 02 35" src="https://user-images.githubusercontent.com/85942176/198930872-78ab72c7-59fa-4c6f-813d-18104800fb7e.png">

