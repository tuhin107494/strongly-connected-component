/**    Tuhin ahmed                    **
*      Email:tuhin107494@gmail.com     *
*      university:comilla university  **
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;

#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree< pair<int,pair<int,int> > ,null_type,less< pair<int,pair<int,int> > >,rb_tree_tag,
        tree_order_statistics_node_update>ordered_set;
#define TT ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define       ll                   long long int
#define       ull                  unsigned long long int
#define       vi                   vector<int>
#define       vc                   vector<char>
#define       vs                   vector<string>
#define       vll                  vector<long long int>
#define       vp                   vector<  pair<int,int> >
#define       pb                   push_back
#define       pob                  pop_back
#define       pll                  pair<long long  int, long long int>
#define       F                    first
#define       S                    second
#define       sc(x)                scanf("%lld",&x)
#define       sci(x)                scanf("%d",&x)
#define       sc2(x,y)             scanf("%lld %lld",&x,&y)
#define       pf                   printf
#define       min3(a,b,c)          min(a,b<c?b:c)
#define       max3(a,b,c)          max(a,b>c?b:c)
#define       all(v)               v.begin(), v.end()
#define       rall(v)               v.rbegin(), v.rend()
///============ CONSTANT ===============///
#define mx18  1000000000000000000
#define mx9   1000000007
#define mx8   100000007
#define mx7   10000006
#define mx6   1000056
#define mx5   200005
#define mx4   10005
#define inf   1<<30
#define eps   1e-9
#define mod   mx9
ll dx[]= {1,0,-1,0};
ll dy[]= {0,1,0,-1};
long double PI = acosl(-1);
///=============== Debugging ============================///
#ifndef ONLINE_JUDGE
#define       debug(x) cout << #x << " = " << x << endl
#define       debug2(x, y)             cout << #x << ": " << x << "  " << #y << ": " << y << endl;
#define       debug3(x, y, z)          cout << #x << ": " << x << "  " << #y << ": " << y << "  " << #z << ": " << z << endl;
#define       debug4(a, b, c, d)       cout << #a << ": " << a << "  " << #b << ": " << b << "  " << #c << ": " << c << "  " << #d << ": " << d << endl;
#endif
///=====================Bitmask===================///
//ordered_set st/;
//int Set(int N,it pos){return N=N  (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
///========================================FUNCTION=========================================///
//bool check(int n){if(n==1) return false; for(int i=2; i*i<=n; i++){if(n%i==0) return false;} return true;}
//ll fact(ll n){if(n==0 or n==1)return 1; else return ((n%mod)*fact(n-1)%mod)mod;}
//ll big_mod(ll b,ll p,ll m ){ll res=1;while(p!=0){if(p&1)res=(res*b)%m;b=(b*b)%m;p=p>>1;}res=(res)%m;return res;}
//void seive(){for(ll i=2; i<mx6; i++){if(visit[i])continue;dv[i]=i;for(ll j=i*i; j<mx6; j+=i){dv[j]=i;visit[j]=true;}}}
//void build(int u,int b,int e){if(b==e){tr[u]=dif[b];return;}ll mid=(b+e)/2;build(2*u,b,mid);build(2*u+1,mid+1,e);tr[u]=gcd(tr[(2*u)],tr[(2*u)+1]);}
//ll quary(int u,int b,int e,int i,int j){if(e<i or b>j)return 0;else if(b>=i and e<=j){return tr[u];}int   mid=(b+e)/2;ll  left=quary(2*u,b,mid,i,j);ll right=quary((2*u)+1,mid+1,e,i,j);return  gcd(left,right);}
//void  update (int u,int b,int e,int i,int j,int x){if(e<i or b>j)return;else if(b>=i and e<=j){tr[u]=x;return;}int mid=(b+e)/2;update(2*u,b,mid,i,j,x);update((2*u)+1,mid+1,e,i,j,x);tr[u]=max(tr[2*u],tr[2*u +1]);}

//vector<ll> kmp_prefix_fun(string s){ll n=s.size();vector<ll>pi(n);for(ll i=1; i<n; i++){ll j=pi[i-1];while(j>0 and s[i]!=s[j])j=pi[j-1];if(s[i]==s[j])++j;pi[i]=j;}return pi;}
//void trie_add_string(string s){int cur=1;cnt[cur]++;for(int i=0; i<s.size(); i++){int  ch=s[i]-'a';if(!to[cur][ch])to[cur][ch]=++to_node;cur=to[cur][ch];cnt[cur]++;}track[cur]++;}
//int trie_quary(string s){int cur=1;for(int i=0; i<s.size(); i++){int ch=s[i]-'a';if(!to[cur][ch])return cnt[cur];cur=to[cur][ch];}return cnt[cur];}
//void sparse_table(){for(int i=1;i<=n;i++)table[i][0]=a[i];for(int k=1;k<20;k++){for(int i=1;i+(1<<k)-1<=n;i++){table[i][k]=min(table[i][k-1],table[i+(1<<(k-1))][k-1]);}}}36.5\   123456
//int sparse_quary(int l,int r){int len=r-l+1;int k=log2(len);return min(table[l][k],table[r-(1<<k)+1][k]);}
///====================================StartHere=================////////////

bitset<mx5>visited,check;
ll cs=0;
vector<ll>node,comp;
vector<ll>v[mx5],vv[mx5];
void dfs(ll u)
{
   visited[u]=1; 
   //cout<<u<<endl;
  
   for(int i=0;i<v[u].size();i++)
   { 

     if(visited[v[u][i]]==0)
     {
        dfs(v[u][i]);
     }

   }

   node.pb(u);

}


void dfs1(ll u)
{
   visited[u]=1;
   //cout<<u<<" ";
   for(int i=0;i<vv[u].size();i++)
   { 
     if(visited[vv[u][i]]==0)
     {
        dfs1(vv[u][i]);
     }

   }

   comp.pb(u);

}
void input()
{
    ll n,m,k,ans=0,lenth;

    cin>>n>>m;

    for(int i=0;i<m;i++)
    {  

        ll l,r;
        cin>>l>>r;
        if(l==r)continue;
        v[l].pb(r);
        vv[r].pb(l);

    }

    for(int i=1;i<=n;i++)
    {

        if(visited[i]==0)
        {
            dfs(i);
        }

    }

    for(int i=0;i<=n;i++)visited[i]=0;
        cout<<node[0]<<endl;

   reverse(all(node));

for(int i=0;i<node.size();i++)
{

    if(visited[node[i]]==0)
    {
       // cout<<node[i]<<endl;
         dfs1(node[i]);
        if(comp.size()==1 and v[node[i]].size())
        {
                ans++;
               //cout<<node[i]<<endl;
        }
     cout<<endl;
        comp.clear();
    }

}



    cout<<"Case "<<++cs<<": "<<ans<<endl;
    node.clear();
    comp.clear();


  for(int i=0;i<=n;i++)
  {
    visited[i]=0;
    v[i].clear();
    vv[i].clear();
  }


   

  
}

void ifdef()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif 
}
int main()
{
   TT;
   ifdef();

  // seive();
  
   int t=1;
   cin>>t;
    while(t--)
    {

        input();

    }
    return 0;
}
