#include<stdio.h>
#include<string.h>
int main(){

    //F. Way Too Long Words
int n;
scanf("%d",&n);

while(n--){

    char s[101];
    scanf("%s",s);
int ln = strlen(s);

if(ln<=10){
    printf("%s",s);
}

if(ln>10){
    printf("%c",s[0]);
    printf("%d",ln-2);
    printf("%c",s[ln-1]);
}
printf("\n");





}
return 0;
}
