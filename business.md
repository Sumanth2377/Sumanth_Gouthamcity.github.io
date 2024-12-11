<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Urban Sustainability Initiatives</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            max-width: 800px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f4f4f4;
        }
        .container {
            background-color: white;
            border-radius: 8px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
            padding: 30px;
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
        <div class="initiative">
            <h2>Waste Segregation and Collection</h2>
            <p>Goutham emphasizes waste segregation and collection. There's an opportunity to offer advanced recycling services or solutions for efficient waste disposal. Growing Urban Need: Rapid urbanization increases waste production. A structured recycling and waste management service can address this problem effectively. Government and Citizen Support: we can collaborate with local authorities, receive grants, and charge fees for organized waste collection and recycling. Revenue from Recycled Products: Recycled materials (plastic, paper, metals, compost) can be sold to manufacturers or directly to consumers.
            
            
a) Dijkstra's Algorithm (Route Optimization)

Dijkstra's Algorithm is widely used for finding the shortest path between nodes in a graph. It is particularly effective for optimizing routes, such as in waste collection services, where traveling time can be reduced and fuel consumption can be reduced.

Time Complexity: O(E log V)
Space Complexity: O(V)
Use Case: Finding closest collection routes

Pros:
Efficient Path Calculation: Ensures the shortest path, minimizing fuel costs and travel time, which is crucial for daily waste collection routes.
Works effectively for large urban areas with a well-structured road network.
Integration with GPS: Easily integrates with modern navigation systems to provide real-time route optimization.

Cons:
Limited to Non-Negative Weights: The algorithm does not handle scenarios where road weights (distances or costs) may change dynamically to negative.
High Computational Demand: In dense urban networks, it may require significant computational resources.(Like there is more waste to be collected in specific area and they need to load twice)
Not well-suited for real-time dynamic updates, like sudden roadblocks or traffic changes.

Code: 

Source : https://www.upperinc.com/glossary/route-optimization/dijkstras-algorithm/#:~:text=Dijkstra%27s%20algorithm%20is%20widely%20used,between%20devices%20in%20a%20network.

b) QuickSort (Waste Segregation)

Time Complexity: O(n log n) average case
Space Complexity: O(log n)
Use Case: Sorting waste items by weight


Pros:
Fast Sorting for Segregation: Efficiently sorts large quantities of waste into categories (e.g., plastics, metals, organics) with average-case time complexity 𝑂(𝑛log𝑛).
Customizability: Can be adapted to sort based on different attributes, such as weight or recyclability(iron or some weighted materials).

Cons:
Potential Inefficiency: Worst-case time complexity of 𝑂(𝑛^2) occurs with poorly chosen pivot elements.
Not Stable: The algorithm does not maintain the order of identical items, which might be critical in specific segregation workflows.
May require preprocessing or manual intervention to define sorting criteria for waste types.

Code: 

Source : https://builtin.com/articles/quicksort#:~:text=Let%27s%20cover%20a%20few%20key,situations%20when%20space%20is%20limited.</p>
            
            <div class="sdg-info">
                <h3>Relevant SDGs:</h3>
                <p><strong>SDG 11.6:</strong>"By 2030, reduce the adverse per capita environmental impact of cities, including by paying special attention to air quality and municipal and other waste management". This directly addresses waste management, Has specific indicators for solid waste collection and management. Focuses on urban environmental impact</p>
                <p><strong>SDG 12.5:</strong>"By 2030, substantially reduce waste generation through prevention, reduction, recycling and reuse". Directly aligns with recycling services and Focuses on waste reduction and management</p>
            </div>
        </div>
        <div class="initiative">
            <h2>Smart Parking Solutions</h2>
            <p>Developing an IoT-enabled parking management system to address urban parking challenges. Installing smart parking sensors to detect vacant spots and Offering a mobile app for real-time parking availability and booking. Monetize through subscription fees and pay-per-use charges. Impact: Reduces traffic congestion and optimizes parking spaces, making city travel smoother.</p>
            
            <div class="sdg-info">
                <h3>Relevant SDG:</h3>
                <p><strong>SDG 11.3:</strong>"By 2030, enhance inclusive and sustainable urbanization and capacity for participatory, integrated and sustainable human settlement planning and management in all countries". Makes parking more accessible, Improves urban mobility and Reduces traffic congestion</p>
            </div>
        </div>
        <div class="initiative">
            <h2>Tourism and Cultural Experiences</h2>
            <p>Creating eco-tours, workshops on local crafts, or heritage walks that showcase the region’s culture and sustainability efforts. A tourism tax is in place, suggesting government interest in boosting the sector..</p>
            
            <div class="sdg-info">
                <h3>Relevant SDG:</h3>
                <p><strong>SDG 11.2:</strong>"By 2030, provide access to safe, affordable, accessible and sustainable transport systems for all, improving road safety, notably by expanding public transport"</p>
            </div>
        </div>
        <div class="initiative">
            <h2>Local Crafts E-commerce</h2>
            <p>Sell handmade crafts or local produce via an online marketplace. Supporting local culture is part of the city's vision, and e-commerce platforms can reach global markets.</p>
            
            <div class="sdg-info">
                <h3>Relevant SDG:</h3>
                <p><strong>SDG 11.4:</strong>"Strengthen efforts to protect and safeguard the world's cultural and natural heritage". Preserves local cultural heritage and Supports traditional craftspeople,Maintaining cultural practices </p>
            </div>
        </div>
    </div>
</body>
</html>
