#include <iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
    int start=0;
    int end=dividend;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(divisor*mid==dividend){
            return mid;
        }
        if(divisor*mid<dividend){
            ans=mid;
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main(){
    int divisor=10;
    int dividend=100;
    int ans=getQuotient(abs(divisor),abs(dividend));
    if(divisor<0||dividend<0){
        ans=0-ans;
        cout<<ans;
    }
    else{
        cout<<ans;
    }
}