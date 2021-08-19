# Editorial
## Basic Ideas
The problem basically makes use of dynamic-programming and sparse-tables. 
## Solution
We can see the maximum answer that you can get for a node i can be given by

dp[i]=max(dp[2i+1],dp[2i+2])+a[i]

Now, since all the caves are identical therfore all the caves will have same answer for each node. Therefore, all (l,r) pairs are just range queries on the original cave tree. 
So to answer these queries we generate a sparse table. 

Now after the sparse table being built it is easy to answer all the queries.
## Complexity Analysis
The dp takes constant time for each step therefore this step takes O(2^m) time.

Generating the sparse table takes O(m * 2^m) time.

Now each query can be answered in O(1) i.e. The queries take O(n) time altogether

Therefore the overall complexity of the solution is O(n + m * 2^m)
