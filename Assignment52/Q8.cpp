8. Given an array A[] consisting of positive integers, the task is to find the only array
element with a single occurrence using unordered_map.
9. Given an array arr[], the task is to find the count of array elements whose squares
are already present in the array using unordered_map.
10. Given string str, the task is to find the minimum count of characters that need to be
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

