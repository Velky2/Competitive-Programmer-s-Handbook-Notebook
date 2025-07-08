#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double x = 0.3 * 3 + 0.1;
    printf("%.9f\n", x);
    printf("%.20f\n", x);
    if (abs(1 - x) < 1e-9) {
        cout << "É igual a 1";
    }
}

// Por causa dos erros de aproximação, se for de grande precisão de casas, é interessante comparar número usando um valor baixo.