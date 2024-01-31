// 6. Given an array arr[] consisting of N positive integers, the task is to find the number of
// pairs such that the Greatest Common Divisor(GCD) of the pairs is not a prime
// number. The pair (i, j) and (j, i) are considered the same.
// Examples:
// Input: arr[] ={ 2, 3, 9}
// Output: 10
// Explanation:
// Following are the possible pairs whose GCD is not prime:
// (0, 1): The GCD of arr[0](= 2) and arr[1](= 3) is 1.
// (0, 2): The GCD of arr[0](= 2) and arr[2](= 9) is 1.
// Therefore, the total count of pairs is 2.
// Input: arr[] = {3, 5, 2, 10}
// Output: 4

#include<iostream>
#include<unordered_set>
#include<iterator>
#include<algorithm>
using namespace std;
