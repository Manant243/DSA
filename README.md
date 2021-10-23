# DSA learning and practice

![Language](https://img.shields.io/badge/Language-C++-red.svg?style=for-the-badge)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
![License](https://img.shields.io/badge/License-MIT-blue.svg?style=for-the-badge)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
![Update](https://img.shields.io/badge/Update-daily-purple.svg?style=for-the-badge)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
![Problems](https://img.shields.io/badge/Problems-180-brown.svg?style=for-the-badge)&nbsp;&nbsp;

Please use the discussions tab for any queries.
<br>
<br>
Use the index given below to search for problems and solutions. Problems are arranged in non-descending order of difficulty.
<br>
<br>

## 💢 Index
### Theory
* [Introduction](#-Introduction)<br>
* [Big-O Notation](#-the-big-o-notation)<br>

### Data Structures
* [Arrays](#-arrays)<br>
* [Linked Lists](#-linked-lists)<br>
* [Stacks](#-stacks)<br>
* [Tree](#-tree)<br>
* [Trie (Prefix tree)](#-trie)<br>

### Algorithms
* [Dynamic programming](#-dynamic-programming)<br>
* [Binary Search](#-binary-search)<br>
* [Depth First Search](#-depth-first-search)<br>
* [Strings](#-strings)<br>

### Extra
* [Miscellaneous/Uncategorized Problems](#-miscellaneous-problems)
<br>


## 💢 Introduction
### What is data structure(DS)?
A way of organizing data, so it can be used effectively.
<br>

### Why do we use them?
* To create fast and powerful algorithms
* To make code easier for understanding

### What is abstract data type(ADT)?
An abstraction of a DS which provides only an interface. An interface is not specific to any programming language, instead, it's completely free of all of them.<br>
ADTs are implemented using data structures.<br>
<br>
Some examples are :

|  #  | ADT        |  Implementation(DS) |
|:-----:| --------------- | -----------  |
|  1  | Lists | Dynamic Array <br> Linked List |
|  2  | Queue | Array based queue <br> Stack based queue <br> Linked List based queue |
|  3  | Maps | Hash table <br> Tree |
<br>


## 💢 The Big-O Notation
### What is Big-O and why do we use it?
Big-O notation helps us identify the time and space complexity of an algorithm. There are many other notations as well, like, Big-Theta, or, Big-Omega, but we use Big-O because it deals with the worst case scenario of an algorithm, i.e., when the size of input tends to infinity.<br>

Size of input is denoted by 'n'. <br>
<br>

### Ascending order of complexity :

|  #  | Notation        |  Name        |  Example (time)   |
|:-----:|---------------| -----------  | ----------- |
|  1  |  O (1)          | Constant     | Accessing an array |
|  2  |  O (log n)      | Logarithmic  | Binary search |
|  3  |  O (n)          | Linear       | Traversing an array |
|  4  |  O (n log n)    | Linearithmic | Merge sort |
|  5  |  O (n^2)        | Quadratic    | 2 Nested loops |
|  6  |  O (n^3)        | Cubic        | 3 Nested loops |
| ... |  |  |  |
|  7  |  O (nm)         | O of n m     | Iterating over a matrix of (n X m) |
| ... |  |  |  |
|  8  |  O (b^n)        | Exponential  | All subsets of a set -> O (2^n) |
|  9  |  O (n!)         | Factorial    | All permutations of a string |

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Arrays
### Property
Each and every element is indexable(can be referenced with a number) from range 0 to n-1. 'n' is the size of array. <br>
Used :- <br>
* for sorting
* to access sequential data
* as buffer by I/O routines
* as lookup / inverse lookup tables
* to return multiple values from a function
* as *cache* in dynamic programming

### Types
♦️*Static* : fixed length<br>

♦️*Dynamic* : variable length; implemented using static array; when size capacity is reached, a new static array of double size is created and elements are copied. <br>
<br>

### Problems on arrays
Key : 🟢 Easy, 🟡 Medium, 🔴 Hard
<br>
<br>
![Count](https://img.shields.io/badge/Count-75-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
|1929  | [Concatenation of array](https://leetcode.com/problems/concatenation-of-array) | [C++](./C++/1929.cpp) |||🟢| | |
|1920  | [Build array from permutation](https://leetcode.com/problems/build-array-from-permutation) | [C++](./C++/1920.cpp) |||🟢| | |
|1480  | [Running sum of 1D array](https://leetcode.com/problems/running-sum-of-1d-array) | [C++](./C++/1480.cpp) |||🟢| | |
|1672  | [Richest customer wealth](https://leetcode.com/problems/richest-customer-wealth) | [C++](./C++/1672.cpp) |||🟢| |matrix|
|0566  | [Reshape the matrix](https://leetcode.com/problems/reshape-the-matrix) | [C++](./C++/0566.cpp) |||🟢| | |
|1470  | [Shuffle the array](https://leetcode.com/problems/shuffle-the-array) | [C++](./C++/1470.cpp) |||🟢| | |
|1431  | [Kids with greatest number of candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies) | [C++](./C++/1431.cpp)|||🟢| | |
|1512  | [Number of good pairs](https://leetcode.com/problems/number-of-good-pairs) | [C++](./C++/1512.cpp) |||🟢| |bruteforce,<br> hash table|
|1365  | [How many numbers are smaller than current number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number) | [C++](./C++/1365.cpp) |||🟢| |frequency array|
|1528  | [Shuffle string](https://leetcode.com/problems/shuffle-string) | [C++](./C++/1528.cpp) |||🟢|||
|0136  | [Single number](https://leetcode.com/problems/single-number) | [C++](./C++/0136.cpp) |||🟢|||
|1720  | [Decode XORed array](https://leetcode.com/problems/decode-xored-array) | [C++](./C++/1720.cpp) |||🟢||XOR property|
|0169  | [Majority element](https://leetcode.com/problems/majority-element) | [C++](./C++/0169.cpp) |||🟢||Moore's Voting algo|
|1313  | [Decompress run-length encoded list](https://leetcode.com/problems/decompress-run-length-encoded-list) | [C++](./C++/1313.cpp) |O(n^2)||🟢|||
|1389  | [Create taget array in the given order](https://leetcode.com/problems/create-target-array-in-the-given-order) | [C++](./C++/1389.cpp) |O(n)||🟢|||
|1773  | [Count items maching a rule](https://leetcode.com/problems/count-items-matching-a-rule) | [C++](./C++/1773.cpp) |||🟢|||
|1588  | [Sum of all odd length arrays](https://leetcode.com/problems/sum-of-all-odd-length-subarrays) | [C++](./C++/1588.cpp) |||🟢|||
|0118  | [Pascal's triangle](https://leetcode.com/problems/pascals-triangle) | [C++](./C++/0118.cpp) |||🟢|||
|1656  | [Design an ordered stream](https://leetcode.com/problems/design-an-ordered-stream) | [C++](./C++/1656.cpp) |||🟢|||
|1662  | [Check if two atring arrays are equivalent](https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent) | [C++](./C++/1662.cpp) |||🟢|||
|1684  | [Count the number of consistent strings](https://leetcode.com/problems/count-the-number-of-consistent-strings) | [C++](./C++/1684.cpp) |||🟢|||
|1913  | [Maximum product difference between two pairs](https://leetcode.com/problems/maximum-product-difference-between-two-pairs) | [C++](./C++/1913.cpp) |O(nlogn),<br>O(n)||🟢|||
|1816  | [Truncate sentence](https://leetcode.com/problems/truncate-sentence) | [C++](./C++/1816.cpp) |||🟢|||
|1979  | [Find greatest common divisor of array](https://leetcode.com/problems/find-greatest-common-divisor-of-array) | [C++](./C++/1979.cpp) |||🟢|||
|1629  | [Slowest key](https://leetcode.com/problems/slowest-key) | [C++](./C++/1629.cpp) |||🟢|||
|0217  | [Contains duplicate](https://leetcode.com/problems/contains-duplicate) | [C++](./C++/0217.cpp) |O(n)||🟢|||
|0001  | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./C++/0001.cpp) |O(n)|O(1)|🟢| | hash table|
|0026  | [Remove duplicates from sorted array](https://leetcode.com/problems/remove-duplicates-from-sorted-array) | [C++](./C++/0026.cpp) |      |   |🟢|||
|0888  | [Fair candy swap](https://leetcode.com/problems/fair-candy-swap) | [C++](./C++/0888.cpp) |||🟢|||
|0350  | [Intersection of two arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii) | [C++](./C++/0027.cpp) |||🟢|||
|0121  | [Best time to buy and sell stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock) | [C++](./C++/0121.cpp) |||🟢|||
|0027  | [Remove Element](https://leetcode.com/problems/remove-element) | [C++](./C++/0027.cpp) |||🟢|||
|0744  | [Find smallest letter greater than target](https://leetcode.com/problems/find-smallest-letter-greater-than-target) | [C++](./C++/0744.cpp) |O(logn)||🟢|||
|0053  | [Maximum subarray](https://leetcode.com/problems/maximum-subarray) | [C++](./C++/0053.cpp) |||🟢||Kadane's algorithm|
|0066  | [Plus One](https://leetcode.com/problems/plus-one) | [C++](./C++/0066.cpp) |||🟢|||
|0088  | [Merge sorted array](https://leetcode.com/problems/merge-sorted-array) | [C++](./C++/0088.cpp) |||🟢|||
|0645  | [Set mismatch](https://leetcode.com/problems/set-mismatch) | [C++](./C++/0645.cpp) |||🟢|||
|0414  | [Third maximum number](https://leetcode.com/problems/third-maximum-number) | [C++](./C++/0414.cpp) |||🟢|||
|1909  | [Remove one element to make array strictly increasing](https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing) | [C++](./C++/1909.cpp) |||🟢|||
|0977  | [Squares of a sorted array](https://leetcode.com/problems/squares-of-a-sorted-array) | [C++](./C++/0977.cpp) |||🟢|||
|0442  | [Find all duplicates in an array](https://leetcode.com/problems/find-all-duplicates-in-an-array) | [C++](./C++/0442.cpp) |||🟡||sort,<br>hash maps,<br>logic|
|0540  | [Single element in a sorted array](https://leetcode.com/problems/single-element-in-a-sorted-array) | [C++](./C++/0540.cpp) |||🟡|||
|1814  | [Count nice pairs](https://leetcode.com/problems/count-nice-pairs-in-an-array) | [C++](./C++/1814.cpp) |||🟡|||
|0189  | [Rotate array](https://leetcode.com/problems/rotate-array) | [C++](./C++/0189.cpp) |||🟡|||
|0215  | [K-th largest element in an array](https://leetcode.com/problems/kth-largest-element-in-an-array) | [C++](./C++/0215.cpp) |||🟡|||
|0015  | [3Sum](https://leetcode.com/problems/3sum) | [C++](./C++/0015.cpp) |||🟡|||
|0018  | [4Sum](https://leetcode.com/problems/4sum) | [C++](./C++/0018.cpp) |||🟡|||
|0039  | [Combination sum](https://leetcode.com/problems/combination-sum) | [C++](./C++/0039.cpp) |||🟡|||
|1052  | [Grumpty bookstore owner](https://leetcode.com/problems/grumpy-bookstore-owner) | [C++](./C++/1052.cpp) |||🟡|||
|0040  | [Combination sum II](https://leetcode.com/problems/combination-sum-ii) | [C++](./C++/0040.cpp) |||🟡|||
|0667  | [Beautiful arrangement II](https://leetcode.com/problems/beautiful-arrangement-ii) | [C++](./C++/0667.cpp) |||🟡|||
|0074  | [Search a 2D matrix](https://leetcode.com/problems/search-a-2d-matrix)| [C++](./C++/0074.cpp) |||🟡|||
|1823  | [Find the inner of the circular game](https://leetcode.com/problems/find-the-winner-of-the-circular-game)| [C++](./C++/1823.cpp) |||🟡|||
|0152  | [Maximum product subarray](https://leetcode.com/problems/maximum-product-subarray) | [C++](./C++/0152.cpp) |||🟡|||
|0309  | [Best time to buy and sell stock with cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)| [C++](./C++/0309.cpp) |||🟡|||
|0036  | [Valid sudoku](https://leetcode.com/problems/valid-sudoku) | [C++](./C++/0036.cpp) |||🟡||hash maps, or<br>2D array|
|0011  | [Container with most water](https://leetcode.com/problems/container-with-most-water) | [C++](./C++/0011.cpp) |||🟡|||
|0204  | [Count primes](https://leetcode.com/problems/count-primes) | [C++](./C++/0204.cpp) |||🟡|||
|0128  | [Longest consecutive sequence](https://leetcode.com/problems/longest-consecutive-sequence) | [C++](./C++/0128.cpp) |||🟡|||
|0034  | [Find first and last position of element in sorted array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array) | [C++](./C++/0034.cpp) |||🟡|||
|0950  | [Reveal cards in increasing order](https://leetcode.com/problems/reveal-cards-in-increasing-order) | [C++](./C++/0950.cpp) |||🟡|||
|1343  | [Number of sub-arrays of size k and average greater than or equal to threshold](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold) | [C++](./C++/1343.cpp) |||🟡|||
|0078  | [Subsets](https://leetcode.com/problems/subsets) | [C++](./C++/0078.cpp) |||🟡|||
|0090  | [Subsets II](https://leetcode.com/problems/subsets-ii) | [C++](./C++/0090.cpp) |||🟡|||
|0046  | [Permutations](https://leetcode.com/problems/permutations) | [C++](./C++/0046.cpp) |||🟡|||
|0047  | [Permutations II](https://leetcode.com/problems/permutations-ii) | [C++](./C++/0047.cpp) |||🟡|||
|1248  | [Count number of nice subarrays](https://leetcode.com/problems/count-number-of-nice-subarrays) | [C++](./C++/1248.cpp) |||🟡|||
|0033  | [Search in sorted array](https://leetcode.com/problems/search-in-rotated-sorted-array) | [C++](./C++/0033.cpp) |||🟡|||
|0523  | [Continuous subarray sum](https://leetcode.com/problems/continuous-subarray-sum) | [C++](./C++/0523.cpp) |||🟡|||
|0031  | [Next permutation](https://leetcode.com/problems/next-permutation) | [C++](./C++/0031.cpp) |||🟡|||
|0287  | [Find the duplicate number](https://leetcode.com/problems/find-the-duplicate-number) | [C++](./C++/0287.cpp) |||🟡|||
|0154  | [Find minimum in rotated sorted array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii) | [C++](./C++/0154.cpp) |||🔴|||
|0239  | [Sliding window maximum](https://leetcode.com/problems/sliding-window-maximum) | [C++](./C++/0239.cpp) |||🔴|||
|0004  | [Median of two sorted arrays](https://leetcode.com/problems/median-of-two-sorted-arrays) | [C++](./C++/0004.cpp) |||🔴||binary search,<br>careful of bounds|
|0992  | [Subarrays with k different integers](https://leetcode.com/problems/subarrays-with-k-different-integers) | [C++](./C++/0992.cpp) |||🔴|||



<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Linked Lists
### What is it?
A sequential list of data holding nodes that point to other nodes.
<br>
<br>

### Uses
* Stack, queue, list, circular list implementation
* Adjancy list for graphs
* Separate chaining to deal with hashing collisions

<br>

### Properties
__Node__ : contains data and pointer <br>
__Pointer__ : reference to another node <br>
__Head__ : first node in the list <br>
__Tail__ : last node in the list <br>

<br>

### Types
* Singly linked list : reference to next node only <br>
* Doubly linked list : reference to next and previous nodes <br>

| Type | Pros       | Cons        |
|-----| --------------- | -----------  | 
|  Singly  |  Less memory usage, <br> Simple implementation | Difficult to access previous element    |
|  Doubly  |  Backward traversal possible          | Takes much more memory <br> (Pointers can take lot of memory) | 
<br>

### Complexity Analysis
| Action | Singly LL | Doubly LL  |
|-----|:---------------:|:-----------:| 
| Search | O (n) | O (n) |
| Insert at head | O (1) | O (1) |
| Insert at tail | O (1) | O (1) |
| Remove at head | O (1) | O (1) |
| Remove at tail | O (n) | O (1) |
| Remove in between | O (n) | O (n) |
<br>

### Problems on linked lists
![Count](https://img.shields.io/badge/Count-23-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 1290 | [Convert binary number in a linked list to integer](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer) | [C++](./C++/1290.cpp) |||🟢||Bruteforce|
| 0876 | [Middle of the linked list](https://leetcode.com/problems/middle-of-the-linked-list) | [C++](./C++/0876.cpp) |||🟢||Bruteforce|
| 0237 | [Delete node in a linked list](https://leetcode.com/problems/delete-node-in-a-linked-list) | [C++](./C++/0237.cpp) |||🟢|||
| 0206 | [Reverse linked list](https://leetcode.com/problems/reverse-linked-list) | [C++](./C++/0206.cpp) |||🟢|||
| 0705 | [Design HashSet](https://leetcode.com/problems/design-hashset) | [C++](./C++/0705.cpp) |||🟢|||
| 0021 | [Merge two sorted lists](https://leetcode.com/problems/merge-two-sorted-lists) | [C++](./C++/0021.cpp) |||🟢||Merge sort|
| 0083 | [Remove duplicates from sorted list](https://leetcode.com/problems/remove-duplicates-from-sorted-list) | [C++](./C++/0083.cpp) |||🟢|||
| 0160 | [Intersection of two linked lists](https://leetcode.com/problems/intersection-of-two-linked-lists) | [C++](./C++/0160.cpp) |||🟢|||
| 0234 | [Palindrome linked list](https://leetcode.com/problems/palindrome-linked-list) | [C++](./C++/0234.cpp) |O(n)|O(1)|🟢||List reversal|
| 0141 | [Linked list cycle](https://leetcode.com/problems/linked-list-cycle) | [C++](./C++/0141.cpp) |||🟢|||
| 0203 | [Remove linked list elements](https://leetcode.com/problems/remove-linked-list-elements) | [C++](./C++/0203.cpp) |||🟢|||
| 0092 | [Reverse linked list II](https://leetcode.com/problems/reverse-linked-list-ii) | [C++](./C++/0092.cpp) |||🟡|||
| 0142 | [Linked list cycle II](https://leetcode.com/problems/linked-list-cycle-ii) | [C++](./C++/0142.cpp) |||🟡|||
| 0143 | [Reorder cycle](https://leetcode.com/problems/reorder-list) | [C++](./C++/0143.cpp) |||🟡|||
| 1669 | [Merge in between linked lists](https://leetcode.com/problems/merge-in-between-linked-lists) | [C++](./C++/1669.cpp) |||🟡|||
| 0019 | [Remove n-th node from end of list](https://leetcode.com/problems/remove-nth-node-from-end-of-list) | [C++](./C++/0019.cpp) |||🟡|||
| 1721 | [Swapping nodes in a linked list](https://leetcode.com/problems/swapping-nodes-in-a-linked-list) | [C++](./C++/1721.cpp) |||🟡|||
| 1019 | [Next greater node in linked list](https://leetcode.com/problems/next-greater-node-in-linked-list) | [C++](./C++/1019.cpp) |O(n)||🟡||Typical problem,<br> *Important*|
| 0328 | [Odd even linked list](https://leetcode.com/problems/odd-even-linked-list) | [C++](./C++/0328.cpp) |O(n)|O(1)|🟡|||
| 0002 | [Add two numbers](https://leetcode.com/problems/add-two-numbers) | [C++](./C++/0002.cpp) |||🟡|||
| 0445 | [Add two numbers II](https://leetcode.com/problems/add-two-numbers-ii) | [C++](./C++/0445.cpp) |||🟡|||

<br>

* Doubly linked list -

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 1472 | [Design browser history](https://leetcode.com/problems/design-browser-history) | [C++](./C++/1472.cpp) |||🟡||Create list structure|
| 0430 | [Flatten a multilevel doubly linked list](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list) | [C++](./C++/0430.cpp) |O(n)|O(n)|🟡||Recursion|


<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Stacks
### Stacks as ADT
We only care about the features and operations of stacks. We don't care about the implementation details. Therefore, I am going to define stack only as mathematical model.
<br>
<br>

### Definition
A list with restriction of insertion and deletion from one end only.
<br>
<br>

### Property
Elements are inserted and removed from the same end, also called, the *top* of stack. This is not just a property, but a constraint of stack. Hence, stack is called, LAST-IN-FIRST-OUT, or, LIFO, collection of items.
<br>
<br>

### Operations
* Push( ) : for insertion of an element
* Pop( ) : for deletion of an element

Apart from the above mentioned fundamental operations, there can be other operations as well, like :-<br>
* Top( ) : return the top element of stack
* IsEmpty( ) : return TRUE if stack is empty, FALSE if not

<br>

### Complexity Analysis
All opertaions mentioned above are performed in constant, or, O( 1 ) time.

Overflow condition : O( n ), a larger array is created and all elements are copied. This only happens in array implementation of stack.
<br>
<br>

### Uses
* Function calls / Recursion in dynamic memory allocation
* implement Undo operation
* balance of brackets by a compiler

<br>

### Implementation of stacks
Stacks can be implemeted in 2 ways :-<br>
* Stacks using arrays : <br>

        // declaration of array that will act as stack
        int A[n]
        
        // pointer to the top of stack
        top = -1
        
        Push(x){
            top = top + 1
            A[top] = x
        }
        
        Pop(){
            top = top - 1
        }
        
        Top(){
            return A[top]
        }
        
        IsEmpty(){
            if (top == -1)
                return TRUE
            else
                return FALSE
        }

* Stacks using linked lists : <br>

        // structure for linked list
        struct Node {
            int data
            struct Node* link
        }
        
        Push(x) {
            temp->data = x
            temp->link = top
            top = temp
        }
        
        Pop() {
            temp = top
            top = top->link
            free(temp)
        }
<br>

### Problems on Stacks
![Count](https://img.shields.io/badge/Count-6-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0020 | [Valid parantheses](https://leetcode.com/problems/valid-parentheses) | [C++](./C++/0020.cpp) |||🟢|||
| 1614 | [Maximum nesting depth of the parantheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses) | [C++](./C++/1614.cpp) |||🟢|||
| 1021 | [Remove outermost parantheses](https://leetcode.com/problems/remove-outermost-parentheses) | [C++](./C++/1021.cpp) |||🟢|||
| 1475 | [Final prices with a special discount in shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop) | [C++](./C++/1475.cpp) |||🟢|||
| 0232 | [Implement queue using stacks](https://leetcode.com/problems/implement-queue-using-stacks) | [C++](./C++/0232.cpp) |||🟢|||
| 0071 | [Simplify path](https://leetcode.com/problems/simplify-path) | [C++](./C++/0071.cpp) |||🟡|||


<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Tree
![Count](https://img.shields.io/badge/Count-29-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0144 | [Binary tree preorder traversal](https://leetcode.com/problems/binary-tree-preorder-traversal) | [C++](./C++/0144.cpp) |||🟢|||
| 0094 | [Binary tree inorder traversal](https://leetcode.com/problems/binary-tree-inorder-traversal) | [C++](./C++/0094.cpp) |||🟢|||
| 0145 | [Binary tree postorder traversal](https://leetcode.com/problems/binary-tree-postorder-traversal) | [C++](./C++/0145.cpp) |||🟢|||
| 0104 | [Maximum depth of binary tree](https://leetcode.com/problems/maximum-depth-of-binary-tree) | [C++](./C++/0104.cpp) |||🟢|||
| 0543 | [Diameter of a binary tree](https://leetcode.com/problems/diameter-of-binary-tree) | [C++](./C++/0543.cpp) |||🟢|||
| 0700 | [Search in a binary tree](https://leetcode.com/problems/search-in-a-binary-search-tree) | [C++](./C++/0700.cpp) |||🟢|||
| 0993 | [Cousins in binary tree](https://leetcode.com/problems/cousins-in-binary-tree) | [C++](./C++/0993.cpp) |||🟢|||
| 0101 | [Symmetric tree](https://leetcode.com/problems/symmetric-tree) | [C++](./C++/0101.cpp) |||🟢|||
| 0112 | [Path sum](https://leetcode.com/problems/path-sum) | [C++](./C++/0112.cpp) |||🟢|||
| 0226 | [Invert binary tree](https://leetcode.com/problems/invert-binary-tree) | [C++](./C++/0226.cpp) |||🟢|||
| 0653 | [Two sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst) | [C++](./C++/0653.cpp) |||🟢|||
| 0235 | [Lowest common ancestor of a binary search tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree) | [C++](./C++/0235.cpp) |||🟢|||
| 0331 | [Verify preorder serialization of a binary tree](https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree) | [C++](./C++/0331.cpp) |||🟡|||
| 0102 | [Binary tree level order traversal](https://leetcode.com/problems/binary-tree-level-order-traversal) | [C++](./C++/0102.cpp) |||🟡||queue|
| 1008 | [Construct binary search tree from preorder traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal) | [C++](./C++/1008.cpp) |||🟡|||
| 0889 | [Construct binary tree from preorder and postorder traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal) | [C++](./C++/0889.cpp) |||🟡|||
| 0979 | [Distribute coins in binary tree](https://leetcode.com/problems/distribute-coins-in-binary-tree) | [C++](./C++/0979.cpp) |||🟡|||
| 0654 | [Maximum binary tree](https://leetcode.com/problems/maximum-binary-tree) | [C++](./C++/0654.cpp) |||🟡|||
| 0662 | [Maximum width of binary tree](https://leetcode.com/problems/maximum-width-of-binary-tree) | [C++](./C++/0662.cpp) |||🟡|||
| 0687 | [Longest univalue path](https://leetcode.com/problems/longest-univalue-path) | [C++](./C++/0687.cpp) |||🟡|||
| 1104 | [Path in zigzag labled binary tree](https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree) | [C++](./C++/1104.cpp) |||🟡|||
| 1372 | [Longest zigzag path in a binary tree](https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree) | [C++](./C++/1372.cpp) |||🟡|||
| 0437 | [Path sum III](https://leetcode.com/problems/path-sum-iii) | [C++](./C++/0437.cpp) |||🟡|||
| 1339 | [Maximum product of splitted binary tree](https://leetcode.com/problems/maximum-product-of-splitted-binary-tree) | [C++](./C++/1339.cpp) |||🟡|||
| 0814 | [Binary tree pruning](https://leetcode.com/problems/binary-tree-pruning) | [C++](./C++/0814.cpp) |||🟡|||
| 1448 | [Count good nodes in binary tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree) | [C++](./C++/1448.cpp) |||🟡|||
| 0894 | [All possible full binary trees](https://leetcode.com/problems/all-possible-full-binary-trees) | [C++](./C++/0894.cpp) |||🟡|||
| 0701 | [Insert into a binary search tree](https://leetcode.com/problems/insert-into-a-binary-search-tree) | [C++](./C++/0701.cpp) |||🟡|||
| 0098 | [Validate binary search tree](https://leetcode.com/problems/validate-binary-search-tree) | [C++](./C++/0098.cpp) |||🟡|||

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Trie
![Count](https://img.shields.io/badge/Count-1-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0208 | [Implement trie](https://leetcode.com/problems/implement-trie-prefix-tree) | [C++](./C++/0208.cpp) |||🟡|||

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Dynamic Programming
![Count](https://img.shields.io/badge/Count-7-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0338 | [Counting bits](https://leetcode.com/problems/counting-bits) | [C++](./C++/0338.cpp) |||🟢|||
| 0509 | [Fibonacci number](https://leetcode.com/problems/fibonacci-number) | [C++](./C++/0509.cpp) |||🟢|||
| 1137 | [N-th tribonacci number](https://leetcode.com/problems/n-th-tribonacci-number) | [C++](./C++/1137.cpp) |||🟢|||
| 1025 | [Divisor game](https://leetcode.com/problems/divisor-game) | [C++](./C++/1025.cpp) |O(n^2)<br>O(1)||🟢||Trick solution|
| 0764 | [Largest plus sign](https://leetcode.com/problems/largest-plus-sign) | [C++](./C++/0764.cpp) |||🟡|||
| 1143 | [Longest common subsequence](https://leetcode.com/problems/longest-common-subsequence) | [C++](./C++/1143.cpp) |||🟡|||
| 0174 | [Dungeon game](https://leetcode.com/problems/dungeon-game) | [C++](./C++/0174.cpp) |||🔴|||

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Binary Search
![Count](https://img.shields.io/badge/Count-7-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0704 | [Binary Search](https://leetcode.com/problems/binary-search) | [C++](./C++/0704.cpp) |||🟢|||
| 0278 | [First bad version](https://leetcode.com/problems/first-bad-version) | [C++](./C++/0278.cpp) |||🟢|||
| 0035 | [Search insert position](https://leetcode.com/problems/search-insert-position) | [C++](./C++/0035.cpp) |||🟢|||
| 0875 | [Koko eating banans](https://leetcode.com/problems/koko-eating-bananas) | [C++](./C++/0875.cpp) |||🟡|||
| 1237 | [Find positive integer solution for a given equation](https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation) | [C++](./C++/1237.cpp) |||🟡|||
| 1011 | [Capacity to ship packages within D days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days) | [C++](./C++/1011.cpp) |||🟡|||
| 1901 | [Find a peak element II](https://leetcode.com/problems/find-a-peak-element-ii) | [C++](./C++/1901.cpp) |||🟡|||

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Depth First Search
![Count](https://img.shields.io/badge/Count-2-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0463 | [Island perimeter](https://leetcode.com/problems/island-perimeter) | [C++](./C++/0463.cpp) |||🟢||Bruteforce,<br>DFS|
| 0079 | [Word search](https://leetcode.com/problems/word-search) | [C++](./C++/0079.cpp) |||🟡||Optimised for space|

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Strings
![Count](https://img.shields.io/badge/Count-17-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0242 | [Valid anagram](https://leetcode.com/problems/valid-anagram) | [C++](./C++/0242.cpp) |||🟢|||
| 0387 | [First unique character in a string](https://leetcode.com/problems/first-unique-character-in-a-string) | [C++](./C++/0387.cpp) |||🟢|||
| 0383 | [Ransom note](https://leetcode.com/problems/ransom-note) | [C++](./C++/0383.cpp) |||🟢|||
| 0394 | [Decode string](https://leetcode.com/problems/decode-string) | [C++](./C++/0394.cpp) |||🟡|||
| 0567 | [Permutation in string](https://leetcode.com/problems/permutation-in-string) | [C++](./C++/0567.cpp) |||🟡|||
| 0005 | [Longest palindromic substring](https://leetcode.com/problems/longest-palindromic-substring) | [C++](./C++/0005.cpp) |||🟡|||
| 0451 | [Sort characters by frequency](https://leetcode.com/problems/sort-characters-by-frequency) | [C++](./C++/0451.cpp) |||🟡|||
| 0151 | [Reverse words in a string](https://leetcode.com/problems/reverse-words-in-a-string) | [C++](./C++/0151.cpp) |||🟡|||
| 1170 | [Compare strings by frequency of the smallest character](https://leetcode.com/problems/compare-strings-by-frequency-of-the-smallest-character) | [C++](./C++/1170.cpp) |||🟡|||
| 0848 | [Shifting letters](https://leetcode.com/problems/shifting-letters) | [C++](./C++/0848.cpp) |||🟡|||
| 1358 | [Number of substrings containing all three characters](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters) | [C++](./C++/1358.cpp) |||🟡|||
| 0006 | [Zigzag conversion](https://leetcode.com/problems/zigzag-conversion) | [C++](./C++/0006.cpp) |||🟡|||
| 1456 | [Maximum number of vowels in a substring of a given length](https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length) | [C++](./C++/1456.cpp) |||🟡|||
| 0008 | [String to integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi) | [C++](./C++/0008.cpp) |||🟡|||
| 2038 | [Remove colored pieces if both neighbors are the same color](https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color) | [C++](./C++/2038.cpp) |||🟡|||
| 0076 | [Minimmum window substring](https://leetcode.com/problems/minimum-window-substring) | [C++](./C++/0076.cpp) |||🔴|||
| 0010 | [Regular expression matching](https://leetcode.com/problems/regular-expression-matching) | [C++](./C++/0010.cpp) |||🔴||Very hard,<br>dp & dfs|

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>

## 💢 Miscellaneous problems
![Count](https://img.shields.io/badge/Count-13-brown.svg?style=for-the-badge)&nbsp;

|  ID   | Title |  Solution  |  Time  |    Space     |  Difficulty  |  Tags | Note |
|:-----:|-------|:----------:|:------:|:------------:|:------------:|-------|------|
| 0007 | [Reverse integer](https://leetcode.com/problems/reverse-integer) | [C++](./C++/0007.cpp) |||🟢|||
| 0070 | [Climbing stairs](https://leetcode.com/problems/climbing-stairs) | [C++](./C++/0070.cpp) |||🟢|||
| 0009 | [Palindrome Number](https://leetcode.com/problems/palindrome-number) | [C++](./C++/0009.cpp) |||🟢|||
| 0496 | [Next greater element I](https://leetcode.com/problems/next-greater-element-i) | [C++](./C++/0496.cpp) |||🟢||bruteforce, <br>stacks|
| 0374 | [Guess number higher or lower](https://leetcode.com/problems/guess-number-higher-or-lower) | [C++](./C++/374.cpp) |||🟢|||
| 0013 | [Roman to integer](https://leetcode.com/problems/roman-to-integer) | [C++](./C++/0013.cpp) |||🟢|||
| 0201 | [Bitwise AND of number range](https://leetcode.com/problems/bitwise-and-of-numbers-range) | [C++](./C++/0201.cpp) |||🟡|||
| 0012 | [Integer to roman](https://leetcode.com/problems/integer-to-roman) | [C++](./C++/0012.cpp) |||🟡|||
| 0003 | [Longest substring without repeating characters](https://leetcode.com/problems/longest-substring-without-repeating-characters) | [C++](./C++/0003.cpp) |||🟡||hash table|
| 0055 | [Jump game](https://leetcode.com/problems/jump-game) | [C++](./C++/0055.cpp) |||🟡|||
| 0279 | [Perfect squares](https://leetcode.com/problems/perfect-squares) | [C++](./C++/0279.cpp) |||🟡||DP,<br>Mathematical|
| 0380 | [Insert delete GetRandom O(1)](https://leetcode.com/problems/jump-game) | [C++](./C++/0380.cpp) |O(1)||🟡|||
| 0123 | [Best time to buy and sell stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii) | [C++](./C++/0123.cpp) |||🔴|||

<br/>
<div align="right">
    <b><a href="#-index">⬆️ Back to Top</a></b>
</div>
<br/>
