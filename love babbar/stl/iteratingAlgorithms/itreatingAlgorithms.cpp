#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*• std::for_each: Applies a function to each element in a range. std::find: Searches for a specific element in a 
range. 
• std::find_if: Searches for the first element that satisfies a given predicate. 
• std::count: Counts the occurrences of a value in a range. 
• std::count_if: Counts the elements that satisfy a given predicate. 
• std::sort: Sorts the elements in a range in ascending order. 
• std::reverse: Reverses the order of elements in a range. 
• std::rotate: Rotates elements in a range. 
• std::unique: Removes duplicate elements from a sorted range. 
• std::partition: Divides elements in a range into two groups based on a p*/
void printDouble(int a){
        cout<<2*a; 
    }
bool checkEven(int a){
    return a%2==0;
}

int main(){   
    vector<int>vt;
    vt.push_back(11);    
    vt.push_back(20);    
    vt.push_back(11);    
    vt.push_back(40); 
    vt.push_back(40); 

    // for_each(vt.begin(),vt.end(),printDouble);    

    //find() used to search fo rthe trarget,retuns a iterator i ffound that data or 0 not found
    // int target=20;
    // auto it=find(vt.begin(),vt.end(),target);
    // // cout<<* it<<endl;

    // find_if() used to iterate over given ramnge and based on the predicate 
//     auto it1=find_if(vt.begin(),vt.end(),checkEven);
//     cout<<*it1<<endl;

    //count() : checks no of times given target happend in the function
    // int target=20;
    // int ans=count(vt.begin(),vt.end(),target);
    // cout<<ans<<endl;

    // count_if(): iterate over given range and check condition over eeach iteration
    // int ans=count_if(vt.begin(),vt.end(),checkEven);
    // cout<<ans;

    // sort(): sort the elements in ascending order
    // sort(vt.begin(),vt.end());
    // for(int a:vt){
    //     cout<<a<<" ";
    // }

    //reverse():
    // reverse(vt.begin(),vt.end());
    // for(int a: vt){
    //     cout<<a<<" ";
    // } 
    
    //rotate()
    // rotate(vt.begin(),vt.begin()+2,vt.end());
    // for(int a: vt){
    //     cout<<a<<" ";
    // }
    
    //unique(): removes alla the duplicate elements in the array 
    // auto it = unique(vt.begin(), vt.end());
    //it iterator k phle saaare unique element hai
    //it k baad saare duplicate element hai 
    // vt.erase(it, vt.end());
    // for(int a: vt) {
    //     cout << a << " ";
    // }


    //partition()
    // partition(start,end,predicaate);
    auto it=partition(vt.begin(),vt.end(),checkEven);
    cout<<*it<<endl;
    for( int i: vt){
        cout<<i<<" ";
    }




    
      }