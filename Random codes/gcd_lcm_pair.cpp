///this is a code showing the 
///possible pairs of nummbers
///where smaller one is the gcd of two
///and the greater one is the lcm of two
//gcd+lcm == that number
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b);
long long lcm(long long a,long long b);
int main()
{
    int cnt;
    long long x,a,b;
    while(!cin.eof())
    {
        cin>>x;
        a=1,b=x-1,cnt=0;
        while(a<x&&b>0)
        {
            if((lcm(a,b)+gcd(a,b)==x)&&a<=x/2&&b>=x/2||a==1&&b==1)
            {
                cout<<a<<" "<<b<<endl;
                cnt++;
            }
            a++;
            b--;
            if(a==b) break;
        }cout<<"Possible Pairs: "<<cnt<<endl;
    }
    return 0;
}
long long gcd(long long a,long long b)
{
    return a==0?b:gcd(b%a,a);
}
long long lcm(long long a,long long b)
{
    return (a*b)/gcd(a,b);
}
/*
6

8

9

10

12

14

15

16

18

20

21

22

24

25

26

27

28

30

32

33
*/
