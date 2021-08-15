# data structure and algorithm

## data type

there are two types of data types:

 **system-defined data types (also called primitive data types)**

1.int, float, bool, char, double, etc,.. 

**user-defined data types** 

1. if the system-defined data types are not enough, then most programming languages allow the users to define their own data-types, called user-data types

2. this give more flexibility and comfort in dealing with computer memory

## data structure

we need some mechanism for manipulating that data to solve problems. Data structure is a particular way of storing and organizing data in computer and storing data. A data structure is a special format for organizing and storing data. General data structure types include arrays file, linked list, lists, stacks, queues, trees, graphs and so on

depending on the organization of the elements, data structures are classified into two types

    1. linear data structures: elements are accessed in a sequential order but it is not compulsory to store all elements sequentially. Examples: linked list, stacks, queues

    2. non-linear data structures: elements of this data structure are stored/accessed in a non-linear order. Examples: trees and graphs

## Abstract data types

An abstract data type consists of two part 

    1. declaration of date

    2. declaration of operations

    
## what is agorithm ?

an agorithm is the step by step unambiguous instructions to solve a given problem

## Why is the analysis of algorithm ?

algorithm analysis helps us to determine which algorithm is most efficent in terms of time and space consumed

## Goal of the analysis of algorithms

the goal of the analysis of algorithms is to compare algorithms (or solutions) mainly in terms of running time bu also in terms of other factors
    
## what is running time analysis

input size is the number of elements in the input, and depending on the problem type, the input may be of different types:

    1. size of an array 

    2. polynomial degree

    3. number of elements in a matrix 

    4. number of bits in the binary representaion of the 
    input 

    5. vertices and edgres 


## how to compare algorithms

a few object measures:

1. excution time ? excution times are specific to a particular computer 

2. number of statements excuted ? not a good measure, since the number of statements varies with the programming language as well as the style of individual programmer.

3. idea solution ? let us assume that we express the running time of a given algorithm as a function of the input size n (i, e, f(n)) and compare these different functions corresponding to running times. This kind of comparision is independent of machine time, programming syle, etc...

## what is rate of growth

The rate at which the running time increases as a function of input is called rate of growth

## commonly used rates of growth


| | | |
|-|-|-|
|__Time complexity__| __Name__ | __Example__ |
| 1 |  constant| adding an element to the front of a linked list |
| log n | logarithmic| finding an element in sorted array |
| n | linear | finding an element in an unsorted array |
| n log n | linear logarithmic | sorting n items divide and 'conquer' mergesort |
| n ^ 2 | quadratic | shortest path between two nodes in graph |
| n ^ 3 | cubic | matrix multiplication |
| 2 ^ n | exponential | the towers of hanoi problem |
