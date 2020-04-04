#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define pf printf
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define sz(v) ((int)(v).size())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REPE(i,n) FORE(i,0,n)
#define REPSZ(i,v) REP(i,SZ(v))
#define pll pair <ll, ll>

ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }

const int MAXN = 200000;
ll n,k;
ll arr[202];
ll flag [202];

void print(vector <ll> &v){cout << v.size() << endl;for(int i = 0; i < v.size(); i++){pf("%lld ", v[i]);}pf("\n");}
void print(vector <pll> &v){ cout << v.size() << endl; for(int i = 0; i < v.size(); i++){pf("%lld %lld\n", v[i].first, v[i].second);}}
void print(set<ll> s){set <ll> :: iterator itr;for (itr = s.begin(); itr != s.end(); ++itr){cout << *itr << " ";}cout << endl;}
void print(double d){cout << fixed << setprecision(10) << d << endl;}

void from_file(void){ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}

/* ------------------main section-------------! */

ll solve() {
    ll ans = 0;

    return ans;
}

void run() {
    fastio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        ll cnt = 0;
        REP(i,n)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        REP(i,n+k+1)
        {
            flag[i] = 0;
        }
        REP(i,n+k+1)
        {
            REP(j,n)
            {
                if(arr[j] == i+1)
                {
                    flag[i] = 1;
                    break;
                }
            }
        }
        ll m = k;
        while(m--)
        {
                REP(i,n+k+1)
                {
                    if(flag[i] == 0)
                    {
                        flag[i] = 1;
                        break;
                    }
                }
                //cout << m << endl;
        }
        REP(i,n+k+1)
        {
            if(flag[i] == 0)
            {
                cnt = i;
                break;
            }
        }
        cout << cnt << endl;
    }

}


int main() {
	run();
	return 0;
}

