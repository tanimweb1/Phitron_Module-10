#include<stdio.h>

int main(){

    //copy 2 array elements in one 
int a;
scanf("%d",&a);
int array1[a];
for(int i = 0;i<a;i++){
    scanf("%d",&array1[i]);
}
int b;
scanf("%d",&b);
int array2[b];
for(int i = 0;i<b;i++){
    scanf("%d",&array2[i]);
}
int array3[a+b];
for(int i = 0;i<a;i++){
array3[i] = array1[i];
}
for (int i = 0;i<b;i++){
    array3[i+a] = array2[i];
}
for(int i = 0;i<a+b;i++){
    printf("%d ",array3[i]);
}


return 0;
}