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
    int n_stone = 0, cont_repeated_stone = 0;
    string s_stones = "";
    char past_stone = '\0';
    cin >> n_stone;
    cin >> s_stones;

    for (auto stone: s_stones) {
        if (past_stone == '\0' or past_stone != stone) past_stone = stone;
        else if (past_stone == stone) cont_repeated_stone++;
    }
    cout<<cont_repeated_stone;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
