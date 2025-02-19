#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-Heap
    
    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop(); // Remove the smallest element
        }
    }
    
    return minHeap.top(); // Kth largest element
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << findKthLargest(nums, k) << endl; // Output: 5

    vector<int> nums2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    k = 4;
    cout << findKthLargest(nums2, k) << endl; // Output: 4

    return 0;
}
