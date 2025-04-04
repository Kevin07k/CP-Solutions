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
    int number_case = 0, sum_x_total = 0, sum_y_total = 0, sum_z_total = 0;
    cin >> number_case;
    for (int i = 0; i < number_case; ++i) {
        int x = 0, y = 0, z = 0;
        cin>>x>>y>>z;
        sum_z_total += z;
        sum_y_total += y;
        sum_x_total += x;
    }
    if (sum_x_total == 0 and sum_y_total == 0 and sum_z_total == 0) cout<<"YES";
    else cout<<"NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
