00#include <iostream>
using namespace std;

void findfirstOccurence(int arr[],int start,int end, int &ans,int target){
    
    while (start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]<target){
            start=mid+1;
        }
        if(arr[mid]>target){
            end=mid-1; 
        }
    }
}



int main(){
    int arr[8]={2,1,1,1,2,3,4,5};
    int start=0;
    int end=6;
    int ans=-1;
    int target=1;
    findfirstOccurence(arr,start,end,ans,target);
    cout<<ans;
}