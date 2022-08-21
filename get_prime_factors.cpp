//Testing
#include <iostream>

void Get_Prime_Factors(int x, int factors[], int &size)
{   
    size = 0;
    int prime_factor = 2;
    while (x != 1)
    {
        if (x % prime_factor == 0)
        {
            factors[size++] = prime_factor;
            x = x / prime_factor;
        }
        else
        {
            prime_factor++;
        }
    }
}


int main()
{
    int size1 = 0;
    int factors[size1];
    Get_Prime_Factors(19,factors,size1);
    std::cout<<"The size is"<<size1<<"\n";
    std::cout<<"The prime factors are :";
    for (int i = 0; i< size1;i++)
    {
        std::cout<<factors[i]<<" ";
    }
    return 0;
}
