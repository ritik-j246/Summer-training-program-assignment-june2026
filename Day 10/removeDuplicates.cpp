// program to remove duplicated form the array ....

#include<iostream>
#include<vector>
#include<set>
using namespace std; 
vector<int> removeduplicates( vector<int> &nums){
    set<int> s(nums.begin(),nums.end());
     nums.assign(s.begin(), s.end());
     return nums;
}
int main(){
    vector<int> vec = {1,2,3,4,2,3,4};
    cout<<"After removing duplicates => ";
    for(int res : removeduplicates(vec)) cout<< res<<" ";
    return 0 ; 

}