#include<stdio.h>
#include<string.h>
int main(){

//     char s[101];
// scanf("%s",s);
// int count =0;
// for(int i =0;i<s[i]!='\0';i++){
//     count++;
// }
// printf("%d",count);

char s[50];
gets(s);
int sz = strlen(s);
printf("%d",sz);

return 0;
}