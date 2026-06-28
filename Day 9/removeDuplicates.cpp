// program to remove duplicates frome the array...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
    vector<int> vec= {1,6,6,9,9,2,2,3,4};
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    for(int res : vec){
        cout<<res<<" ";
    }
return 0 ; 
}