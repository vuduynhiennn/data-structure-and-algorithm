## what is linked list ?

a linked list is a data structure used for storing collections of data. A linked list has the following properties

1. successive elements are connected by pointers
2. the last element points to NULL
3. can grow or shrink in size during execution  
4. can be made just as long as required (unit systems memory exhausts)
5. does not waste memory spcae (but takes some extra memory for pointers). It allocates memory as list grows 

## why linked list ?

there are many other data structures that do the same thing as linked list. Before discussing linked list it is important to understand the difference between linked lists and arrays. Both linked list and arrays are used to store collections of data, and since both are used for the same purpose, we need to differentate their usage. That means in which cases arrays are suiable and in which cases linked list are suiable 

## arrays overview

| | | | | | | |
|-|-|-|-|-|-|-|
|3|2|1|2|2|3|
| | | | | | | |  
0 |1|2|3|4|5|index| 

## why constant time for accessing arrat elements 


