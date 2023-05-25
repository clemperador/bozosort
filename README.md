# bozosort
Basic implementation of Bozo Sort in C.

## Introduction
**bozo sort**
_(algorithm)_

**Definition:** A terribly inefficient sort algorithm that randomly swaps items until they are in order. 

This is a basic implementation of it on C. A swap count is also implemented. 


## Usage
An already compiled file is provided, but you can compile it yourself through `$ gcc random_sort.c -o randy`.

Then just run:

`./randy [size] [maxnum]`, with [size] and [maxnum] both integers. If no arguments are given, don't worry. The program will ask for both to be typed as inputs.

A list of [size] random integers between 1 and [maxnum] will be made and bozo-sorted. 
