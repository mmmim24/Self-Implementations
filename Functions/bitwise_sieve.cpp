/// bitwise sieve/yarin's sieve/memory efficient sieve
#include<bits/stdc++.h>
#define sz 100000000
using namespace std;
int num[sz/64+2],prime[sz/100];
long long sum ,c = 0;
#define status(i) (num[i>>6] & (1<<((i&63)/2)))
#define marks(i) (num[i>>6] |= (1<<((i&63)/2)))
void bitwise_sieve()
{
    prime[c] = 2;
    for(int i = 3;i*i<= 65536; i += 2)
    {
        if(!status(i))
        {
            prime[++c] = i;
            {
                for(int j = i*i;j<=65536;j+=i+i)
                {
                    marks(j);
                }
            }
        }
    }
}
bool isPrime(int n)
{
    return n>1 &&(n==2||((n&1) && !status(n)));
}
int main()
{
    bitwise_sieve();
    int n;
    cin>>n;
    cout<<isPrime(n);
    return 0;
}
