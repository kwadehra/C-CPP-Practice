#include <bits/stdc++.h>
#ifndef CLION_RECURSION_H
#define CLION_RECURSION_H
class recursionPractice
{
public:
    int factorial(int n)
    {
        if(n==0 || n==1)
            return 1;
        return n*factorial(n-1);
    }
    int iterativeFactorial(int n)
    {
        int fac{1};
        for(int i=n;i>0;i--)
            fac*=i;
        return fac;
    }
};
#endif //CLION_RECURSION_H
