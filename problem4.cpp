#include <iostream>

using namespace std;


int nextLowestPalind(int val)
{
    int currPalin = val;
    int tens = (currPalin/10)%10;
    int hundreds = (currPalin/100)%10;
    if(hundreds!=0)
        currPalin-=1100;
    else
    {
        if(tens != 0)
            currPalin -=110;
        else
        {
            currPalin -=11;
        }
    }
    return currPalin;
}

int main()
{   //999 * 999 = 998001
    //assume answer is 6 digits
    int currPalin = 997799;
    int maxfactor = 999;
    int minfactor = 100;
    int x = maxfactor;

    while(currPalin > 99999)//if reaches 5 digits my assumption failed
    {
        if((currPalin/x) > maxfactor || x < minfactor)
        {
            currPalin = nextLowestPalind(currPalin);
            x = maxfactor;
        }
        else if(currPalin%x == 0)
        {
            cout<<x<<" * "<<currPalin/x<<" = "<< currPalin << "\n";
            return 0;
        }
        else
            x--;
    }
    cout<<"FAIL\n";

}
