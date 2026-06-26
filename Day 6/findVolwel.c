// program to count the number of vowels in your name .....
#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    int count = 0 ;
    printf("Enter your first name : ");
    fgets(name , sizeof(name) , stdin);
    for(int i =0 ; name[i] !=  '\0' ;i++){
        int temp = 0;
        if(64 < name[i] <91){
        temp = name[i]+32;
        }
       if(name[i] == 'a'|| name[i] == 'e' || name[i] == 'i'|| name[i] == 'o'|| name[i] == 'u') count ++ ; 
        else{
        if(temp == 'a'|| temp == 'e' || temp == 'i'|| temp  == 'o'|| temp == 'u') count ++ ; 
    }
}
printf("Their are total %d vowels in your name. ",count);
 return 0 ; 
}