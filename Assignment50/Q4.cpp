4. Write a c++ program to demonstrate implementation of find function in
unordered_map.
5. Given a positive integer N, the task is to print the nearest power of 2 of the
frequencies of each digit present in N. If there exists two nearest powers of 2 for any
frequency, print the larger one using unordered_map.
Example:
Input: N = 344422
Output:
2 -> 2
3 -> 1
4 -> 4
Explanation:
Frequency of the digit 3 is 1. Nearest power of 2 is 1.
Frequency of the digit 4 is 3. Nearest power of 2 is 4.
Frequency of the digit 2 is 2. Nearest power of 2 is 2.
6. Given two integers L, R, and an integer K, the task is to print all the pairs of Prime
Numbers from the given range whose difference is K using unordered_map.
Example:
Input: L = 1, R = 19, K = 6
Output: (5, 11) (7, 13) (11, 17) (13, 19)
Explanation: The pairs of prime numbers with difference 6 are (5, 11), (7, 13), (11,
17), and (13, 19).
7. Create an unordered_map and Initialize it from another map using the copy
constructor
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