#include <iostream>
#include <set>
using namespace std;

int main(){
    // creation of set
    set<int> st;
    
    // insertion of data in set
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(10);


    // to traverse through 
    // set<int>::iterator it=st.begin();
    // while(it!=st.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    //to delete data in the set 
    //st.erase(st.begin(),st.end());

    //count(integer) returns 1 or 0 either number exist or not
    // if(st.count(200)==0){
    //     cout<<"not found";
    // }
    // else{
    //     cout<<" found";
    // }
    // // empty()
    // if(st.empty()==true){
    //     cout<<"set is empty ";
    // }
    // else{
    //     cout<<"sset is not empty";

    // }
    //find(integer)-> returns the iterator to the given key or return last index

    // set<int> :: iterator it1=st.find(10);
    // if (it1==st.end()){
    //     cout<<*it<<" element not not there";
    // }
    // else{
    //     cout<<*it;
    // }

    // to delte all the data in set clear() is used
    // st.clear(); 
    set<int>:: iterator it=st.begin();
   while(it!=st.end()){
    cout<<*it<<" ";
    it++;

   }
}