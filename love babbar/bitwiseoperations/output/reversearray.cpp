#include<iostream>
#include <vector>
using namespace std;

    
    
void reversearray(vector<int>&nums,int l,int h){
    while(l<h){
        // nums[l]=nums[h];
        // nums[h]=nums[l];
        // l++;
        // h--;
        swap(nums[l],nums[h]);
        l++;
        h--;

    }
    };
int main(){
    vector<int>nums={1,2,4,5,6,8};
    int n=nums.size()-1;
    for(int i=0;i<=n;i++){
        cout<<nums[i]<<" ";
    }
    reversearray(nums,0,n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}