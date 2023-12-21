#include <iostream>
#include <vector>

using namespace std;

const int MAX = 5e5 + 10;
const int MOD = 1e9 + 7;
using ll = long long;

vector<ll> fact(MAX + 1, 0), inv_fact(MAX + 1, 0);

ll bin_pow(ll a, ll b, ll mod)
{
    if (b == 0)
        return 1;

    if (b % 2)
    {
        return (a * bin_pow(a, b - 1, mod)) % mod;
    }
    else
    {
        ll temp = bin_pow(a, b / 2, mod);
        return (temp * temp) % mod;
    }
}

void factorials()
{
    fact[0] = 1;

    for (ll i = 1; i <= MAX; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    inv_fact[MAX] = bin_pow(fact[MAX], MOD - 2, MOD);

    for (ll i = MAX - 1; i >= 0; i--)
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
}

ll ncr(int n, int k)
{
    return (fact[n] * ((inv_fact[k] * inv_fact[n - k]) % MOD)) % MOD;
}

int main()
{
    int t;
    cin >> t;
    factorials();
    while (t--)
    {
        int a, b, n, k;
        cin >> a >> b;
        n = a + b;
        k = a;
        ll permutations = ncr(n, k);
        cout << permutations << endl;
    }
}
