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

int main(){
    void rintD(vector<int>& vtr){
        vector<int>::iterator it=vtr.begin();
        while(it!=vtr.end()){
            cout<<*it<<" ";
        }
        cout<<endl;
    }


    vector<int>vt;
    vt.push_back(10);    
    vt.push_back(20);    
    vt.push_back(30);    
    vt.push_back(40); 

    checkEven()      
}