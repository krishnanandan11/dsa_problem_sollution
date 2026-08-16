// replace with greatest element in right
#include <iostream>
#include<vector>
using namespace std;

void greatest(vector<int>& nums)
{
    int temp=0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size()-1-i;j++)
        {
            if(nums[j]<nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main() 
{
    vector<int> nums={16,17,4,3,5,2};
    greatest(nums);
    return 0;
}