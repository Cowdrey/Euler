#include <iostream>

int main()
{
    int sumOfSq = 0;
    int sqOfSum = 0;
    int n = 100;
    for(int i = 0; i <= n; i++)
    {
        sumOfSq += (i * i);
        sqOfSum += i;
    }
    sqOfSum *= sqOfSum;
    std::cout<<"Difference: " << sqOfSum - sumOfSq << "\n";
}
