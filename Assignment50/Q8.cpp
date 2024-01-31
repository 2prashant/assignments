8. Create an unordered_map and Initialize it using assignment and subscript operator
9. Given string str, the task is to find the minimum count of characters that need to be
deleted from the string such that the frequency of each character of the string is
unique using unordered_map.
Example:
Input: str = “ceabaacb”
Output: 2
Explanation:
The frequencies of each distinct character are as follows:

c —> 2
e —> 1
a —> 3
b —> 2
Possible ways to make frequency of each character unique by minimum number of
moves are:
● Removing both occurrences of ‘c’ modifies str to “eabaab”
● Removing an occurrence of ‘c’ and ‘e’ modifies str to “abaacb”
Therefore, the minimum removals required is 2.
10. Given an array arr[] consisting of N integers, the task is to find the maximum element
with the minimum frequency using unordered_map.
Example:
Input: arr[] = {2, 2, 5, 50, 1}
Output: 50
Explanation:
The element with minimum frequency is {1, 5, 50}. The maximum element among
these element is 50.