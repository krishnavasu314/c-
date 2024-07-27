#include<iostream>
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

void findlastOccurence(int arr[],int start,int end,int &ansindex,int target){
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
    int arr[12]={1,2,3,4,4,4,4,5,6,7,8,9};
    int ansindexfirstOccur=-1;
    int ansindexlastOccur=-1;
    int target=4;

    findfirstOccurence(arr,0,12,ansindexfirstOccur,target);
    findlastOccurence(arr,0,12,ansindexlastOccur,target);
    int totalOccurence=(ansindexlastOccur-ansindexfirstOccur)+1;
    cout<<totalOccurence<<endl;
}