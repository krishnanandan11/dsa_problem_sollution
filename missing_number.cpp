#include<iostream>
#include<vector>
using namespace std;
void missingvalues(vector<int>& nums){
    int n =nums.size()+1;
    int sumnumber=n*(n+1)/2;
    int vectorsum=0;
    for(int i=0;i<nums.size();i++){
        vectorsum+=nums[i];
    }
    int value=sumnumber-vectorsum;
    cout<<value;

}
int main(){
    vector<int> nums={1,2,4,5,6};
    missingvalues(nums);
}