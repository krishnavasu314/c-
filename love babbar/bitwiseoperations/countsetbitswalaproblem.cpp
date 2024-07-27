#include<iostream>
using namespace std;
 
int main(){
    int number=10;
   
    int setbitCount=0;
    while(number!=0){
        int lastbit=number&1;
        if (lastbit==1){
            setbitCount++;
        }
        number=number>>1;
    }
cout<<setbitCount;

}
