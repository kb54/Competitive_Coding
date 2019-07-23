#include <bits/stdc++.h>
#define ll long long
#define f0(i,a) for(ll k=i;k<a;++k)
#define f1(i,a) for(ll k=i;k<=a;++k)
#define F0(i,a) for(ll k=i;k>a;--k)
#define F1(i,a) for(ll k=i;k>=a;--k)
#define ff first
#define ss second
#define ve vector
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
ll sliding_window(vector<int> &arr,int K,int N)
{
    ll mx_sum=0;
    for(int i=0;i<K;++i)
        mx_sum+=arr[i];
    ll window_Sum=mx_sum;
   for(int i=K;i<N;++i)
        {
            window_Sum+=(arr[i]-arr[i-K]);
            mx_sum=max(window_Sum,mx_sum);
        }
    return mx_sum;
}
int32_t main()
{
    ll N,K;
    cin >> N >> K;
    vector<int> arr;
    int no;
    f0(0,N)
    {
        cin >> no;
        arr.push_back(no);
    }
    cout << sliding_window(arr,K,N) << endl;
}
