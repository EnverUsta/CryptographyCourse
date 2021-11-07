#include <iostream>

int gcdEuclidean(int a, int b) 
{
    if (b == 0) return a;

    return gcdEuclidean(b, a % b);
}

int main()
{
    std::cout << gcdEuclidean(12, 8) << '\n';
    std::cout << gcdEuclidean(12, 9) << '\n';
}