#include<stdio.h>
int main(){

    //E. Count
char s[1000001];
scanf("%s",s);

int sz = strlen(s);
int sum = 0;
for(int i = 0; i<sz;i++){

    sum = sum + s[i]-'0';

}

printf("%d",sum);

return 0;
}
