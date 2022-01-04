#include <iostream>
int main()
{
    std::string a, b;
    std::cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
        std::cout << ((a[i] - 48) ^ (b[i] ^ 48));
    return 0;
}