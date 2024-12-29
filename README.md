<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Design and Analysis of Algorithms</title>
    <style>
        :root {
            --gradient-start: #2193b0;
            --gradient-end: #6dd5ed;
            --card-bg: rgba(255, 255, 255, 0.95);
        }
        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, sans-serif;
            line-height: 1.6;
            margin: 0;
            min-height: 100vh;
            background: linear-gradient(135deg, var(--gradient-start), var(--gradient-end));
            color: #24292e;
            display: flex;
            justify-content: center;
            align-items: center;
            padding: 2rem;
        }
        .content {
            background: var(--card-bg);
            max-width: 800px;
            padding: 3rem;
            border-radius: 20px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.15);
            backdrop-filter: blur(10px);
            transform: translateY(0);
            transition: transform 0.3s ease, box-shadow 0.3s ease;
        }
        .content:hover {
            transform: translateY(-5px);
            box-shadow: 0 15px 35px rgba(0,0,0,0.2);
        }
        h1 {
            background: linear-gradient(45deg, var(--gradient-start), var(--gradient-end));
            -webkit-background-clip: text;
            background-clip: text;
            color: transparent;
            font-size: 2.5em;
            margin-bottom: 1em;
            padding-bottom: 0.3em;
            border-bottom: 3px solid #eaecef;
            text-align: center;
        }
        h2 {
            margin-top: 24px;
            margin-bottom: 16px;
            color: #1b1f23;
            transition: color 0.3s ease;
        }
        p {
            margin-bottom: 16px;
            font-size: 1.1em;
            color: #444;
            line-height: 1.8;
        }
        hr {
            height: 3px;
            border: none;
            background: linear-gradient(to right, var(--gradient-start), var(--gradient-end));
            margin: 2rem 0;
            border-radius: 2px;
        }
        a {
            color: var(--gradient-start);
            text-decoration: none;
            padding: 0.5em 1em;
            border-radius: 8px;
            transition: all 0.3s ease;
            display: inline-block;
        }
        a:hover {
            background: linear-gradient(45deg, var(--gradient-start), var(--gradient-end));
            color: white;
            transform: translateX(10px);
            box-shadow: 0 5px 15px rgba(0,0,0,0.1);
        }
        .highlight {
            background: linear-gradient(120deg, rgba(33, 147, 176, 0.1) 0%, rgba(109, 213, 237, 0.1) 100%);
            padding: 0.2em 0.4em;
            border-radius: 4px;
        }
        @keyframes fadeIn {
            from {
                opacity: 0;
                transform: translateY(20px);
            }
            to {
                opacity: 1;
                transform: translateY(0);
            }
        }
        .content {
            animation: fadeIn 1s ease-out;
        }
        @media (max-width: 768px) {
            body {
                padding: 1rem;
            }      
            .content {
                padding: 1.5rem;
            }
            h1 {
                font-size: 2em;
            }
        }
        /* Adding decorative elements */
        .content::before {
            content: '{ }';
            position: absolute;
            top: -20px;
            right: 20px;
            font-size: 40px;
            color: rgba(255, 255, 255, 0.5);
            font-family: monospace;
        }
        .data-structures {
            display: inline-block;
            padding: 0.2em 0.5em;
            background: linear-gradient(45deg, rgba(33, 147, 176, 0.1), rgba(109, 213, 237, 0.1));
            border-radius: 4px;
            margin: 0.2em;
        }
    </style>
</head>
<body>
    <div class="content">
        <h1>Design and Analysis of Algorithms</h1>
        <p>Design Analysis of Algorithms focuses on studying algorithms through natural and historical perspectives, emphasizing solutions to complex problems. The course covers data structures like <span class="data-structures">n-ary trees</span>, <span class="data-structures">AVL trees</span>, <span class="data-structures">tries</span>, <span class="data-structures">graphs</span>, and <span class="data-structures">skip lists</span>, alongside algorithms such as <span class="highlight">sorting</span>, <span class="highlight">backtracking</span>, <span class="highlight">string matching</span>, and <span class="highlight">shortest path algorithms</span>.</p>
        <p>Assignments link theory to real-world applications, exploring data structure choices for tasks like submission throttling with tries, building recommendation engines, and optimizing user-defined heap memory. By fostering intuition and a structured approach, the course equips engineers to design efficient algorithms and enhance existing ones for real-world impact.</p>
        <hr>
        <h2><a href="Reflections.md">📝 Course Learning Reflections</a></h2>
        <h2><a href="business.md">💼 Business Use Cases</a></h2>
        <h2><a href="CityManagement.md">🏙️ Business Case : City Management</a></h2>
    </div>
</body>
</html>
