#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    for(int n = 1; n < 1000; n++)
        sum += (n%5 == 0)||(n%3 == 0)?n:0;

    cout << "total:" << sum << endl;
    return 0;
}

