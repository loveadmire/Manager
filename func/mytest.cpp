#include <stdio.h>
#include <iostream>

using namespace std;

void myswap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int myadd(int a, int b)
{
    return a + b;
}