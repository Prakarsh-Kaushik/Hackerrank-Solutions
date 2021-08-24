//Function
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int greatest;
    if(a>b && a>c && a>d)
    {
        greatest=a;
    }
    if(b>a && b>c && b>d)
    {
        greatest=b;
    }
    if(c>b && c>d && c>a)
    {
        greatest=c;
    }
    if(d>b && d>c && a<d)
    {
        greatest=d;
    }
    return greatest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}