#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int>& nums){
    int first=nums[0];
    int second=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>first){
            second=first;
            first=nums[i];
        }else if(nums[i]>second && nums[i]!=first)
        {
            second=nums[i];
        }
    }
    return second;
}
int main(){
    vector<int> nums={1,4,3,8,6,5};
    int result=secondlargest(nums);
    cout<<result;
}