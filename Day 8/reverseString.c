// program to reverse a string using recurssive method...

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverse( char ch[], int st, int end  ){
    if(st >=end) return ; 
        char temp = ch[st];
        ch[st] = ch[end];
        ch[end] = temp;

        return reverse(ch, st+1,end-1);
}
int main(){
    char ch[100];
    char temp[100];

    printf("Enter a string : ");
    fgets(ch,sizeof(ch),stdin);
    strcpy(temp,ch);
    printf("Before reverse your string is -> \n %s",ch);
    reverse(temp, 0, strlen(ch)-1);
    printf("After reverse your string is -> \n %s",temp);
    
   return 0 ; 
}