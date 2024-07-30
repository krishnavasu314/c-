#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(1000);
    pq.push(50);

    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
    

}