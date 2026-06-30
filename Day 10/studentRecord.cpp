// program to show the student record using pair..

#include<iostream>
#include<utility>
#include<string>
using namespace std;
int main(){
    pair<string , int> student1 = {"ritik",238};
    pair<string , int> student2 = {"rahul",239};
    cout<<"Name of student 1 is "<<student1.first<<" and roll number is "<<student1.second<<endl;
    cout<<"Name of student 2 is "<<student2.first<<" and roll number is "<<student2.second<<endl;
    return 0;

}