#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void singleNum(vector<int>&nums){
    unordered_map<int,int>freqMap;
    for(int i=0;i<nums.size();i++){
        int num=nums[i];
        freqMap[num]=freqMap[num]+1;

    }
    unordered_map <int,int>::iterator it;
    for(it=freqMap.begin();it!=freqMap.end();it++){
        int key=it->first;
        int value=it->second;
        if (value==1){
            cout<<key<<endl;
            break;
        }
    }
}

int main(){
    vector<int>nums={1,1,1,2,3,4,6,7,8,9};
    singleNum(nums);

}