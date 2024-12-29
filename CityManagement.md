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
Most efficient algorithm for this case because it guarantees the shortest path when all weights are positive.

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

The best case is when partition happens in mid. 

Quicksort worst case is similar to bubble sort/selection sort.

[Quick sort code for Segregating waste](Quicksort.cpp)

<h3>Heap Sort:</h3>
For Reliability and consistency(we don’t want to waste sorting system to suddenly slow down because of a bad pivot choice or partially sorted waste items) we use Heap Sort

Heap sort is better for waste processing systems where consistent timing is crucial(heap sort has O(n log n) for all cases where as Quick sort can go to O(n²) in worst case)

Heap sort is important when dealing with large quantity of waste data(heap uses O(1) extra space whereas quickSort uses O(log n) spaces)

[Heap Sort for waste Processing System](HeapSortCitymap.cpp) 












 
