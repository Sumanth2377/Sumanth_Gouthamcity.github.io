<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Goutham Smart City Initiatives</title>
    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;600;700&display=swap" rel="stylesheet">
    <script src="https://cdn.tailwindcss.com"></script>
    <style>
        body {
            font-family: 'Inter', sans-serif;
            background: linear-gradient(135deg, #f5f7fa 0%, #c3cfe2 100%);
        }
        .initiative-card {
            background: white;
            border-radius: 15px;
            box-shadow: 0 10px 25px rgba(0,0,0,0.1);
            transition: all 0.3s ease;
            border-top: 5px solid transparent;
        }
        .initiative-card:hover {
            transform: translateY(-10px);
            box-shadow: 0 15px 35px rgba(0,0,0,0.15);
        }
        .initiative-card-green:hover { border-top-color: #10B981; }
        .initiative-card-blue:hover { border-top-color: #3B82F6; }
        .initiative-card-purple:hover { border-top-color: #8B5CF6; }
        .initiative-card-indigo:hover { border-top-color: #6366F1; }
        .sdg-badge {
            background-color: rgba(16, 185, 129, 0.05);
            border-left: 4px solid #10B981;
        }
    </style>
</head>
<body class="min-h-screen flex items-center justify-center py-12 px-4 sm:px-6 lg:px-8">
    <div class="container mx-auto">
        <h1 class="text-4xl font-bold text-center mb-12 text-gray-800">Goutham Smart City Initiatives</h1>
        
        <div class="grid md:grid-cols-2 lg:grid-cols-4 gap-6">
            <!-- Recycling and Waste Management -->
            <div class="initiative-card initiative-card-green bg-white rounded-lg shadow-md p-6">
                <h2 class="text-2xl font-semibold mb-4 text-green-700">Recycling & Waste Management</h2>
                <p class="mb-4">Goutham emphasizes organized waste management and sustainability. Establish a recycling plant or offer services like e-waste disposal and compost production from organic waste. Smart Waste Management and Recycling Services 
                
                Alignment with Sustainability Goals: Goutham emphasizes waste segregation and collection. There's an opportunity to offer advanced recycling services or solutions for efficient waste disposal. Growing Urban Need: Rapid urbanization increases waste production. A structured recycling and waste management service can address this problem effectively. Government and Citizen Support: we can collaborate with local authorities, receive grants, and charge fees for organized waste collection and recycling. Revenue from Recycled Products: Recycled materials (plastic, paper, metals, compost) can be sold to manufacturers or directly to consumers.</p>
                
                <div class="sdg-badge p-4 rounded mt-4">
                    <h3 class="font-bold text-green-800 mb-2">Relevant SDGs:</h3>
                    <div class="space-y-2">
                        <div>
                            <strong>SDG 11.6:</strong> Reduce adverse environmental impact of cities
                            <p class="text-sm text-gray-600">By 2030, reduce per capita environmental impact, focusing on waste management</p>
                        </div>
                        <div>
                            <strong>SDG 12.5:</strong> Waste Reduction
                            <p class="text-sm text-gray-600">Substantially reduce waste through prevention, recycling, and reuse</p>
                        </div>
                    </div>
                </div>
            </div>

            <!-- Smart Parking Solutions -->
            <div class="initiative-card initiative-card-blue bg-white rounded-lg shadow-md p-6">
                <h2 class="text-2xl font-semibold mb-4 text-blue-700">Smart Parking Solutions</h2>
                <p class="mb-4">Developing an IoT-enabled parking management system to address urban parking challenges. Installing smart parking sensors to detect vacant spots and Offering a mobile app for real-time parking availability and booking. Monetize through subscription fees and pay-per-use charges. Impact: Reduces traffic congestion and optimizes parking spaces, making city travel smoother.</p>
                
                <div class="sdg-badge p-4 rounded mt-4">
                    <h3 class="font-bold text-green-800 mb-2">Relevant SDG:</h3>
                    <div>
                        <strong>SDG 11.3:</strong> Sustainable Urbanization
                        <p class="text-sm text-gray-600">Enhance inclusive and sustainable urban planning and management</p>
                    </div>
                </div>
            </div>

            <!--  Public Transport Platform -->
            <div class="initiative-card initiative-card-purple bg-white rounded-lg shadow-md p-6">
                <h2 class="text-2xl font-semibold mb-4 text-purple-700">Public Transport Platform</h2>
                <p class="mb-4">Sell handmade crafts or local produce via an online marketplace. Supporting local culture is part of the city's vision, and e-commerce platforms can reach global markets.</p>
                
                <div class="sdg-badge p-4 rounded mt-4">
                    <h3 class="font-bold text-green-800 mb-2">Relevant SDG:</h3>
                    <div>
                        <strong>SDG 11.2:</strong> Sustainable Transport
                        <p class="text-sm text-gray-600">Provide safe, affordable, and sustainable transport systems</p>
                    </div>
                </div>
            </div>

            <!-- Local Crafts and E-commerce -->
            <div class="initiative-card initiative-card-indigo bg-white rounded-lg shadow-md p-6">
                <h2 class="text-2xl font-semibold mb-4 text-indigo-700">Local Crafts E-commerce</h2>
                <p class="mb-4">Sell handmade crafts or local produce via an online marketplace. Supporting local culture is part of the city's vision, and e-commerce platforms can reach global markets.</p>
                
                <div class="sdg-badge p-4 rounded mt-4">
                    <h3 class="font-bold text-green-800 mb-2">Relevant SDG:</h3>
                    <div>
                        <strong>SDG 11.4:</strong> Cultural Heritage Protection
                        <p class="text-sm text-gray-600">Strengthen efforts to protect and safeguard cultural and natural heritage</p>
                    </div>
                </div>
            </div>
        </div>
    </div>
</body>
</html>
