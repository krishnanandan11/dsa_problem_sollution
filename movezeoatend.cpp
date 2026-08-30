#include<iostream>
#include<vector>
using namespace std;
vector<int> zeros(vector<int>& num){
    int j=0;
    for(int i=0;i<num.size();i++){
        if(num[i]!=0){
           swap(num[i],num[j]);
           j++;
        }
    }
    return num;
}
int main(){
    vector<int> num={1,3,4,0,5,0,6};
    vector<int> result=zeros(num);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}
