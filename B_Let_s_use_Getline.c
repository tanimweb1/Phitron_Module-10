#include<stdio.h>
int main(){

//B. Let's use Getline
    

char s[1000001];
fgets(s,1000001,stdin);

for(int i = 0;s[i]!='\\';i++){
    printf("%c",s[i]);
}

return 0;
}