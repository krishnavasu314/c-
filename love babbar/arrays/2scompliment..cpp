#include<iostream>
#include<vector>
using namespace std;

vector<int> twosCompliment(vector<int>&arr){    
    int n =arr.size();
    vector<int>twocompliment(n+1,0);
    for(int i=n -1;i>=0;i--){
        twocompliment[i]=arr[i]==1 ? 0 : 1;
    }
    int carry=1;
    for(int i=twocompliment.size()-1;i>=0;i--){        
        int sum=twocompliment[i]+carry;
        twocompliment[i]=sum%2;
        carry=sum/2;
    }
    if(carry==1){
        twocompliment[0]=carry;
    }
    return twocompliment;
}


int main(){
    vector<int>arr={0,0,0,0};
    vector<int>twocom=twosCompliment(arr);
    int size=twocom.size();
    for(int i=0;i<size;i++){
        cout<<twocom[i]<<" ";
    }
}
