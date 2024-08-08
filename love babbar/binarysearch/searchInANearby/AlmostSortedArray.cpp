#include <iostream>
using namespace std;

bool searchInAlmostSorted(int arr[],int target,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target||arr[mid+1]==target|| arr[mid-1]==target){
            return true;
        }
        if (target>arr[mid]){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return false;
}


int main(){
    int arr[]={20,10,40,30,40};
    int target=20;
    int size=5;
    bool ans=searchInAlmostSorted(arr,target,size);
    if(ans==true){
        cout<<"target there"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
} 