#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int a, b;
    while (true)
    {
        std::cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        std::cout << a + b << '\n';
    }
}
