// program to store and print the values in vector.....

#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector<int> vec1 = {1,2,3,4,5}; // method 1 of input ...
    vector<int> vec2(5,0);          // method 2 of input ... size 5 and each index contain value 0 
    int n ; 
    cout<<"Enter the size of vector third : ";
    cin>>n;
    vector<int> vec3(n);            // method 3 of input ...
    cout<<"Enter the "<<n<<" values for vector third"<<endl;
    for(int i =0 ; i<n; i++){
        cin>>vec3[i];
    }
    cout<<endl<<"The values of first vector are ->"<<endl;
     for(int res : vec1){
        cout<<res<<" " ;
     }
     cout<<endl<<"The values of second vector are ->"<<endl;
     for(int res : vec2){
        cout<<res<<" " ;
     }
       cout<<endl<<"The values of third vector are ->"<<endl;
     for(int res : vec3){
        cout<<res<<" "  ;
     }

     return 0 ;

}