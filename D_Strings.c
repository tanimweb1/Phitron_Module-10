#include<stdio.h>
#include<string.h>
int main(){

    // D. Strings
char a[11];
scanf("%s",a);
char b[11];
scanf("%s",b);

int sa = strlen(a);
int sb = strlen(b);

printf("%d %d\n", sa,sb);
printf("%s%s\n", a,b);

char temp = a[0];

a[0] = b[0];
b[0] = temp;
printf("%s %s", a,b);







return 0;
}