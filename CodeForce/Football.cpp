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
    string position_players;
    cin>>position_players;
    char past_player = '\0';
    int count_followers = 0;
    for (int i = 0; i < position_players.size(); ++i) {
        if (i == 0 or past_player != position_players[i]) {
            past_player = position_players[i];
            count_followers = 0;
        }
        else count_followers++;
    }
    if (count_followers >= 7) cout<<"YES";
    else cout<<"NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
