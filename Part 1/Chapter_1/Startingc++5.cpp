#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
#define PB push_back
#define REP(i, a, b) for (int i = a; i <= b; i ++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a = 123456789;

    REP (i, 1, 10) {
        if (i == 8) {
            cout << "Passou por 8\n";
        }
    }
}

// Para diminuir o tempo para escrever, podemos abreviar com typedef e define.