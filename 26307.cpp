#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int h, m; cin >> h >> m;

    cout << (h - 9) * 60 + m << '\n'; 
    
    return 0;
}