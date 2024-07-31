#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    //accumulate(start ,end, initial value of sum): returns the total sum of ALL elements in array
    vector<int>arr1;
    arr1.push_back(10);
    arr1.push_back(20);
    arr1.push_back(30);
    arr1.push_back(40);
    arr1.push_back(50);
    //accumulate(start ,end, initial value of sum): returns the total sum of ALL elements in array
    // int totalSum=accumulate(arr.begin(),arr.end(),0);   
    // cout<<totalSum;

    //inner_product(it start, it end, initial value) ;does each element  
    auto ans=inner_product(arr.begin(),arr.end(),arr1.begin(),0);
    cout<<ans<< endl;
    //partial_sum(): gives 1,2,,3,4 gives 1+2=3,1+2+3=6,1+2+3+4=10
    vector<int>ans1(arr.size());

    partial_sum(arr.begin(),arr.end(),ans1.begin());

    for(int a: ans1){
        cout<<a<<" ";

    }

    //iota()

    iota(arr.begin(),arr.end(),1000);
    for(int val:arr){
        cout<<val<<" ";
    }

    return 0;
}