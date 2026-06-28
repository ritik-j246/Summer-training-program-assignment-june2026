// program to calculate the minimum element fo the vector.....

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
    int min = vec[0];
    for(int res : vec){
        if(min > res) min = res; 
    }
    cout<<"The maximum element is "<<min;
    return 0; 
}
