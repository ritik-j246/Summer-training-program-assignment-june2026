// progrma to print the unique elements of array .....
#include<iostream>
#include<set>
#include<vector>
using namespace std; 
void uniqueelement(const vector<int> &vec){
    set<int> s(vec.begin() , vec.end());
    for(int res : s){
        cout<< res <<" ";
    }
}
int main(){
    vector<int> nums = {1,4,5,3,4,56,3,2,7 };
    uniqueelement(nums);
    return 0; 
}