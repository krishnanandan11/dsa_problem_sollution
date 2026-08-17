#include<iostream>
#include<vector>
using namespace std;
void palindrom(vector<int>& nums){
    int n=nums.size();
    int c=0;
    for(int i=0;i<n/2;i++){
        if(nums[i]==nums[n-1-i]){
            c++;
        }
    }
    if(c==n/2){
        cout<<"palindrom";
    }else
        cout<<"not palindrom";
}
int main()
{
    vector<int> nums={1,4,5,4,1};
    palindrom(nums);
}