


#include <stdio.h>
#include <string>

bool isPrime(unsigned int input)
{
    unsigned int i = input-1;
    while (i > 1)
    {
        if(input % i == 0)
        {
            return 0;
        }
        --i;
    }
    return 1;
}

int main(int argc, char* argv[])
{
    unsigned int boundary = std::stoi(argv[1]);

    for (int i = 2; i < boundary; ++i)
    {
        printf("%d\t%d\n", i, isPrime(i));
    }
}
