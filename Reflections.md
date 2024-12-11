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
    </style>
</head>
<body>
    <h1>Course Learning Reflections</h1>

    <div class="question">
        <h3>➡ What are the kinds of problems we see in the nature?</h3>
        
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
        <h3>➡ What is space and time efficiency?</h3>
        
        <div class="highlight">
            <p><strong>Time Efficiency:</strong> measures the time required to execute an algorithm and represents the number of basic operations performed by an algorithm</p>
            <p><strong>Space Efficiency:</strong> measures the memory(storage) required by an algorithm, for tracking how much memory is the input size and determining how much additional memory is needed to solve a problem</p>
        </div>

        <h4>Complexity Classes and Orders of Growth:</h4>
        <ul>
            <li><span class="complexity">O(1)</span> - Constant Time</li>
            <li><span class="complexity">O(log n)</span> - Logarithmic Time</li>
            <li><span class="complexity">O(n)</span> - Linear Time</li>
            <li><span class="complexity">O(n log n)</span> - Linearithmic Time</li>
            <li><span class="complexity">O(n²)</span> - Quadratic Time</li>
            <li><span class="complexity">O(2ⁿ)</span> - Exponential Time</li>
            <li><span class="complexity">O(n!)</span> - Factorial Time</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Take away from different design principles</h3>
        
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
        <h3>➡ The hierarchical data and tree data structures</h3>
        
        <div class="highlight">
            <ul>
                <li><strong>Binary Search Tree (BST):</strong> Used for data with fast lookup, insertion, and deletion</li>
                <li><strong>AVL Tree(0,1,-1):</strong> Used for Balancing the BST</li>
                <li><strong>2-3 Tree:</strong> Ensures balance by having 2 or 3 children per node</li>
                <li><strong>Red-Black Tree:</strong> Self-balancing BST with less conditions</li>
                <li><strong>Heap:</strong> Finds the smallest or largest element efficiently</li>
                <li><strong>Trie (Prefix Tree):</strong> Used to store and quickly find words or sequences</li>
            </ul>
        </div>
    </div>

    <div class="question">
        <h3>➡ Array query algorithms and their implications</h3>
        
        <h4>Principles:</h4>
        <ul>
            <li>Optimization - Balancing preprocessing time with query time</li>
            <li>Divide and Conquer - Breaking queries into smaller subproblems</li>
            <li>Dynamic Programming - Storing intermediate results</li>
        </ul>

        <h4>Techniques:</h4>
        <ul>
            <li>Binary Search (Binary index tree)</li>
            <li>Sliding Window Technique</li>
            <li>Two Pointer Technique</li>
            <li>Segment Tree</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Tree vs Graphs and their traversals</h3>
        
        <div class="highlight">
            <p><strong>Trees:</strong> Hierarchical, acyclic structure with 𝑛−1 edges for n nodes</p>
            <p><strong>Graphs:</strong> General structure that can be cyclic or disconnected</p>
        </div>

        <h4>Traversals:</h4>
        <ul>
            <li>Trees: in-order, pre-order, post-order, and level-order</li>
            <li>Graphs: depth-first search (DFS) and breadth-first search (BFS)</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Sorting and searching algorithms</h3>
        
        <ul>
            <li><strong>Bubble Sort:</strong> O(n²) - Used for small datasets</li>
            <li><strong>Selection Sort:</strong> O(n²) - Used in memory-limited devices</li>
            <li><strong>Insertion Sort:</strong> O(n²) - Used in gambling</li>
            <li><strong>Merge Sort:</strong> O(n log n) - Used for large datasets</li>
            <li><strong>Quick Sort:</strong> O(n log n) average - Preferred for general-purpose sorting</li>
            <li><strong>Heap Sort:</strong> O(n log n) - Useful in priority queues</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Graph algorithms: spanning trees and shortest paths</h3>
        
        <h4>Spanning Trees:</h4>
        <ul>
            <li>Kruskal's Algorithm: Sorts edges by weight</li>
            <li>Prim's Algorithm: Grows tree from single node</li>
        </ul>

        <h4>Shortest Path Algorithms:</h4>
        <ul>
            <li>Dijkstra's Algorithm: For weighted graphs without negative weights</li>
            <li>Floyd-Warshall Algorithm: All-pairs shortest paths</li>
            <li>Bellman-Ford Algorithm: Handles negative weights</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ Algorithm design techniques</h3>
        
        <ul>
            <li><strong>Brute Force:</strong> Explores all possible solutions</li>
            <li><strong>Recursive Algorithms:</strong> Break problems into smaller ones</li>
            <li><strong>Divide and Conquer:</strong> Breaks into independent subproblems</li>
            <li><strong>Dynamic Programming:</strong> Stores results to avoid recomputation</li>
        </ul>
    </div>

    <div class="question">
        <h3>➡ How to determine the most efficient approach?</h3>
        
        <p>Starting with understanding and thinking of the best and easiest way to solve the problem, choosing which algorithm will suite this problem and executeing it. If all the testcases passes we go Analyze the results, learn from the process, and improve for further problems.</p>
    </div>
</body>
</html>
