#include<vector>
#include<iostream>
using namespace std;

vector<int> duplicate(vector<int>& nums){
    vector<int> result;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                result.push_back(nums[i]);
            }
        }
    }
    return result;

}
int main()
{
    vector<int> nums={1,2,2,4,4,6};
    vector<int> result=duplicate(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}
