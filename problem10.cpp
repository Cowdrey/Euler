#include <iostream>
#define N 2000001

int main()
{
    bool primes[N] = {false}; //making them all false is easier, so false means true haha
    long long sum = 0;
    long long i = 1;
    while (i < N)
    {
        i++;
        if(primes[i]==true)
            continue;
        for(int j = i+i;j<N;j+=i)
            primes[j]=true;
        sum += i;
    }
    std::cout<<"Sum: " << sum << "\n";
}
