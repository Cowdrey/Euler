#include <iostream>
#define N 1000
#define MaxNum  1000
int main()
{
    long squares[MaxNum];
    for(int i = 1; i< MaxNum; i++)
        squares[i] = i*i;
    for(int i = 1; i < MaxNum; i++)
        for(int j = 1; j < MaxNum; j++)
            for(int k = ((i>j)?i:j); k < MaxNum; k++)
            {
                if(squares[i] + squares[j] == squares[k])
                {
                    if((i + j + k) == 1000)
                    {
                        std::cout<< "Product: " << i*j*k << "\n";
                    }
                }
                if((i + j + k) > 1000)
                    break;
            }



}
