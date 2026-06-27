#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
void cleanstr(char ch1[] ){
    int j = 0 ;
    for(int i =0 ; i < strlen(ch1); i++){
        if(ch1[i] != ' ' && ch1[i] != '\t'){
            ch1[j] = toupper((unsigned char)ch1[i]);
            j++;
        }
    }
    ch1[j] = '\0';
}
void sorting(char ch1[]){
    cleanstr(ch1);
    for(int i = 0 ; i< strlen(ch1); i++ ){
        for(int j = i+1 ; j< strlen(ch1); j++){
            if(ch1[i]>ch1[j]){
                char temp = ch1[i];
                ch1[i] = ch1[j];
                ch1[j] = temp;
            }
        }
    }
}
bool is_anagram(char ch1[] , char ch2[]){
    sorting(ch1);
    sorting(ch2);

    if(strlen(ch1) != strlen(ch2)) return false;
    for(int i =0 ; i<strlen(ch1); i++){
        if(ch1[i] != ch2[i]) return false;
    }
    return true; 
}
int main(){
    char ch1[] = "ram";
    char ch2[] =  " mar";
    if(is_anagram(ch1 , ch2)) printf("%s and %s are anagram of each other",ch1,ch2);
    else
    printf("%s and %s are not anagram of each other",ch1,ch2);
    
return 0 ; 
   
}