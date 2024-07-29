
#include<iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main(){
    //*creation of maps : 3 types maps, niothing but tables created like index page of our text book wih 
    //2 columns page nuber and topic 

    // create table map using unordered_map 
    unordered_map<int,string> mydata;

    // to create entries we use inserting ways 
    //1.indexing []
    mydata[1]="love bayya";
    mydata[2]="laskay bayya";
    mydata[3]="alekhya papa";

    //2 may to inserting data 
    mydata.insert(make_pair(4,"ammu papa"));
    mydata.insert(make_pair(4,"chechu papa"));

    //3 way of inserting data
    pair<int,string>p;
    p.first=5;
    p.second="chini papa";
    mydata.insert(p);

    pair<int,string>p2;
    p2.first= 6;
    p2.second="alekhya";
    mydata.insert(p2);

    // iteration can be posible in maps
    pair<int,string>p1;
    p1.first=7;
    p1.second="bujjulu";
    mydata.insert(p1);
    
    //iterate over the table entries

    unordered_map<int,string>::iterator it=mydata.begin();
    while(it!=mydata.end()){
        pair<int,string>p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }

    
    return 0;

}