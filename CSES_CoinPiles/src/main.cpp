#include <iostream>
#include <string>

using namespace std;

bool solve(int a, int b) {
    if (0 == a && 0 == b)
        return true;

    if (0 == a * b)
        return false;

    auto x = 2 * a - b;
    auto y = 2 * b - a;

    if (x < 0 || y < 0)
        return false;

    return ((0 == x % 3) && (0 == y % 3));
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int a, b;
        cin >> a >> b;

        cout << (solve(a, b) ? "YES" : "NO") << '\n';
    }

    return 0;
}