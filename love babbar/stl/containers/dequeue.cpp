#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> dq;
    

    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    //20 30 40 50
    for(int i:dq){
        cout<<i<<" ";
    }cout<<endl;
    dq.push_front(10);
    //10,20,30,40,50
    for(int i:dq){
        cout<<i<<" ";
    }cout<<endl;
    
    dq.insert(dq.begin()+3,100);
    for(int i:dq){
        cout<<i<<" ";

    }cout<<endl;

    deque<int> :: iterator it=dq.end()-1;
    while(it!=dq.begin()){
        cout<<*it<<" ";
        it--;
    }cout<<endl;
    // to delete all the datain deque
    dq.clear();
    cout<<dq.size();

    
    }
    