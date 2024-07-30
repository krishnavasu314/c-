#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(40);

    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // vector<int>::iterator it=v.begin();
    // while(it!=v.end()){
    //     cout<<* it<<endl;
    //     it++;
    // }

    // cout<<*(v.begin());

    //empty()
    // cout<<v.empty();
    // if(v.empty()==true){
    //     cout<<"vector is empty"<<endl;

    // }
    // else{
    //     cout<<"vector is not empty"<<endl;
    // }

    //capacity() : uused to check the capacity of a vector
    // cout<<v.capacity();

    //reserve(int size): to reserve some extent of size to a vector we use reserve function
    // v.reserve(410);

    // cout<<v.capacity();

    //front():- to access the first element of vector we use the front() method
    // cout<<v.front();

    // back():- to access the last element of vector we use the back() method
    // cout<<v.back();

    //at()
    // cout<<v.at(4);

    //push_back() to add elements or data from back of the vector we use push_back() method
    vector <int>papa;
    papa.push_back(10);//10
    papa.push_back(20);//10 20
    papa.push_back(30);//10 20 30 
    papa.push_back(40);//10 20 30 40
    cout<< papa.size()<<" "<< papa.capacity()<<endl;
    //pop_back() 
    // papa.pop_back();//10 20 30 
    // papa.pop_back();//10 20 
    // papa.pop_back();//10
    // papa.pop_back();//
    // cout<< papa.size()<<" "<< papa.capacity()<<endl;
    
    // insert(position,value)

    // papa.insert(papa.end(),100);//

    // erase
    // papa.erase(papa.begin(),papa.end());

    
    // for( int i :papa){
    //     cout<<i<<" ";
    // }
    

}