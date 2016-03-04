#include <iostream>

using namespace std;


int main()
{
    long long n,i;
    n = 600851475143;
    i = 2;
    while(i < n)
    {
        if(n%i == 0)
        {
            n = n/i;
            i = 1;
        }
        i++;
    }
    //largest prime factor must be n
    std::cout<<n<<"\n";

}
