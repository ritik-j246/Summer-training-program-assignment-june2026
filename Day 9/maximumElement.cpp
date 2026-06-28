// program to calculate the maximum element fo the vector.....

#include<iostream>
#include<vector>
using namespace std ;
int main(){
     int n ; 
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> vec(n);           
    cout<<"Enter the "<<n<<" values "<<endl;
    for(int i =0 ; i<n; i++){
        cin>>vec[i];
    }
    int max = vec[0];
    for(int res : vec){
        if(max < res) max = res; 
    }
    cout<<"The maximum element is "<<max;
    return 0; 
}
