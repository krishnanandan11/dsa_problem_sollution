//two sum main question asked by many company

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twosum(vector<int>& nums, int target){
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        int complement=target-nums[i];
        if(mp.find(complement)!=mp.end()){
            return {mp[complement],i};
        }
        mp[nums[i]]=i;
    }
    return{};
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=18;

    vector<int> result=twosum(nums,target);

    cout<<"indices "<<result[0]<<" "<<result[1]<<endl;
    return 0;

}