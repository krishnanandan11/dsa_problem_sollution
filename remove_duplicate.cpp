//Remove Duplicates from Sorted Array

#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int>& nums){
    if(nums.empty()){
        return 0;
    }
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}
int main()
{
    vector<int> nums={1,1,2,2,3,3,3,4,5};
    int k=removeduplicates(nums);

    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}