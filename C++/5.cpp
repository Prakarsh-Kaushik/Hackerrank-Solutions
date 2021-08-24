///Hackerrank C++
//Using Functions. Find Largest if four

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
 int max_of_four(int a, int b, int c, int d)
 {
    int largest;
    if(a>b && a>c && a>d)
        {
            largest = a;
        }
    else if(a<b && b>c && b>d)
        {
            largest = b;
        }
    else if(a<c && c>b && c>d)
        {
            largest = c;
        }
    else if(a<d && d>c && d>b)
        {
            largest = d;
        }    
        return largest;
 }
 
 

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}