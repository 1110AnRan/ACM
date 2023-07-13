//A-1
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//#define N 500001
//ll arr1[N], arr2[N];
//ll cnt;
//void merge_sort(ll begin, ll end)
//{
//    if (end > begin)
//    {
//        ll mid = (begin + end) / 2;
//        merge_sort(begin, mid);
//        merge_sort(mid + 1, end);
//        ll i = begin;
//        ll p = begin, q = mid + 1;
//        while (p <= mid || q <= end)
//        {
//            if (q > end || (p <= mid && arr1[p] <= arr1[q]))
//            {
//                arr2[i++] = arr1[p++];
//            }
//            else
//            {
//                arr2[i++] = arr1[q++];
//                cnt += mid - p + 1;
//            }
//        }
//        for (i = begin; i <= end; i++)
//        {
//            arr1[i] = arr2[i];
//        }
//    }
//}
//int main()
//{
//    cin.tie(0);
//    cout.tie(0);
//    ll n;
//    cin >> n;
//    for (ll i = 1; i <= n; i++)
//    {
//        cin >> arr1[i];
//    }
//    cnt = 0;
//    merge_sort(1, n);
//    cout << cnt << endl;
//    return 0;
//}




//D-5
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) ((x)&(-x)) 
//typedef long long ll;
//const ll maxn = 500005;
//ll tree[maxn];
//ll nums[maxn];
//ll n, m;
//void update(ll x, ll d)
//{
//	while (x <= n)
//	{
//		tree[x] += d;
//		x += lowbit(x);
//	}
//}
//ll getsum(ll x)
//{
//	ll sum = 0;
//	while (x > 0)
//	{
//		sum += tree[x];
//		x -= lowbit(x);
//	}
//	return sum;
//}
//int main()
//{
//	cin >> n >> m;
//	ll i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		update(i, nums[i] - nums[i - 1]);
//	}
//	for (i = 1; i <= m; i++)
//	{
//		ll z;
//		cin >> z;
//		if (z == 1)
//		{
//			ll x, y, k;
//			cin >> x >> y >> k;
//			update(x, k);
//			update(y + 1, -k);
//		}
//		else
//		{
//			ll x;
//			cin >> x;
//			cout << getsum(x) << endl;
//		}
//	}
//	return 0;
//}

//E-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 100005;
//ll n, m, sum = 0, nums[2][MAXN];
//int main()
//{
//	cin >> n >> m;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[0][i];
//	}
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[1][i];
//	}	
//	ll l = 1;
//	while (l <= n - 2)
//	{
//		ll r = l + 2;
//		while (r <= n)
//		{
//			if (!(nums[1][l] ^ nums[1][r]) && (r-l) % 2 == 0)
//			{
//				sum += ((nums[0][l] + nums[0][r]) * (r + l));
//			}
//			r++;
//		}
//		l++;
//	}
//	cout << sum%10007 << endl;
//	return 0;
//}

//F-7
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 105;
//int main()
//{
//	int n, m, nums[N][N];
//	cin >> n >> m;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			cin >> nums[i][j];
//		}
//	}
//	int ans = 0, dp[N][N];
//	memset(dp, 0, sizeof(dp));
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			if (nums[i][j] == 1)
//			{
//				dp[i][j] = 1;
//				if (i >= 2 && j >= 2)
//				{
//					dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
//				}
//				ans = max(ans, dp[i][j]);
//			}
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}

//G-8
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) ((x)&(-x))
//typedef long long ll;
//const ll MAXN = 500005;
//ll n, m, nums[MAXN], tree[MAXN];
//void update(ll x,ll d)
//{
//	for (ll i = x; i <= n; i+=lowbit(i))
//	{
//		tree[i] += d;
//	}
//}
//
//ll query(ll l, ll r)
//{
//	ll sum = 0;
//	for (ll i = l - 1; i; i -= lowbit(i))
//	{
//		sum -= tree[i];
//	}
//	for (ll i = r; i; i -= lowbit(i))
//	{
//		sum += tree[i];
//	}
//	return sum;
//}
//int main()
//{
//	
//	cin >> n >> m;
//	ll i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		update(i, nums[i]);
//	}
//	for (i = 1; i <= m; i++)
//	{
//		ll x, y, z;
//		cin >> z;
//		if (z == 1)
//		{
//			cin >> x >> y;
//			update(x, y);
//		}
//		else
//		{
//			cin >> x >> y;
//			cout << query(x, y) << endl;
//		}
//	}
//	return 0;
//}

//I-10
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 200005;
//ll n, c, nums[MAXN];
//map<ll, ll> mp;
//int main()
//{
//	cin >> n >> c;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		mp[nums[i]]++;
//		nums[i] -= c;
//	}
//	ll cnt = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cnt += mp[nums[i]];
//	}
//	cout << cnt << endl;
//	return 0;
//}