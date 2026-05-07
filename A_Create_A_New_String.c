#include <stdio.h>
#include <string.h>

int main()
{

    // A. Create A New String

    char s[1001];
    gets(s);

    char t[1001];
    gets(t);

    int sl = strlen(s);
    int tl = strlen(t);
    printf("%d %d\n", sl, tl);
    printf("%s %s",s,t);

    return 0;
}
