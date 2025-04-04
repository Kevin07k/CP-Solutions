#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;

const int INF = 1e9;
const long long int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void solve() {
    long long int number_banana_need = 0, cost_first_banana = 0, my_money = 0;
    cin >> cost_first_banana >> my_money >> number_banana_need;
    long long int money_needed = 0;
    for (long long int i = 1; i <= number_banana_need; ++i) {
        money_needed += (cost_first_banana * i);
    }
    money_needed -= my_money;
    if (money_needed <= 0) cout<<0;
    else cout<<money_needed;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
