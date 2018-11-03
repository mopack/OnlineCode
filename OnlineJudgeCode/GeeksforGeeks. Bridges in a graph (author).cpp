//#include <iostream>
//#include <list>
//#define NIL -1
//#define min(a,b) (((a) < (b)) ? (a) : (b))
//using namespace std;
//class Graph {
//public:
//	int V; // no. of vertics
//	list<int> *adj; // dynamic array of adjacency lists
//
//	bool *visited;
//	int  *disc;
//	int  *low;
//	int  *parent;
//	int time;
//	void bridgeUtil(int u, bool visited[], int disc[], int low[], int parent[]) {
//		visited[u] = true;
//		disc[u] = low[u] = ++time;
//		printf("dis[%d]=low[%d]=%d\n", u, u, time);
//		list<int>::iterator i;
//		for (i = adj[u].begin(); i != adj[u].end(); i++) {
//			int v = *i;
//			if (!visited[v]) {
//				parent[v] = u;
//				bridgeUtil(v, visited, disc, low, parent);
//				printf("low[%d]=%d low[%d]=%d: ", u, low[u], v, low[v]);
//				low[u] = min(low[u], low[v]);
//				printf("low[%d]=%d\n", u, low[u]);
//				if (low[v] > disc[u]) cout << u << ' ' << v << endl;
//			}
//			else if (v != parent[u]) {
//				//printf("low[%d]=%d disc[%d]=%d : ", u, low[u], v, disc[v]);
//				low[u] = min(low[u], disc[v]);
//				//printf("low[%d]=%d\n", u, low[u]);
//			}
//		}
//	}
//	Graph(int V) {
//		this->V = V;
//		adj = new list<int>[V];
//		time = 0;
//	}
//	void addEdge(int v, int w) { //undirected's addedge
//		adj[v].push_back(w);
//		adj[w].push_back(v);
//	}
//	void bridge() { //DFS to find bridges
//		visited = new bool[V];
//		disc = new int[V];
//		low = new int[V];
//		parent = new int[V];
//
//		for (int i = 0; i < V; i++) {
//			parent[i] = NIL;
//			visited[i] = false;
//		}
//
//		for (int i = 0; i < V; i++)
//			if (visited[i] == false)
//				bridgeUtil(i, visited, disc, low, parent);
//	}
//	void display() {
//		cout << "disc: ";
//		for (int i = 0; i < V; i++) cout << disc[i] << ' ';
//		cout << "\nlow: ";
//		for (int i = 0; i < V; i++) cout << low[i] << ' ';
//		cout << "\nparent: ";
//		for (int i = 0; i < V; i++) cout << parent[i] << ' ';
//	}
//};
//int main() {
//	// Create graphs given in above diagrams
//	cout << "\nBridges in first graph \n";
//	Graph g1(5);
//	g1.addEdge(1, 0);
//	g1.addEdge(0, 2);
//	g1.addEdge(2, 1);
//	g1.addEdge(0, 3);
//	g1.addEdge(3, 4);
//	g1.bridge();
//	g1.display();
//	
//
//	cout << "\nBridges in second graph \n";
//	Graph g2(4);
//	g2.addEdge(0, 1);
//	g2.addEdge(1, 2);
//	g2.addEdge(2, 3);
//	g2.bridge();
//	g2.display();
//
//	cout << "\nBridges in  graph \n";
//	Graph g3(7);
//	g3.addEdge(0, 1);
//	g3.addEdge(1, 2);
//	g3.addEdge(2, 0);
//	g3.addEdge(1, 3);
//	g3.addEdge(1, 4);
//	g3.addEdge(1, 6);
//	g3.addEdge(3, 5);
//	g3.addEdge(4, 5);
//	g3.bridge();
//	g3.display();
//
//	cout << "\nBridges in  4 graph \n";
//	Graph g4(3);
//	g4.addEdge(0, 1);
//	g4.addEdge(1, 2);
//	g4.addEdge(2, 0);
//	g4.bridge();
//	g4.display();
//
//	cout << "\nBridges in 5 graph \n";
//	Graph g5(5);
//	g5.addEdge(0, 1);
//	g5.addEdge(1, 2);
//	g5.addEdge(2, 3);
//	g5.addEdge(0, 3);
//	g5.addEdge(0, 4);
//	g5.bridge();
//	g5.display();
//
//	system("pause");
//	return 0;
//} 