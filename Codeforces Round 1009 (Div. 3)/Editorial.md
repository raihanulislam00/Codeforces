# Codeforces Round 1009 (Div. 3)

### Problem : [A. Draw a Square](https://codeforces.com/contest/2074/problem/A)

To check if four points (-l,0), (r,0), (0,-d), (0,u) can form a square, you need to verify if the distances between all pairs of adjacent vertices are equal and the angles are 90°. This can be simplified to checking if l=r=d=u, because only then will these four points create a perfect square centered at the origin.

### Problem : [B. The Third Side](https://codeforces.com/contest/2074/problem/B)

For this problem, to find the maximum possible value of the last element, we need to maximize the third side of a triangle at each step. For any two sides a and b, the maximum length of the third side x that forms a valid triangle is a+b-1. We can prove this by applying the triangle inequality: a+b>x, a+x>b, b+x>a. If we maximize x subject to a+b>x, we get x=a+b-ε where ε is small. Since we need integers, x=a+b-1. 

The optimal strategy is to repeatedly select the two largest elements in the array, remove them, and replace them with their sum minus 1, until only one element remains.

### Probelm : [C. XOR and Triangle](https://codeforces.com/contest/2074/problem/C)

For "XOR and Triangle", we need to determine if there exists a value y < x such that the three sides x, y, and x⊕y can form a non-degenerate triangle.

A non-degenerate triangle requires that the sum of any two sides exceeds the third side. This means we need:
1. x + y > x⊕y
2. x + (x⊕y) > y
3. y + (x⊕y) > x

For any value y < x, condition 2 is always satisfied since x⊕y ≥ 0. Condition 3 is more complex but can be satisfied by carefully choosing y. The key insight is to select a value y that's close to x but with certain bits flipped so that x⊕y is smaller than x+y, satisfying condition 1.

Looking at binary representation, a good strategy is to choose y = x-1 or y as the largest power of 2 less than x, whichever maintains the triangle inequality.

### Probelm : [D. Counting Points](https://codeforces.com/contest/2074/problem/D)

The logic involves iterating over the x-coordinates covered by each circle, calculating the maximum y-distance for each x using the circle's equation, and summing the unique integer points. By focusing only on the x-ranges of the circles and using a map to track the highest y for each x, we efficiently count all valid points without redundant calculations. This ensures the solution stays within the problem's constraints.


### Problem : [E. Empty Triangle](https://codeforces.com/contest/2074/problem/E)

The problem requires finding a triangle formed by three points from a set of \( n \) points, such that no other point lies inside the triangle. The solution involves iteratively querying triangles formed by three points and using the responses to refine the search. If a query returns a point inside the triangle, we replace one of the triangle's vertices with that point and repeat the process. This ensures that we eventually find a valid empty triangle within the allowed number of queries. The logic focuses on systematically narrowing down the candidate points while adhering to the query limit.