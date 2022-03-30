#include <stdio.h>
#include <iostream>
#include "../inc/mytest.h"
#include "../inc/basetype.h"

using namespace std;

int main()
{
    u32 i = 32;

    printf("hello world\n");
    cout << i << endl;
    int a = 32;
    int b = 23;
    printf("a is %d, b is %d\n", a, b);
    myswap(a, b);
    printf("a is %d, b is %d\n", a, b);
    return 0;
}
