#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int l = 0, h = nums.size() - 1, m;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        if (nums[m] == target)
            return m;
        else if (nums[m] > target)
            h = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main(){
    
    vector<int> nums;
    int size,elements, target;
    cout<<"Enter Target: ";
    cin>>target;
    cout<<"Enter Size of array: ";
    cin>>size;
    for(int i=0; i<size;i++){
        cin>>elements;
        nums.push_back(elements);
    }
    cout<<"Element exists at index:"<<search(nums,target);
    return 0;
}