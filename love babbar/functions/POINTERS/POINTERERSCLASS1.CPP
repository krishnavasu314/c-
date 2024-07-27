#include <iostream>
using namespace std;

int main(){
    int a=5;
    int* ptr=&a;
    int ans=sizeof(ptr);
    cout<<ans<<endl;

    char c='V';
    char* ptr2=&c;
    int ans1=sizeof(ptr2);
    cout<<ans1;
    
    long data=1010;
    long* ptr3=&data;
    int ans3=sizeof(ptr3);
    cout<<ans3;

    int* ptr4;
    cout<<*ptr4;

}