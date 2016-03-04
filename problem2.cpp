#include <iostream>

using namespace std;


int main()
{

    int i = 0;
    int j = 1;
    int n = 4000000;
    int sum = 0;
    while(j < n)
    {
        sum += (j%2 == 0)?j:0;
        int k = i + j;
        i = j;
        j = k;
    }
    std::cout<<sum<<"\n";
}

