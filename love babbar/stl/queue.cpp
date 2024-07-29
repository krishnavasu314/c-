#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(20);
    q.push(40);
    // in queue we have no begin() or end() functions 

    // in queue thrre is no iteator 
    // for(int a: q){
    //     cout<<a<< " ";
    //         }

    cout<<q.size();

    cout<<q.front(); 
    cout<< q.back();
    return 0;
}