#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Calcular mínimo
    int k = min({1, 2, 3});
    cout << k << "\n";

    // É útil que a quantidade de algarismos de x na base b é dado por floor(logb(x) + 1)
    int x = 123, b = 2;
    int alg_num = floor(log(x) / log(b) + 1);
    cout << alg_num << "\n";
}