#include <iostream>

int main()
{
    int a;

    std::cin >> a;
    auto b = 15 % 3;
    int i {2};
    while (true) {
        if (a % i == 0)
            break;
        ++i;
    }

    std::cout << i;
}