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
    int position_friend = 0, init_position = 0, cont_steps = 0;
    cin >> position_friend;
    while (init_position < position_friend) {
        init_position += 5;
        cont_steps++;
    }
    init_position -= 5;
    cont_steps--;
    short int res = position_friend - init_position;

    if (init_position == position_friend) cout << cont_steps;
    else cout << ++cont_steps;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
