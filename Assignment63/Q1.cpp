/*

1. Given a square chessboard of N x N size, the position of the Knight and the position of a 
target are given. We need to find out the minimum steps a Knight will take to reach the 
target position.
2. Consider a matrix, where each cell contains either a ‘0’ or a ‘1’, and any cell containing a 
1 is called a filled cell. Two cells are said to be connected if they are adjacent to each other 
horizontally, vertically, or diagonally. If one or more filled cells are also connected, they form a 
region. find the size of the largest region.
Examples:
Input: M[][5] = { {0, 0, 1, 1, 0}, {1, 0, 1, 1, 0}, {0, 1, 0, 0, 0}, {0, 0, 0, 0, 1}}
Output: 6
Explanation: In the following example, there are 2 regions.
One with size 1 and the other as 6. So largest region: 6
Input: M[][5] = { {0, 0, 1, 1, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0 1} }
Output: 4
Explanation: In the following example, there are 2 regions.
One with size 1 and the other as 4. So largest region: 4
3. Given an array of N distinct elements, find the minimum number of swaps required to 
sort the array.
Examples:
Input: {4, 3, 2, 1}
Output: 2
Explanation: Swap index 0 with 3 and 1 with 2 to form the sorted array {1, 2, 3, 4}
Input: {1, 5, 4, 3, 2}
Output: 2
4. In MS-Paint, when we take the brush to a pixel and click, the color of the region of that 
pixel is replaced with a new selected color. Following is the problem statement to do this task.
Given a 2D screen, location of a pixel in the screen and a color, replace color of the 
given pixel and all adjacent same colored pixels with the given color.
Example:
Input:
screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
 {1, 1, 1, 1, 1, 1, 0, 0},
 {1, 0, 0, 1, 1, 0, 1, 1},
 {1, 2, 2, 2, 2, 0, 1, 0},
 {1, 1, 1, 2, 2, 0, 1, 0},
 {1, 1, 1, 2, 2, 2, 2, 0},
 {1, 1, 1, 1, 1, 2, 1, 1},
 {1, 1, 1, 1, 1, 2, 2, 1},
 };
 x = 4, y = 4, newColor = 3
The values in the given 2D screen
 indicate colors of the pixels.
x and y are coordinates of the brush,
 newColor is the color that
should replace the previous color on
 screen[x][y] and all surrounding
pixels with same color.
Output:
Screen should be changed to following.
screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
 {1, 1, 1, 1, 1, 1, 0, 0},
 {1, 0, 0, 1, 1, 0, 1, 1},
 {1, 3, 3, 3, 3, 0, 1, 0},
 {1, 1, 1, 3, 3, 0, 1, 0},
 {1, 1, 1, 3, 3, 3, 3, 0},
 {1, 1, 1, 1, 1, 3, 1, 1},
 {1, 1, 1, 1, 1, 3, 3, 1},
 };
5. Given an undirected Graph, The task is to find the Bridges in this Graph.
6. Given a two-dimensional grid, each cell of which contains an integer cost 
which represents a cost to traverse through that cell, we need to find a path from 
the top left cell to the bottom right cell by which the total cost incurred is 
minimum.
7. Depth First Search or DFS for a Graph.
8. Given a directed graph, find out if a vertex j is reachable from another 
vertex i for all vertex pairs (i, j) in the given graph. Here reachable mean that 
there is a path from vertex i to j. The reach-ability matrix is called the transitive 
closure of a graph.
For example, consider below graph
Transitive closure of above graphs is
 1 1 1 1
 1 1 1 1
 1 1 1 1
 0 0 0 1
9. Given an undirected graph, the task is to check if the graph contains a 
cycle or not.
10. Check whether a given graph is Bipartite or not

*/