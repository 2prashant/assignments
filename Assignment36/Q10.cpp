/*
10. Given an integer array nums , return an array answer such that answer[i] is equal to
the product of all the elements of nums except nums[i] .
*/
// #include<iostream>// not slove
// #include<array>
// #include<algorithm>
// using namespace std;
// int main()
// {
    
//     return 0;
// }







#include <vector>

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    int n = nums.size();
    
    // Initialize left and right product arrays
    std::vector<int> leftProducts(n, 1);
    std::vector<int> rightProducts(n, 1);
    
    // Calculate left products
    for (int i = 1; i < n; i++) {
        leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
    }
    
    // Calculate right products
    for (int i = n - 2; i >= 0; i--) {
        rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
    }
    
    // Calculate the final result
    std::vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[i] = leftProducts[i] * rightProducts[i];
    }
    
    return result;
}
