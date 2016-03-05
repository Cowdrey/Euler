#include <iostream>

using namespace std;

#define N 20

int main()
{
    //index represents primenumber, value represents number of primes needed.
    int prime[N+1] = {0};//nonprime indices will be unused

    //find minumum needed number of prime factors
    for(int j = 2; j <= N; j++)
    {
        int n = j;
        int i = 2;
        int currP = 0; //currentPrime
        int primeCount = 0;

        while(i <= n)
        {
            if(n%i == 0)
            {
                if(i == currP)//same prime
                {
                    primeCount++;
                }
                else //new prime
                {
                    prime[currP] = (prime[currP] > primeCount)? prime[currP]:primeCount; //take max
                    currP = i;
                    primeCount = 1;
                }

                n = n/i;
                i = 1;
            }
            i++;
        }
        prime[currP] = (prime[currP] > primeCount)? prime[currP]:primeCount;
    }
    int product = 1;
    //multiply all necessary primes together
    for(int i = 0; i<= N; i++)
        for(int j = 0; j< prime[i]; j++)
            product *= i;

    cout<<"Value: "<< product <<"\n";
}
