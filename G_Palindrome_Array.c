#include<stdio.h>
int main(){

    //G. Palindrome Array
int n;
scanf("%d",&n);
int a[n];
for(int i = 0;i<n;i++){
    scanf("%d",&a[i]);
}
int count = 0;
for(int i = 0,j=n-1;i<j;i++,j--){
    if(a[i]!=a[j]){
     count ++;
     printf("NO\n");
     break;
    }
}

if(count ==0){
    printf("YES\n");
}
return 0;
}