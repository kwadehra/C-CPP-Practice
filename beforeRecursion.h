//
// Created by kwadehra on 8/1/2017.
//
#include<bits/stdc++.h>
using namespace std;
#ifndef CLION_BEFORERECURSION_H
#define CLION_BEFORERECURSION_H
class questions
{
public:
    void printArray(int *a,int n)
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<"  ";
    }
    int returnMin(int *a,int n)
    {
        int min = a[0];
        for(int i=0;i!=n;i++)
        {
            if(a[i]<min)
                min = a[i];
        }
        cout<<"Minimum element is "<<min;
        return min;
    }
    int gcd(int a,int b)
    {
        if(b==0)
            return a;
        gcd(b,a%b);
    }
    void juggle(int *a,int d,int n)
    {
        int temp1,temp2,temp3;
        for(int i=0;i!=gcd(d,n);i++)
        {
            temp1 = a[i];
            temp2 = i;
            while(true)
            {
                temp3 = temp2+d;
                if(temp3>=n)
                {
                    temp3-=n;
                }
                if(temp3==i)
                {
                    break;
                }
                a[temp2] = a[temp3];
                temp2 = temp3;

            }
            a[temp2] = temp1;
        }


    }
    void sortedandRotated(int *arr,int n)
    {

    }
};
#endif //CLION_BEFORERECURSION_H
