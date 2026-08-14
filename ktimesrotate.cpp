#include <iostream>
#include<vector>
using namespace std;

void rotatearray(vector<int>& nums,int k){
    vector<int> v;
    for(int i=k;i<nums.size();i++)
    {
        v.push_back(nums[i]);
    }
    for(int i=0;i<k;i++){
        v.push_back(nums[i]);
    }
    nums=v;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}
int main() 
{
    vector<int> nums={1,2,3,4,5};
    int k=2;
    rotatearray(nums,k);
    return 0;
}