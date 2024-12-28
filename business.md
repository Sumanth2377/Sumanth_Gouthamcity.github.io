<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Urban Sustainability Initiatives</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            background-color: #f4f4f4;
            margin: 0;
            padding: 20px;
        }
        .container {
            background-color: white;
            border-radius: 8px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
            padding: 30px;
            margin: 20px auto;
        }
        .initiative {
            margin-bottom: 30px;
            border-bottom: 1px solid #e0e0e0;
            padding-bottom: 20px;
        }
        .initiative:last-child {
            border-bottom: none;
        }
        .initiative h2 {
            color: #2c3e50;
            border-bottom: 2px solid #3498db;
            padding-bottom: 10px;
        }
        .sdg-info {
            background-color: #f9f9f9;
            border-left: 4px solid #3498db;
            padding: 15px;
            margin-top: 15px;
        }
        .sdg-info h3 {
            margin-top: 0;
            color: #2980b9;
        }
        .sdg-info p strong {
            color: #2c3e50;
        }
    </style>
</head>
<body>

    <div class="container">
        <h2>Waste Segregation and Collection</h2>
        <p>Goutham emphasizes waste segregation and collection. There's an opportunity to offer advanced recycling services or solutions for efficient waste disposal.</p>
        <p><strong>Growing Urban Need:</strong> Rapid urbanization increases waste production. A structured recycling and waste management service can address this problem effectively.</p>
        <p><strong>Government and Citizen Support:</strong> We can collaborate with local authorities, receive grants, and charge fees for organized waste collection and recycling.</p>
        <p><strong>Revenue from Recycled Products:</strong> Recycled materials (plastic, paper, metals, compost) can be sold to manufacturers or directly to consumers.</p>

        <h3>Route Optimization: Dijkstra's Algorithm</h3>
        <p><strong>Dijkstra's Algorithm</strong> is widely used for finding the shortest path between nodes in a graph. It is particularly effective for optimizing routes in waste collection services, where travel time and fuel consumption can be reduced.</p>
        <p><strong>Time Complexity:</strong> O(E log V)</p>
        <p><strong>Space Complexity:</strong> O(V)</p>
        <p><strong>Use Case:</strong> Finding closest collection routes</p>

        <img src="https://github.com/user-attachments/assets/4fe657e2-6801-42d5-9674-3fdffc1aa470" alt="Your image description" width="500">

        <h4>Pros:</h4>
        <ul>
            <li>Efficient Path Calculation: Ensures the shortest path, minimizing fuel costs and travel time, which is crucial for daily waste collection routes.</li>
            <li>Works Effectively for Large Urban Areas: Well-suited for areas with a well-structured road network.</li>
            <li>Integration with GPS: Easily integrates with modern navigation systems to provide real-time route optimization.</li>
        </ul>
        
        <h4>Cons:</h4>
        <ul>
            <li>Limited to Non-Negative Weights: The algorithm does not handle scenarios where road weights (distances or costs) change dynamically to negative.</li>
            <li>High Computational Demand: In dense urban networks, it may require significant computational resources, such as when there is more waste to be collected in a specific area and the need to load twice.</li>
            <li>Not Well-Suited for Real-Time Dynamic Updates: Challenges with handling sudden roadblocks or traffic changes.</li>
        </ul>

      <a href="https://github.com/Sumanth2377/Sumanth_Gouthamcity.github.io/blob/main/Dijkstra's.md" target="_blank">Code for Dijkstra's Algorithm</a>


        <p><strong>Source:</strong> <a href="https://www.upperinc.com/glossary/route-optimization/dijkstras-algorithm/#:~:text=Dijkstra%27s%20algorithm%20is%20widely%20used,between%20devices%20in%20a%20network">Dijkstra's Algorithm - Route Optimization</a></p>

        <h3>Waste Segregation: QuickSort</h3>
        <p><strong>QuickSort</strong> is effective for sorting waste items by weight.</p>
        <p><strong>Time Complexity:</strong> O(n log n) average case</p>
        <p><strong>Space Complexity:</strong> O(log n)</p>
        <p><strong>Use Case:</strong> Sorting waste items by weight</p>
        
        <h4>Pros:</h4>
        <ul>
            <li>Fast Sorting for Segregation: Efficiently sorts large quantities of waste into categories (e.g., plastics, metals, organics) with average-case time complexity O(n log n).</li>
            <li>Customizability: Can be adapted to sort based on different attributes, such as weight or recyclability (e.g., iron or other heavy materials).</li>
        </ul>
        
        <h4>Cons:</h4>
        <ul>
            <li>Potential Inefficiency: Worst-case time complexity of O(n²) occurs with poorly chosen pivot elements.</li>
            <li>Not Stable: The algorithm does not maintain the order of identical items, which might be critical in specific segregation workflows.</li>
            <li>Preprocessing Needed: May require manual intervention to define sorting criteria for waste types.</li>
        </ul>
        <a href="https://github.com/Sumanth2377/Sumanth_Gouthamcity.github.io/blob/main/Quicksort.md" target="_blank">Code for Quicksort Algorithm</a>
        
        <a href="https://github.com/Sumanth2377/Sumanth_Gouthamcity.github.io/blob/main/image.jpg" target="_blank">Efficiency Analysis for Quicksort Algorithm</a>
![image alt](https://github.com/Sumanth2377/Sumanth_Gouthamcity.github.io/blob/main/image.jpg?raw=true)


        <p><strong>Source:</strong> <a href="https://builtin.com/articles/quicksort#:~:text=Let%27s%20cover%20a%20few%20key,situations%20when%20space%20is%20limited">QuickSort - Efficient Waste Segregation</a></p>

        <div class="sdg-info">
            <h3>Relevant SDGs:</h3>
            <p><strong>SDG 11.6:</strong> "By 2030, reduce the adverse per capita environmental impact of cities, including by paying special attention to air quality and municipal and other waste management." This directly addresses waste management, has specific indicators for solid waste collection and management, and focuses on urban environmental impact.</p>
            <p><strong>SDG 12.5:</strong> "By 2030, substantially reduce waste generation through prevention, reduction, recycling and reuse." This directly aligns with recycling services and focuses on waste reduction and management.</p>
        </div>

        <div class="initiative">
            <h2>Smart Parking Solutions</h2>
            <p>Developing an IoT-enabled parking management system to address urban parking challenges. Installing smart parking sensors to detect vacant spots and offering a mobile app for real-time parking availability and booking. Monetize through subscription fees and pay-per-use charges. Impact: Reduces traffic congestion and optimizes parking spaces, making city travel smoother.</p>
            
            <div class="sdg-info">
                <h3>Relevant SDG:</h3>
                <p><strong>SDG 11.3:</strong> "By 2030, enhance inclusive and sustainable urbanization and capacity for participatory, integrated and sustainable human settlement planning and management in all countries." Makes parking more accessible, improves urban mobility, and reduces traffic congestion.</p>
            </div>
        </div>
        
        <div class="initiative">
            <h2>Tourism and Cultural Experiences</h2>
            <p>Creating eco-tours, workshops on local crafts, or heritage walks that showcase the region’s culture and sustainability efforts. A tourism tax is in place, suggesting government interest in boosting the sector.</p>
            
            <div class="sdg-info">
                <h3>Relevant SDG:</h3>
                <p><strong>SDG 11.2:</strong> "By 2030, provide access to safe, affordable, accessible and sustainable transport systems for all, improving road safety, notably by expanding public transport."</p>
            </div>
        </div>
        
        <div class="initiative">
            <h2>Local Crafts E-commerce</h2>
            <p>Sell handmade crafts or local produce via an online marketplace. Supporting local culture is part of the city's vision, and e-commerce platforms can reach global markets.</p>
            
            <div class="sdg-info">
                <h3>Relevant SDG:</h3>
                <p><strong>SDG 11.4:</strong> "Strengthen efforts to protect and safeguard the world's cultural and natural heritage." This initiative preserves local cultural heritage and supports traditional craftspeople, maintaining cultural practices.</p>
            </div>
        </div>
    </div>

</body>
</html>
