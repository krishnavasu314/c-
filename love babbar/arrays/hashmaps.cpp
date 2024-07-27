#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int>desk_map;
    desk_map[1]=53;
    desk_map[2]=52;
    desk_map[2]=52;
    desk_map[2]=52;
    desk_map[3]=52;
    // for(auto it:desk_map){
    //     int key=it.first;
    //     int value=it.second;
    //     cout<<key<<" "<< value<<endl;

    // }
    // ANOTHER WATY OF REPRESENTING ITERATOR
    unordered_map<int,int>::iterator it;
    for (it=desk_map.begin();it!=desk_map.end();it++){
        int key=it->first;
        int value=it->second;
        cout<<key<<" "<<value<<endl;
    }


    //FIND OF ENTRIEES
    if (desk_map.find(2)!=desk_map.end()){
        // found then
        int value=desk_map[2];
        cout<<"Found" <<value<<endl;\
    }
    else{
        //not found 
        cout<<"not fouund "<<endl;
        
    }

}