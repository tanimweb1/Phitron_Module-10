#include<stdio.h>
#include<string.h>

int main(){

    //G. Conversion
char s[100001];
gets(s);
int length = strlen(s);
for(int i = 0;i<length;i++)
{

if(s[i]==','){
    s[i] = ' ';
}
if(s[i]>='A' && s[i]<='Z'){
    s[i] = s[i]+32;
}
else if(s[i]>='a' && s[i]<='z'){
    s[i] = s[i]-32;
}


}
printf("%s",s);

return 0;
}
