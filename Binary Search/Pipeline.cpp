#include <bits/stdc++.h>
using namespace std;

// Shortened types
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

// Constants
constexpr int MOD = 1e9 + 7;
constexpr int INF = 1e9;
constexpr ll LLINF = 1e18;

// Utility functions
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define per(i, a, b) for (int i = (b); i-- > (a); )

// Input and Output
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Debugging
#define debug(x) cerr << #x << " = " << (x) << endl;

// Function to read multiple inputs
template<typename T>
void read(T& t) { cin >> t; }

template<typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

// Function to print multiple outputs
template<typename T>
void print(T t) { cout << t << '\n'; }

template<typename T, typename... Args>
void print(T t, Args... args) { cout << t << ' '; print(args...); }

void solve(){

    long long n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0;
        return;
    }
    long long biggest_sum = (k * (k - 1)) / 2 + 1;
    if (k >= n)
    {
        cout << 1;
        return;
    }
    if ((k * (k - 1)) / 2 + 1 < n)
    {
        cout << -1;
        return;
    }
    if (biggest_sum == n)
    {
        cout << k - 1;
        return;
    }

    ll start = 2;
    ll end = k;
    while (start < end)
    {
        ll counter = 0;
        ll mid = start + (end - start + 1) / 2;
        ll cum_sum = (k * (k - 1)) / 2 + 1;
        cum_sum = cum_sum - ((mid * (mid - 1)) / 2 + 1);
        if (cum_sum > n)
            start = mid;
        else if (cum_sum < n)
            end = mid - 1;
        else
            start++;
    }


    cout << k - start;
}
// Main function
int main() {
    fast_io();
    
    int t=1;
    // read(t);
    while(t--) {
        solve();
    }
    
    
    
    return 0;
}
