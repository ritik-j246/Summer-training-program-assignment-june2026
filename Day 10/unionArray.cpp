// program to calculate the union of array ......

#include<iostream>
#include<set>
#include<vector>
using namespace std; 
void unionofarr(const vector<int>arr1 ,const vector<int>arr2){
    set<int> s;
    for(int res : arr1){
        s.insert(res);
    }
    for(int res : arr2){
        s.insert(res);
    }
    cout<<"The union of arr1 and arr2 is =>"<<endl;
    for(int res : s)cout<<res << " ";
}
int main(){
    vector<int>vec1 = {1,3,4,5,6,3};
    vector<int>vec2 = {1,5,6,7,88,4};
    unionofarr(vec1 , vec2 );
    return 0 ;
}
