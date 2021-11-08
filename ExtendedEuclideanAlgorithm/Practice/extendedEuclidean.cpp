#include <iostream>
#include <unordered_map>

int extendedEuclideanUtility(int a, int b, int &x, int &y)
{
    // base case
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extendedEuclideanUtility(b, a % b, x1, y1);
    x = y1;
    y = x1 - (y1 * (a / b));
    return d;
}

std::unordered_map<std::string, int> extendedEuclidean(int a, int b)
{
    std::unordered_map<std::string, int> result;
    // both x and y will be 0 initially
    int x, y;
    result["gcd"] = extendedEuclideanUtility(a, b, x, y);
    result["x"] = x;
    result["y"] = y;
    return result;
}

int main()
{
    int a, b;
    while (true)
    {
        std::cout << "Please enter a for gcd(a, b): ";
        std::cin >> a;
        std::cout << "Please enter b for gcd(a, b): ";
        std::cin >> b;
        std::unordered_map<std::string, int> result = extendedEuclidean(a, b);
        std::cout << "gcd: " << result["gcd"] << "\nx: " << result["x"] << "\ny: " << result["y"] << '\n';
    }
}