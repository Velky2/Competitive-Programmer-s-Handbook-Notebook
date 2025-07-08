#include <bits/stdc++.h>
using namespace std;

// O módulo pode ser usado a cada operação, assim os números não crescem e fica mais rápido
// (a+b)%m = a%m + b%m
// (a*b)%m = a%m * b%m
// Veja como controlando isso fazemos resto de 101 para fatorial de 1 bilhão

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long x = 1, n = 1000000000;
    int m = 101;
    for (int i = 2; i <= n; i++){
        x = (x*i)%m;
    }
    cout << x%m << "\n";
}

// Se estivermos trabalhando com subtrações, o módulo pode ser negativo. Para isso usar: if (x < 0) x += m;