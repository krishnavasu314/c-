#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(21);
    arr.push_back(30);
    arr.push_back(50);
    int target=20;
    //binary_search(arr.begin(),arr.end(),target)
    // bool ans=binary_search(arr.begin(),arr.end(),target);
    // cout<<ans;

    //lower_bound(arr.begin(),arr.end(),target) it gives result befor e element of target in array if target not present
    // auto res=lower_bound(arr.begin(),arr.end(),target);
    
    // cout<< * res<<endl;
    
    
    auto res=upper_bound(arr.begin(),arr.end(),target);
    
    cout<< * res<<endl;





















    return 0;

}