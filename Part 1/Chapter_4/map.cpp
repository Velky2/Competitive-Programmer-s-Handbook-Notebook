#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    cout << m["monkey"] << "\n";
    cout << m["abacaxi"] << "\n";
    // Se usarmos uma chave que não existe, ela é criada com valor padrão. No caso int é 0.
    if (m.count("monkeytos")){
        cout << "Existe essa chave" << "\n";
    }
    for (auto x : m){
        cout << x.first << " and " << x.second << "\n"; 
    }
}