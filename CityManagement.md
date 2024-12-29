<h1>Business Case : City Management</h1>

Sub-task: Waste Segregation and Collection

SDG Goal: 11

Target: 11.6

Indicator: 11.6.1

The waste management department sees the collection and segregation of waste from various parts of locations in the city. The department ensures that waste is categorized into biodegradable, recyclable, and non-recyclable materials to minimize environmental impact. Below is the list of locations and the estimated waste (in tons) generated weekly:

![image](https://github.com/user-attachments/assets/89558a69-e9cc-435f-b68a-8fb891dc1a46)

 ![image](https://github.com/user-attachments/assets/06bd5935-a53b-46dc-acc6-6ce90c37cdee)

![image](https://github.com/user-attachments/assets/72f475a4-38b4-4955-889d-65d7a059da93)


The above time is measured based on the city's layout and the total amount of dry and wet waste collected. Assuming the distance and time required to travel between Dump Yard 1 and Dump Yard 2 within the city.
<h3>Time Matrix : </h3>

     [0,    20,  ∞,   ∞,   ∞,   ∞,   ∞,   ∞,   ∞], DY(S)
     [20,   0,   10,  ∞,   25,   ∞,   ∞,   ∞,   ∞], Railway Station
     [∞,    10,  0,   15,  ∞,   ∞,   ∞,   ∞,   ∞], Residential
     [∞,    ∞,   15,  0,   30,  ∞,   ∞,   ∞,   ∞], Electronic City 1
     [∞,    25,   ∞,   30,  0,   45,  ∞,   ∞,   ∞], Market Area
     [∞,    ∞,   ∞,   ∞,   45,  0,   15,  40,   ∞], Electronic City 2
     [∞,    ∞,   ∞,   ∞,   ∞,   15,  0,   58,  50], Agriculture College
     [∞,    ∞,   ∞,   ∞,   ∞,   40,   58,  0,   10],Industry Area
     [∞,    ∞,   ∞,   ∞,   ∞,   ∞,   50,   10,  0],  Dump yard(End)  


![image](https://github.com/user-attachments/assets/bc8d625f-7e2b-4264-9b71-320bcd9c8433)

Starting Point: Dump Yard (Start) 
Must Visit: Residential Area 
Destination: Dump Yard (End) 
Revised Path with Residential Area: 

1. DY(S) → Railway Station (20 min) 
2. Railway Station → Residential (10 min) 
3. Residential → Electronic City 1 (15 min) 
4. Electronic City 1 → Market Area (30 min) 
5. Market Area → Electronic City 2 (45 min) 
6. Electronic City 2 → Agriculture College (15 min) 
7. Agriculture College → Industry Area (58 min) 
8. Industry Area → DY(E) (10 min) 

Total Time: 203 minutes Breakdown: 
- Dump yard(S) to Railway Station: 20 min 
- Railway Station to Residential: 10 min 
- Residential to Electronic City 1: 15 min 
- Electronic City 1 to Market Area: 30 min 
- Market Area to Electronic City 2: 45 min 
- Electronic City 2 to Agriculture College: 15 min 
- Agriculture College to Industry Area: 58 min 
- Industry Area to Dump yard(E): 10 min

<h3>Dijkstra's algorithm was chosen here because:</h3>
We need shortest path based on time (weighted edges)
All weights (times) are positive(If it was negative Bellman-Ford algorithm would have joined us)
We have a specific start point (Dump Yard Start) and end point (Dump Yard End)
We need to visit a specific location (Residential Area twice)
Graph is relatively small as per taken (9 locations)
Based on the principle of Edge relaxation. 
Single source shortest path algorithm.  
Falls under the category of greedy technique.
Most efficient algorithm for this case because it guarantees the shortest path when all weights are positive.(O (|E| log|V|))

[Code for Dijkstra's Algorithm](Dijkstra'sCitymap.cpp)


<h3>QuickSort:</h3>
After collecting all the Waste now we have to Segregation them into dry,wet and based on their material and sizes.For the Fast Sorting we use Quicksort for its Efficiently sorting large quantities of waste into categories (e.g., plastics, metals, organics) with average-case time complexity O(n log n).

If the waste is in 

1.small quantity 

2.When data is randomly distributed

3.When additional memory usage isn't a concern

We go for quick sort 

We take first waste as pivot and from left to right we look for large waste(huge) and point it as i(1st large waste),Similarly for smaller wastes we go from right to left and lock in the first smallest waste.We swap them and continue the process until the wastes are sorted.

The worst case of Quick sort is if the array is sorted in ascending order or descending order.

The best case is when partition happens in mid O(n log n). 

Quicksort worst case is similar to bubble sort/selection sort O(n²).

[Quick sort code for Segregating waste](Quicksort.cpp)

<h3>Heap Sort:</h3>
For Reliability and consistency(we don’t want to waste sorting system to suddenly slow down because of a bad pivot choice or partially sorted waste items) we use Heap Sort

Heap sort is better for waste processing systems where consistent timing is crucial(heap sort has O(n log n) for all cases where as Quick sort can go to O(n²) in worst case)

Heap sort is important when dealing with large quantity of waste data(heap uses O(1) extra space whereas quickSort uses O(log n) spaces)

[Heap Sort for waste Processing System](HeapSortCitymap.cpp) 


<h3>Merge Sort</h3>h3
To Need stable sorting,Working with pre-sorted waste data,Require guaranteed time complexity,Can afford extra memory usage and Need reliable processing times we go for merge sort which gives  always O(n log n) in all cases.

[Merge sort code](MergeCitymap.cpp)

<h3>Dynamic Programming</h3>
Dynamic Programming Approach

Uses bitmask to represent visited locations,dp[mask][last] represents minimum cost to visit locations in mask ending at 'last'

Time Complexity: O(n²2ⁿ)

Space Complexity: O(n2ⁿ)

where n = number of locations

2ⁿ possible combinations of visited locations

n possible last locations for each combination

Stores value for each state in DP table

Stores path information for reconstruction

Advantages of using Dynamic Programming is it guarantees optimal solution while handeling complex constraints and Can be modified for different requirements and it is Efficient for small to medium-sized graphs and in our city design means Shortest path to dump yard contains shortest paths to intermediate points by using bit masking to track visited locations,Memoizes intermediate results,Reconstructs the optimal path and Handles both direct and indirect connections

[Code for Dynamic Programming ](DynamicProgrammingCitymap.cpp)


<h3>Linked Lists</h3>

Using linear data structure for each element (node) points to the next. It’s useful for dynamic datasets and Store incoming waste items and process them sequentially.

Example: A linked list where each node represents a waste batch.

Its Advantages are :- efficient insertion/deletion compared to arrays and Flexible resizing (e.g., when the number of waste items changes).

Linklist is Easy to traverse from start to end,Easy to add new locations and if there are lot of waste from one area it can modify route on the go storing necessary data.(O(n) and O(1) for space Complexity)

[Code for Linked Lists](LinkedLists.cpp)

<h3>Arrays & Lists:</h3>

Adds new waste data,Sort by weight,Calculate totals by type,Filtering by location and Display formatted data

Benefits are it is Easy to maintain and update,Efficient data organization,Quick access to information,Flexible for adding new features

Additional Features are Hazardous waste tracking,Collection time monitoring and Location-based filtering

A linked list can be used to store incoming waste items dynamically with its each node can represent a batch of waste, allowing for efficient insertion and deletion as waste is collected or processed.

[Code for Arrays & Lists](Arrays&ListsCitymap.cpp)

<h3>Binary Search Tree:</h3>

Binary Search Tree (BST) is used because it allows fast searching, easy sorting, and efficient insertion of waste classification rules. The data is stored in a sorted way, making it quick to find, add, or display rules.(O(log(n)))

[Code for Binary Search Tree](BinarySearchTreeCitymap.cpp)

<h3>Hash Table</h3>

If i  missed collecting waste from a specific area, i can use a Hash Table for tracking waste collection statuses which is beneficial because it provides fast access to information, allows for easy updates, can dynamically adjust to the number of areas, and does not require sorting. This makes it an efficient and practical choice for managing the status of waste collection in a city.(O(1))

[Code for Hash Table](HashTableCitymap.cpp)

<h3>Fenwick Tree</h3>

When new materials are added to the inventory, the Fenwick Tree can quickly update the cumulative totals without recalculating everything from scratch. Similarly, when materials are processed and removed, it adjusts the inventory levels efficiently.

The main advantage of using a Fenwick Tree lies in its ability to perform both updates and queries in 𝑂(log⁡𝑛) time, making it highly suitable for real-time tracking of inventory changes.This efficiency ensures that large-scale operations, such as managing inventories across multiple categories or locations, can be handled seamlessly.

A Fenwick Tree is a choice for managing and monitoring recycled material inventories, providing both speed and flexibility in maintaining accurate cumulative data.(O(n log n))

[Code for Fenwick Tree](FenwickTree.Citymapcpp)

<h3>Union-Find</h3>

The Union-Find data structure is used in waste management to group collection zones, improve resource allocation, track connections, and handle emergencies. It helps manage which zones are connected, making the system more efficient and improving service delivery. This makes Union-Find getting used for optimizing waste management operations.(O(ElogV))

[Code for Union-Find](UnionFindCitymap.cpp)

<h3>Segment tree</h3>

Segment trees are particularly useful in scenarios where there is a need for efficient range queries and dynamic updates. In waste management, they can help authorities analyze waste generation trends, monitor performance metrics, and make data-driven decisions to improve operational efficiency. By using segment trees, waste management systems can become more responsive to changing conditions and better serve their communities.(O(log(n)))

Used for efficiently querying the sum of waste data and updating values.

[code for Segment tree](SegmenttreeCitymap.cpp)





































 
