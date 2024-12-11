<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Course Learning Reflections</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            max-width: 1200px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f5f5f5;
            color: #333;
        }

        h1 {
            text-align: center;
            color: #2c3e50;
            border-bottom: 3px solid #3498db;
            padding-bottom: 10px;
        }

        h2 {
            color: #2980b9;
            margin-top: 30px;
            border-left: 4px solid #3498db;
            padding-left: 10px;
        }

        .question {
            background-color: #fff;
            padding: 20px;
            margin: 20px 0;
            border-radius: 8px;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
        }

        .question h3 {
            color: #e74c3c;
            margin-top: 0;
        }

        ul, ol {
            padding-left: 25px;
        }

        li {
            margin-bottom: 10px;
        }

        .highlight {
            background-color: #f1f8ff;
            padding: 15px;
            border-radius: 5px;
            border-left: 4px solid #3498db;
            margin: 10px 0;
        }

        code {
            background-color: #f8f9fa;
            padding: 2px 5px;
            border-radius: 3px;
            font-family: monospace;
        }

        .complexity {
            color: #2c3e50;
            font-weight: bold;
        }

        .explanation {
            margin: 10px 0;
            padding: 10px;
            background-color: #fff;
            border-left: 4px solid #2ecc71;
        }
    </style>
</head>
<body>
    <h1>Course Learning Reflections</h1>

    <div class="question">
        <h3>➡ What are the kinds of problems we see in the nature? (iteration, recursion, backtracking)</h3>
        
        <p><strong>A: Iteration:</strong> Problems we see in the nature are:</p>
        <ol>
            <li>Ants repeatedly explore paths, leaving their trails that make to find efficient route (Optimization from Algorithms Portfolio)</li>
            <li>Seasons change as weather alternates between heating and cooling, reflecting nature's iterative process</li>
        </ol>

        <p><strong>B: Backtracking:</strong></p>
        <p>It involves exploring solutions by trying paths and Leaving the hard(difficult/unuse) ones Many animals use backtracking for Searching for food and finding the optimal route to reach their house quick by escaping predators Maze - where you retrace your path and try alternative routes when hitting a dead end</p>

        <p><strong>Recursion:</strong> Divide and Conquer (merge sort huh?): Natural phenomena like river branching or root systems, which divide into smaller parts.</p>
    </div>

    <div class="question">
        <h3>➡ What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth</h3>
        
        <div class="highlight">
            <p><strong>Time Efficiency:</strong> measures the time required to execute an algorithm and represents the number of basic operations performed by an algorithm</p>
            <p><strong>Space Efficiency:</strong> measures the memory(storage) required by an algorithm, for tracking how much memory is the input size and determining how much additional memory is needed to solve a problem</p>
        </div>

        <p>A good algorithm executes quickly and saves space in the process. we should find a good medium of space and time (space and time complexity). In the world of computer science to become a good engineer, we need to write algorithms that are time efficient and use less memory. It should be resource optimized, solving larger problems with limited computing power and giving Impact on users experience and system performance</p>

        <h4>Complexity Classes and Orders of Growth:</h4>
        <ul>
            <li><span class="complexity">O(1) - Constant Time:</span> It has fixed runtime regardless of input size Examples: Array access, simple arithmetic operations</li>
            <li><span class="complexity">O(log n) - Logarithmic Time:</span> its Runtime grows logarithmically Examples: Tree operations</li>
            <li><span class="complexity">O(n) - Linear Time:</span> Runtime grows linearly with input size Examples: Linear search</li>
            <li><span class="complexity">O(n log n) - Linearithmic Time:</span> Efficient sorting algorithms Examples: Merge sort, heap sort</li>
            <li><span class="complexity">O(n²) - Quadratic Time:</span> Time grows with the square of the input size. Examples: Bubble sort, simple nested loops</li>
            <li><span class="complexity">O(2ⁿ) - Exponential Time:</span> Runtime doubles with each input addition Examples: Recursive Fibonacci, brute-force</li>
            <li><span class="complexity">O(n!) - Factorial Time:</span> Extremely inefficient Examples: Traveling salesman problem (brute force)</li>
        </ul>

        <p>Visualization of Growth Rates Copy:<br>
        O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)</p>

        <p>we generally choose algorithms with lower complexity classes looking between time and space efficiency and optimize based on specific problem constraints</p>
    </div>

    <div class="question">
        <h3>➡ Take away from different design principles from chapter 2</h3>
        
        <h4>Sorting Algorithms:</h4>
        <ul>
            <li>Bubble Sort: Simple and uses brute force, best for small datasets</li>
            <li>Selection Sort: Picks the smallest item repeatedly; good for small datasets</li>
            <li>Insertion Sort: Quick for almost-sorted data but slow for large datasets</li>
            <li>Merge Sort: Splits and merges data efficiently; great for large datasets</li>
            <li>Quick Sort: Fast and flexible, ideal for large datasets</li>
            <li>Heap Sort: Memory-efficient and in-place but less common than Quick/Merge Sort</li>
        </ul>

        <h4>String Search Algorithms:</h4>
        <ul>
            <li>Boyer-Moore: Quickly finds patterns in text by skipping unnecessary checks</li>
            <li>Knuth-Morris-Pratt (KMP): Avoids repeating checks by preprocessing the pattern</li>
            <li>Rabin-Karp: Uses hashing to search for patterns more efficiently than brute force</li>
        </ul>

        <h4>Graph Algorithms:</h4>
        <ul>
            <li>Kruskal's: Finds the shortest way to connect all points without cycles</li>
            <li>Prim's: Connects all points step by step with the smallest link</li>
            <li>Dijkstra's: Finds the shortest path from one point to all others (no negative weights)</li>
            <li>Floyd's: Finds shortest paths between all points (no negative cycles)</li>
            <li>Warshall's: Finds all possible paths between points but not the shortest ones</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ The hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)</h3>
        
        <div class="highlight">
            <ul>
                <li><strong>Binary Search Tree (BST):</strong> Used for data with fast lookup, insertion, and deletion (average-case O(log n)). Limitation: Can become unbalanced, leading to O(n) operations in the worst case.</li>
                <li><strong>AVL Tree(0,1,-1):</strong> Used for Balancing the BST by maintaining a height difference of at most 1 between subtrees. Optimization: O(log n), insertion and deletion but requires to balance operations.</li>
                <li><strong>2-3 Tree:</strong> Ensures balance by having 2 or 3 children per node. Optimization: Provides consistent height, making it efficient.</li>
                <li><strong>Red-Black Tree:</strong> Self-balancing BST with less conditions balancing rules than AVL. Optimization: Efficient insertion and deletion (O(log n)) with fewer rotations compared to AVL.</li>
                <li><strong>Heap:</strong> Finds the smallest or largest element efficiently and it is called Priority-based operation Optimization: Used in algorithms like Dijkstra's and O(log n) for insertions and deletions.</li>
                <li><strong>Trie (Prefix Tree):</strong> It is a data structure used to store and quickly find words or sequences, like in a dictionary. It organizes data so we can efficiently search, insert, or check prefixes of words. Optimization: Minimizes redundancy and O(L) search time.</li>
            </ul>
        </div>
    </div>

    <div class="question">
        <h3>➡ The need of array query algorithms and their implications. Their applications and principles need to be discussed</h3>
        
        <h4>Principles of Array Query Algorithms:</h4>
        <ul>
            <li>Optimization - It has a Balancing preprocessing time and it is with query time to to get all archives overall efficiency</li>
            <li>Divide and Conquer - Breaking queries into smaller subproblems for efficient computation</li>
            <li>Dynamic Programming - Storing intermediate results to avoid redundant calculations</li>
        </ul>

        <h4>Array Query Algorithms:</h4>
        <p>Array Query Algorithms are methods used to quickly get, change, or analyze data in large arrays. They focus on:</p>
        <ol>
            <li>getting data quickly</li>
            <li>Handling complex data efficiently</li>
            <li>Reducing the time and effort needed for computations</li>
        </ol>

        <div class="explanation">
            <h4>Techniques:</h4>
            <ul>
                <li><strong>Binary Search(Binary index tree)</strong><br>
                    Principle: Divide and conquer one<br>
                    Efficiency: O(log n) (average-case hai)<br>
                    Requirements: Sorted array<br>
                    Applications: used in Large sorted databases</li>
                
                <li><strong>Sliding Window Technique</strong><br>
                    Principle: Maintain a window of elements<br>
                    Efficiency: O(n)<br>
                    Applications: used in Network traffic analysis and Signal processing</li>
                
                <li><strong>Two Pointer Technique</strong><br>
                    Principle: Use two pointers to traverse array<br>
                    Efficiency: O(n)<br>
                    Applications: used in Removing duplicates and Reversing arrays</li>
                
                <li><strong>Segment Tree</strong><br>
                    Principle: Divide array into segments<br>
                    Efficiency: O(log n)<br>
                    Applications: Range min/max queries</li>
            </ul>
        </div>
    </div>

    <div class="question">
        <h3>➡ Differentiate between tree and graphs and their traversals. The applications of each</h3>
        
        <div class="highlight">
            <p><strong>Difference Between Trees and Graphs:</strong> A tree is a hierarchical, acyclic structure with 𝑛−1 edges for n nodes, where relationships are implicit (parent-child). A graph is a general structure that can be cyclic or disconnected, with directed or undirected edges and no specific edge limit.</p>
        </div>

        <h4>Traversals:</h4>
        <p>In trees, common traversals include in-order, pre-order, post-order, and level-order. In graphs, traversals include depth-first search (DFS) and breadth-first search (BFS).</p>

        <h4>Applications:</h4>
        <ul>
            <li>Trees: Used in hierarchical data like file systems, database indexing, and syntax trees</li>
            <li>Graphs: Applied in networks, social media, shortest path problems</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Deliberate on sorting and searching algorithms, the technique behind each and they connect to real world</h3>
        
        <ul>
            <li><strong>Bubble Sort</strong><br>
                Technique: Repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process continues until the entire list is sorted.<br>
                Complexity: O(n²) in the worst and average cases.<br>
                Real-World Use: Used for small datasets.</li>
            
            <li><strong>Selection Sort</strong><br>
                Technique: Finds the smallest element in the unsorted portion of the list and swaps it with the first unsorted element.<br>
                Complexity: O(n²)<br>
                Real-World Use: Used in minimizing the number of swaps is necessary, such as in memory-limited devices.</li>
            
            <li><strong>Insertion Sort(used in gambling)</strong><br>
                Technique: Builds the list one element at a time by inserting each new element into its correct position.<br>
                Complexity: O(n²) in the worst case but O(n) in the best case.<br>
                Real-World Use: used in gambling.</li>
            
            <li><strong>Merge Sort</strong><br>
                Technique: A divide-and-conquer algorithm that splits the list into halves, recursively sorts them, and then merges the sorted halves.<br>
                Complexity: O(n log n) in all cases.<br>
                Real-World Use: Used for sorting large datasets, external sorting.</li>
            
            <li><strong>Quick Sort(i,j)</strong><br>
                Technique: Another divide-and-conquer method, which partitions the array around a pivot and recursively sorts the partitions.<br>
                Complexity: O(n log n) on average but O(n²) in the worst case (bad pivot selection).<br>
                Real-World Use: Preferred for general-purpose sorting in programming libraries due to its efficiency and in-memory sorting.</li>
            
            <li><strong>Heap Sort</strong><br>
                Technique: Builds a max-heap (or min-heap) from the input data, repeatedly extracts the maximum (or minimum) element, and rebuilds the heap.<br>
                Complexity: O(n log n) in all cases.<br>
                Real-World Use: Useful in priority queues and scenarios requiring in-place sorting.</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Discuss the importance of graph algorithms with respect to spanning trees and shortest paths</h3>
        
        <h4>Spanning Trees:</h4>
        <ul>
            <li><strong>Kruskal's Algorithm</strong><br>
                Sorts edges by weight(first sorting edges and thene keep adding the edges in until it becomes a spanning tree)<br>
                Add lowest-weight edges without creating cycles</li>
            
            <li><strong>Prim's Algorithm</strong><br>
                Start from single node<br>
                Grow tree by adding lowest-weight connected edges<br>
                Shortest Path Algorithms: Navigation Optimization</li>
        </ul>

        <h4>Shortest Path Algorithms:</h4>
        <ul>
            <li><strong>Dijkstra's Algorithm</strong><br>
                Purpose: Find shortest path in weighted graphs<br>
                Applications: GPS navigation and Transportation planning<br>
                For the graphs having negative weight dijkstra's can not gice current path that's why we use ballman-ford</li>
            
            <li><strong>Floyd-Warshall Algorithm</strong><br>
                Computes all-pairs shortest paths.<br>
                Real-World Relevance Shortest path, so we can think as a real-time shortesr path in transportation.</li>
            
            <li><strong>Ball-man Ford Algorithm</strong><br>
                If there is negative value go for this algorithm otherwise go for dijkstra's algorithm<br>
                Ball-man fords can detect negative weight cycles from graphs</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Discuss about the different studied algorithm design techniques.</h3>
        
        <ul>
            <li><strong>Brute Force:</strong> Explores all possible solutions, guaranteeing an answer but is high runtime/space complexity. Best for small inputs or verifying algorithms.</li>
            
            <li><strong>Recursive Algorithms:</strong> Solve problems by breaking them into smaller. Examples are factorials and tree traversals.</li>
            
            <li><strong>Divide and Conquer:</strong> Breaks problems into independent subproblems, solves them, and combines results. Examples include Merge Sort and Quick Sort.</li>
            
            <li><strong>Dynamic Programming:</strong> Solves problems by breaking them into subproblems, storing results to avoid the recomputation. Used in Fibonacci sequences.</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ How do you determine the most efficient approach when solving a complex problem?</h3>
        
        <p>Starting with understanding and thinking of the best and easiest way to solve the problem, choosing which algorithm will suite this problem and executeing it. If all the testcases passes we go Analyze the results, learn from the process, and improve for further problems.</p>
    </div>

</body>
</html>
