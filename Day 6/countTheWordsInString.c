// program to count the words in a string ......
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char name[20];
    int count = 0 ;
    bool is_word = false;
    printf("Enter a sentence : ");
    fgets(name , sizeof(name) , stdin);
    name[strcspn(name,"\n")] = '\0';
    for(int i =0 ; i< strlen(name) ;i++){
        if(name[i] == ' '|| name[i] == '\t'){
            is_word = false;
        }else if (is_word != true)
        {
            is_word = true;
            count++;
        }
}
printf("The total words in a sentence are %d",count);
 return 0 ; 
}