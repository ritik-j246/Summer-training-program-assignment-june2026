// program to count the unique elements in the array......

#include<iostream>
#include<set>
#include<vector>
using namespace std; 
int uniqueelement(const vector<int> &vec){
    set<int> s(vec.begin() , vec.end());
    return s.size();
}
int main(){
    vector<int> nums = {1,2,3,4,5,2,34,5,2,1};
    cout<<"There are "<<uniqueelement(nums)<<" unique element present in the given vector";
    return 0 ; 
}