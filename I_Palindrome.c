#include<stdio.h>
#include<string.h>

int main(){

    //I. Palindrome
char a[1001];
scanf("%s",a);
int ln = strlen(a);
int palin = 0;
for(int i = 0,j = ln -1; i<j;i++,j--){
    if(a[i]!=a[j]){
        palin = 1;
        printf("NO\n");
        break;
    }
}
if(palin==0){
    printf("YES\n");
}


return 0;
}
