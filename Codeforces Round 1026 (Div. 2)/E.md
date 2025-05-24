# Problem A: Erase from the Front or Back
#### Problem Statement: Given an array, you can either erase from the front or the back in each operation. Find the minimum number of operations to make all remaining elements equal.

Solution:
- The goal is to find the longest contiguous subarray where all elements are the same. 
- The answer is n - max_length, where max_length is the length of the longest such subarray.

# Problem B: Is there a point where cnt=0?
#### Problem Statement: Given a string of '+' and '-', where '+' increments a counter and '-' decrements it. Check if the counter ever reaches zero at any point (other than the start).

Solution:
- Simulate the process and check if the counter becomes zero at any step.

# Problem C: Fill in 01 to Meet the Condition
#### Problem Statement: Given an array of -1, 0, and 1, replace -1 with 0 or 1 such that no two adjacent elements are equal. Minimize the number of 1s used.

Solution:
- Greedily fill -1s such that they alternate with their neighbors.
- If conflicts arise, prioritize minimizing 1s by preferring 0 where possible.

  
# Problem D: (Bonus) Given s < t
#### Problem Statement: Given two strings s and t where s is lexicographically smaller than t, find the smallest lexicographical string between them.

Solution:
- If s is a prefix of t, the answer is s followed by 'a's or similar.
- Otherwise, increment the last character of s where possible.
