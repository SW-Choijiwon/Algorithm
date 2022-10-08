#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >>n;
    vector<int> v;

    while (n--) {
        int num; cin >> num;
        v.push_back(num);
    }

    bool flag = is_sorted(v.begin(), v.end());

    if(flag) cout << -1;
    else {
        prev_permutation(v.begin(), v.end());
        for(auto e : v) cout << e << " ";
    }

    cout << '\n';

    return 0;
}