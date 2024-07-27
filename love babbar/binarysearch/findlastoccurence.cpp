#include<iostream>
using namespace std;

void findlastOccurence(int arr[],int start,int end,int target,int &ansindex){
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==target){
            ansindex=mid;
            start=mid+1;
        }
        if (arr[mid]<target){
            start=mid+1;
        }
        if (arr[mid]>target){
            end=mid-1;
        }
    }
}




int main(){
    int arr[10]={10,20,30,30,50,90,80,90,90,100};
    int start=0;
    int end=10-1;
    int target=30;
    int ansindex=-1;
    findlastOccurence(arr,start,end,target,ansindex);
    cout<<ansindex<<endl;
}