Course Learning Reflections

➡:What are the kinds of problems we see in the nature? (iteration, recursion, backtracking)

A:Iteration:
Problems we see in the nature are
1-Ants repeatedly explore paths, leaving their trails that make to find efficient route (Optimization from Algorithms Portfolio).
2-Seasons change as weather alternates between heating and cooling, reflecting nature's iterative process. 

B:Backtracking:

It involves exploring solutions by trying paths and Leaving the hard(difficult/unuse) ones
Many animals use backtracking for Searching for food and finding the optimal route to reach their house quick by escaping predators
Maze - where you retrace your path and try alternative routes when hitting a dead end

Recursion:
Divide and Conquer (merge sort huh?): Natural phenomena like river branching or root systems, which divide into smaller parts.


➡What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth

Time Efficiency measures the time required to execute an algorithm and represents the number of basic operations performed by an algorithm

Space Efficiency measures the memory(storage) required by an algorithm, for tracking how much memory is the input size and determining how much additional memory is needed to solve a problem

A good algorithm executes quickly and saves space in the process. we should find a good medium of space and time (space and time complexity).
In the world of computer science to become a good engineer, we need to write algorithms that are time efficient and use less memory. It should be resource optimized, solving larger problems with limited computing power and giving Impact on users experience and system performance

Complexity Classes and Orders of Growth:

O(n) - Linear Time

Runtime grows linearly with input size
Examples: Linear search

O(n²) - Quadratic Time

Time grows with the square of the input size.
Examples: Bubble sort, simple nested loops

O(1) - Constant Time

It has fixed runtime regardless of input size
Examples: Array access, simple arithmetic operations

O(log n) - Logarithmic Time

its Runtime grows logarithmically
Examples: Tree operations


O(n log n) - Linearithmic Time

Efficient sorting algorithms
Examples: Merge sort, heap sort


O(2ⁿ) - Exponential Time

Runtime doubles with each input addition
Examples: Recursive Fibonacci, brute-force 

O(n!) - Factorial Time

Extremely inefficient
Examples: Traveling salesman problem (brute force)

Visualization of Growth Rates
CopyO(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)

we generally choose algorithms with lower complexity classes looking between time and space efficiency and optimize based on specific problem constraints,

 
➡Take away from different design principles from chapter 2 (can use the notes provided)


➡The hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)

Binary Search Tree (BST)

used for data with fast lookup, insertion, and deletion (average-case O(log n)).
Limitation: Can become unbalanced, leading to O(n) operations in the worst case.


AVL Tree(0,1,-1)

used for Balancing the BST by maintaining a height difference of at most 1 between subtrees.
Optimization: O(log n), insertion and deletion but requires to balance operations.


2-3 Tree

Ensures balance by having 2 or 3 children per node.
Optimization: Provides consistent height, making it efficient.


Red-Black Tree

Self-balancing BST with less conditions balancing rules than AVL.
Optimization: Efficient insertion and deletion (O(log n)) with fewer rotations compared to AVL.


Heap

Finds the smallest or largest element efficiently and it is called Priority-based operation
Optimization: Used in algorithms like Dijkstra's and O(log n) for insertions and deletions.


Trie (Prefix Tree)

It is a data structure used to store and quickly find words or sequences, like in a dictionary. It organizes data so we can efficiently search, insert, or check prefixes of words.
Optimization: Minimizes redundancy and O(L) search time.


➡The need of array query algorithms and their implications. Their applications and principles need to be discussed

Principles of Array Query Algorithms

Optimization - It has a Balancing preprocessing time and it is with query time to to get all archives overall efficiency.
Divide and Conquer - Breaking queries into smaller subproblems for efficient computation.
Dynamic Programming - Storing intermediate results to avoid redundant calculations.

Array Query Algorithms: 

Array Query Algorithms are methods used to quickly get, change, or analyze data in large arrays. They focus on:
1.getting data quickly.
2.Handling complex data efficiently.
3.Reducing the time and effort needed for computations.

1. Binary Search(Binary index tree)
Principle: Divide and conquer one
Efficiency: O(log n) (average-case hai)
Requirements: Sorted array
Applications: used in Large sorted databases

2. Sliding Window Technique

Principle: Maintain a window of elements
Efficiency: O(n) 
Applications: used in Network traffic analysis and Signal processing

3. Two Pointer Technique

Principle: Use two pointers to traverse array
Efficiency: O(n) 
Applications: used in Removing duplicates and Reversing arrays

4. Segment Tree

Principle: Divide array into segments
Efficiency: O(log n) 
Applications: Range min/max queries


➡Differentiate between tree and graphs and their traversals. The applications of each

Difference Between Trees and Graphs:
A tree is a hierarchical, acyclic structure with 𝑛−1 edges for n nodes, where relationships are implicit (parent-child). A graph is a general structure that can be cyclic or disconnected, with directed or undirected edges and no specific edge limit.

Traversals:

In trees, common traversals include in-order, pre-order, post-order, and level-order. 
In graphs, traversals include depth-first search (DFS) and breadth-first search (BFS).

Applications:

Trees: Used in hierarchical data like file systems, database indexing, and syntax trees.
Graphs: Applied in networks, social media, shortest path problems.


➡Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world

Bubble Sort
Technique: Repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process continues until the entire list is sorted.
Complexity: O(n²) in the worst and average cases.
Real-World Use: Used for small datasets.

Selection Sort
Technique: Finds the smallest element in the unsorted portion of the list and swaps it with the first unsorted element.
Complexity: O(n²).
Real-World Use: Used in minimizing the number of swaps is necessary, such as in memory-limited devices.

Insertion Sort(used in gambling)
Technique: Builds the list one element at a time by inserting each new element into its correct position.
Complexity: O(n²) in the worst case but O(n) in the best case.
Real-World Use: used in gambling.

Merge Sort
Technique: A divide-and-conquer algorithm that splits the list into halves, recursively sorts them, and then merges the sorted halves.
Complexity: O(n log n) in all cases.
Real-World Use: Used for sorting large datasets, external sorting.

Quick Sort(i,j)
Technique: Another divide-and-conquer method, which partitions the array around a pivot and recursively sorts the partitions.
Complexity: O(n log n) on average but O(n²) in the worst case (bad pivot selection).
Real-World Use: Preferred for general-purpose sorting in programming libraries due to its efficiency and in-memory sorting.

Heap Sort
Technique: Builds a max-heap (or min-heap) from the input data, repeatedly extracts the maximum (or minimum) element, and rebuilds the heap.
Complexity: O(n log n) in all cases.
Real-World Use: Useful in priority queues and scenarios requiring in-place sorting.

➡Discuss the importance of graph algorithms with respect to spanning trees and shortest paths

Spanning Trees :

Kruskal's Algorithm

Sorts edges by weight(first sorting edges and thene keep adding the edges in until it becomes a spanning tree)
Add lowest-weight edges without creating cycles


Prim's Algorithm

Start from single node
Grow tree by adding lowest-weight connected edges
Shortest Path Algorithms: Navigation Optimization


Dijkstra's Algorithm

Purpose: Find shortest path in weighted graphs
Applications: GPS navigation and Transportation planning
For the graphs having negative weight dijkstra's can not gice current path that's why we use ballman-ford


Floyd-Warshall Algorithm: Computes all-pairs shortest paths.

Real-World Relevance
Shortest path, so we can think as a real-time shortesr path in transportation.


Ball-man Ford Algorithm

If there is negative value go for this algorithm otherwise go for dijkstra's algorithm 
Ball-man fords can detect negative weight cycles from graphs


➡Discuss about the different studied algorithm design techniques. 

Brute Force: Explores all possible solutions, guaranteeing an answer but is high runtime/space complexity. Best for small inputs or verifying algorithms.

Recursive Algorithms: Solve problems by breaking them into smaller. Examples are factorials and tree traversals.

Divide and Conquer: Breaks problems into independent subproblems, solves them, and combines results. Examples include Merge Sort and Quick Sort.

Dynamic Programming: Solves problems by breaking them into subproblems, storing results to avoid the recomputation. Used in Fibonacci sequences.


●How do you determine the most efficient approach when solving a complex problem?

Starting with understanding and thinking of the best and easiest way to solve the problem, choosing which algorithm will suite this problem and  executeing  it.If all the testcases passes we go Analyze the results, learn from the process, and improve for  further  problems.
