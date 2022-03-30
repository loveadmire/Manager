#ifndef MY_TEST_H_
#define MY_TEST_H_

enum BUILD_TYPE
{
    BUILD_NOW,
    BUILD_LATER,
    BUILD_NEVER,
    BUILD_TYPE
};

void myswap(int &a, int &b);
int myadd(int a, int b);

#endif // MY_TEST_H_