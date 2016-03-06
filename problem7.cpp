#include <iostream>
#define N 1000000

int main()
{
    bool primes[N] = {false}; //making them all false is easier, so false means true haha
    int maxPrime = 10001;
    int currPrime = 0;
    int i = 1;
    while (i < N)
    {
        i++;
        if(primes[i]==true)
            continue;
        for(int j = i+i;j<N;j+=i)
            primes[j]=true;
        currPrime++;
        if(currPrime == maxPrime)
            break;
    }
    std::cout<<"Nth prime: " << i<< "\n";
}
