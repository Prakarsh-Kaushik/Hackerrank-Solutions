//Hackerrank C++
//Using pointer and functionn, find sum and absolute diff

#include<iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

                void fun(int *a , int *b) 
                {
                *a=*a+*b;
                *b= *a-(*b+*b);
                }

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    fun(int *a, int *b);
    printf("%d\n%d", a, b);

    return 0;
}