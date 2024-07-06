// // // graph traversal 

// // // #include <iostream>
// // // #include <vector>

// // // using namespace std;

// // // vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges) {
// // //     // Initialize adjacency list
// // //     vector<int> ans[n];
    
// // //     // Fill the adjacency list with the edges
// // //     for (int i = 0; i < m; i++) {
// // //         int u = edges[i][0];
// // //         int v = edges[i][1];
// // //         ans[u].push_back(v);
// // //         ans[v].push_back(u);
// // //     }

// // //     // Prepare the final adjacency list including the vertex itself
// // //     vector<vector<int>> adj(n);
// // //     for (int i = 0; i < n; i++) {
// // //         adj[i].push_back(i); // Adding the vertex itself
        
// // //         // Adding the neighbors
// // //         int anss = ans[i].size();
// // //         for (int j = 0; j < anss; j++) {
// // //             adj[i].push_back(ans[i][j]);
// // //         }
// // //     }
    
// // //     return adj;
// // // }

// // // int main() {
// // //     int n = 5; // Number of vertices
// // //     int m = 4; // Number of edges
// // //     vector<vector<int>> edges = {{0, 1}, {0, 4}, {1, 2}, {1, 3}}; // Edges

// // //     // Get the adjacency list
// // //     vector<vector<int>> adjacencyList = printAdjacency(n, m, edges);

// // //     // Print the adjacency list
// // //     for (int i = 0; i < n; i++) {
// // //         cout << "Vertex " << i << ": ";
// // //         for (int j = 0; j < adjacencyList[i].size(); j++) {
// // //             cout << adjacencyList[i][j] << " ";
// // //         }
// // //         cout << endl;
// // //     }

// // //     return 0;
// // // }


// // // bfs implimentation

// #include<iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// // function to perform breadth first search on a graph
// // represented using adjacency list
// void bfs(vector<vector<int> >& adjList, int startNode, vector<bool>& visited) {
//     // crate a queue for bfs
//     queue<int> q;

//     // mark the current node as visited and enqueue it 
//     visited[startNode] = true;
//     q.push(startNode);

//     // iterate over the queue 
//     while (!q.empty())
//     {
//         // dequeue a vertex from queue and print it
//         int currentNode = q.front();
//         q.pop();
//         cout<< currentNode << " ";

//          // Get all adjacent vertices of the dequeued vertex
//         // currentNode If an adjacent has not been visited,
//         // then mark it visited and enqueue it
//         for (int neighbor : adjList[currentNode])
//        {
//              if(!visited[neighbor]) {
//                 visited[neighbor] = true;
//                 q.push(neighbor);
//              }            
//         }
//     }
// }
// // function to add an edge to the graph
// void addEdge(vector<vector<int> >& adjlist, int u, int v)
// {
//     adjlist[u].push_back(v);
// }
// int main(){
// // number of vertices in the graph 
// int vertices = 5;

// // adjacency list representation of the graph 
// vector<vector<int> > adjList(vertices);

// // add edges to the graph
// addEdge(adjList,0,1);
// addEdge(adjList,0,1);
// addEdge(adjList,1,3);
// addEdge(adjList,1,4);
// addEdge(adjList,2,4);

// // mark all the vertices as not visited 
// vector<bool> visited(vertices, false);

// // perform bfs the traversal starting from vertex 0
// cout<< "breadth first traversal starting from vertx " "0: ";
// bfs(adjList,0,visited);
// return 0;
// }

// // dijkstras-shortest-path-algorithm

// // Program to find Dijkstra's shortest path using
// // priority_queue in STL
// #include <bits/stdc++.h>
// using namespace std;
// #define INF 0x3f3f3f3f

// // iPair ==> Integer Pair
// typedef pair<int, int> iPair;

// // This class represents a directed graph using
// // adjacency list representation
// class Graph {
//     int V; // No. of vertices

//     // In a weighted graph, we need to store vertex
//     // and weight pair for every edge
//     list<pair<int, int> >* adj;

// public:
//     Graph(int V); // Constructor

//     // function to add an edge to graph
//     void addEdge(int u, int v, int w);

//     // prints shortest path from s
//     void shortestPath(int s);
// };

// // Allocates memory for adjacency list
// Graph::Graph(int V)
// {
//     this->V = V;
//     adj = new list<iPair>[V];
// }

// void Graph::addEdge(int u, int v, int w)
// {
//     adj[u].push_back(make_pair(v, w));
//     adj[v].push_back(make_pair(u, w));
// }

// // Prints shortest paths from src to all other vertices
// void Graph::shortestPath(int src)
// {
//     // Create a priority queue to store vertices that
//     // are being preprocessed. This is weird syntax in C++.
//     // Refer below link for details of this syntax
//     // https://www.geeksforgeeks.org/implement-min-heap-using-stl/
//     priority_queue<iPair, vector<iPair>, greater<iPair> >
//         pq;

//     // Create a vector for distances and initialize all
//     // distances as infinite (INF)
//     vector<int> dist(V, INF);

//     // Insert source itself in priority queue and initialize
//     // its distance as 0.
//     pq.push(make_pair(0, src));
//     dist[src] = 0;

//     /* Looping till priority queue becomes empty (or all
//     distances are not finalized) */
//     while (!pq.empty()) {
//         // The first vertex in pair is the minimum distance
//         // vertex, extract it from priority queue.
//         // vertex label is stored in second of pair (it
//         // has to be done this way to keep the vertices
//         // sorted distance (distance must be first item
//         // in pair)
//         int u = pq.top().second;
//         pq.pop();

//         // 'i' is used to get all adjacent vertices of a
//         // vertex
//         list<pair<int, int> >::iterator i;
//         for (i = adj[u].begin(); i != adj[u].end(); ++i) {
//             // Get vertex label and weight of current
//             // adjacent of u.
//             int v = (*i).first;
//             int weight = (*i).second;

//             // If there is shorted path to v through u.
//             if (dist[v] > dist[u] + weight) {
//                 // Updating distance of v
//                 dist[v] = dist[u] + weight;
//                 pq.push(make_pair(dist[v], v));
//             }
//         }
//     }

//     // Print shortest distances stored in dist[]
//     printf("Vertex Distance from Source\n");
//     for (int i = 0; i < V; ++i)
//         printf("%d \t\t %d\n", i, dist[i]);
// }

// // Driver program to test methods of graph class
// int main()
// {
//     // create the graph given in above figure
//     int V = 9;
//     Graph g(V);

//     // making above shown graph
//     g.addEdge(0, 1, 4);
//     g.addEdge(0, 7, 8);
//     g.addEdge(1, 2, 8);
//     g.addEdge(1, 7, 11);
//     g.addEdge(2, 3, 7);
//     g.addEdge(2, 8, 2);
//     g.addEdge(2, 5, 4);
//     g.addEdge(3, 4, 9);
//     g.addEdge(3, 5, 14);
//     g.addEdge(4, 5, 10);
//     g.addEdge(5, 6, 2);
//     g.addEdge(6, 7, 1);
//     g.addEdge(6, 8, 6);
//     g.addEdge(7, 8, 7);

//     g.shortestPath(0);

//     return 0;
// }

// graph  creating and printing

// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// class graph{

// public: 
//     unordered_map<int, list<int> > adj;   
//     void addEdge(int u, int v, bool direction){
//         // direction = 0 -> undirected
//         // direction = 1 -> directed graph

//         // create an edge from u to v 
//         adj[u].push_back(v);
//         if (direction == 0)
//           {
//             adj[v].push_back(u);
//           }
//     }

//     void printAdjList() {
//         for (auto i : adj)
//         {
//             cout << i.first<<"->";
//             for(auto j: i.second){
//                 cout<< j << ", ";
//             }
//             cout<<endl;
//         }
        
//     }
// };
// int main(){
//   int n;
//   cout<< " enter the number of nodes"<<endl;
//   cin >> n;

//   int m;
//   cout<< " enter the number of edges"<<endl;
//   cin >> m;

//   graph g;
  
//   for (int i = 0; i <m; i++)
//   {
//     int u, v;
//     cin >> u >> v;
//     // creating an undirected graph 
//     g.addEdge(u, v ,0);
//   }

//   // printing graph 
//   g.printAdjList();
  
// return 0;
// }

//  dfs in graph 

// #include<iostream>
// #include<vector>
// using namespace std;

// // function to represent a graph as an adjacency list
// vector<int> adjList[100]; //assuming maximum 100 vertices

// // function to add an edge to the graph
// void addEdge(int u , int v){
//   adjList[u].push_back(v);
// }

// // function to keep track of visited nodes
// bool visited[100];

// // recursive DFS traversal function 
// void DFSUtil(int v){
//   visited[v] = true;
//   cout<< v << " ";

//   // itrate through all adjaxent nodes 
//   for(int neighbor : adjList[v]){
//     if (!visited[neighbor])
//     {
//       DFSUtil(neighbor);
//     }
//   }
// }

// // main dfs function to call dfsutill for all unvisited nodes
// void DFS(int V) {
//   // initialize all nodes as unvisited
//   for (int i = 0; i < V; i++)
//   {
//     visited[i] = false;
//   }
  
//   // call dfsuntil for all unvisited vertices
//   for (int i = 0; i < V; i++)
//   {
//     if (!visited[i])
//     {
//       DFSUtil(i);
//     }
//   }
// }
// int main(){
// int V = 5; // number of vertices

// // add edges to the graph 
//   addEdge(0, 1);
//   addEdge(0, 2);
//   addEdge(1, 2);
//   addEdge(2, 0);
//   addEdge(2, 3);
//   addEdge(3, 4);

// cout << "Depth First Search (DFS) traversal: ";
// DFS(V);
// return 0;
// }

// Dijkstra's Algorithm 

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
//   // create adjacency list
//   unordered_map<int,list<pair<int,int> > > adj;

//   for (int i = 0; i < edges; i++)
//   {
//     int u = vec[i][0];
//     int v = vec[i][1];
//     int w = vec[i][2];

//     adj[u].push_back(make_pair(v,w));
//     adj[v].push_back(make_pair(u,w));
//   }
  
//   vector<int> dist(vertices);
//   for (int i = 0; i < vertices; i++)
//   {
//     dist[i] = INT_MAX;
//   }

//   set<pair<int,int> > st;

//   dist[source] = 0;
//   st.insert(make_pair(0,source));
  
//   while (!st.empty())                 
//   {
//     // fetch top record
//     auto top = *(st.begin());

//     int nodeDistance = top.first;
//     int topNode = top.second;

//     // remove top record now
//     st.erase(st.begin());

//     // traverse on neighbours
//     for(auto neighbour: adj[topNode]){
//       if (nodeDistance + neighbour.second < dist[neighbour.first])
//       {
//         auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
//         //if record found, then erase it 
//         if (record !=st.end())
//         {
//           st.erase(record);
//         }
//         // distance update 
//         dist[neighbour.first] = nodeDistance + neighbour.second;
//         // record push in set 
//         st.insert(make_pair(dist[neighbour.first], neighbour.first));

//       }
      
//     }
//   }
//   return dist;
// }
// int main(){
// int vertices, edges;
//     cout << "Enter number of vertices and edges: ";
//     cin >> vertices >> edges;

//     vector<vector<int>> vec(edges, vector<int>(3));
//     cout << "Enter edge (u v w) for each edge:" << endl;
//     for (int i = 0; i < edges; i++) {
//         cin >> vec[i][0] >> vec[i][1] >> vec[i][2];
//     }

//     int source;
//     cout << "Enter source vertex: ";
//     cin >> source;

//     vector<int> shortestDistances = dijkstra(vec, vertices, edges, source);

//     cout << "Shortest distances from source vertex " << source << " to all other vertices are:" << endl;
//     for (int i = 0; i < vertices; i++) {
//         if (shortestDistances[i] == INT_MAX) {
//             cout << "INF ";
//         } else {
//             cout << shortestDistances[i] << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }


// Articulation Points in Graph

#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <utility>

using namespace std;

// Function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// DFS function to find articulation points
void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &vis,
         unordered_map<int, list<int> > &adj, vector<int> &ap, int &timer) {
    vis[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;

    for (auto nbr : adj[node]) {
        if (nbr == parent) continue;

        if (!vis[nbr]) {
            dfs(nbr, node, disc, low, vis, adj, ap, timer);
            low[node] = min(low[node], low[nbr]);

            // Check if the node is an articulation point
            if (low[nbr] >= disc[node] && parent != -1) {
                ap[node] = 1;
            }
            child++;
        } else {
            low[node] = min(low[node], disc[nbr]);
        }
    }

    // Special case for root node
    if (parent == -1 && child > 1) {
        ap[node] = 1;
    }
}

int main() {
    int n = 5; // Number of vertices
    int e = 5; // Number of edges
    vector<pair<int, int> > edges = { {0, 3}, {3, 4}, {0, 4}, {0, 1}, {1, 2} };

    // Adjacency list
    unordered_map<int, list<int> > adj;

    for (const auto &edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(n, -1);
    vector<int> low(n, -1);
    unordered_map<int, bool> vis;
    vector<int> ap(n, 0);

    // Run DFS for each unvisited node
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, -1, disc, low, vis, adj, ap, timer);
        }
    }

    // Print articulation points
    cout << "Articulation points are as follows:" << endl;
    for (int i = 0; i < n; i++) {
        if (ap[i] != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
