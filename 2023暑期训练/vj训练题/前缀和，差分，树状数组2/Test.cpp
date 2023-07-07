
//A-1
//#include <bits/stdc++.h>
//using namespace std;
//long long mod[100010] = { 0 }, add[100010] = { 0 };
//int main()
//{
//	int n, k, a;
//	long long cnt = 0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a;
//		mod[i] = (mod[i - 1] + a) % k;
//		add[mod[i]]++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cnt += add[i] * (add[i] - 1) / 2;
//	}
//	cout << cnt + add[0];
//	return 0;
//}


//B-2
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll n;
//	cin >> n;
//	vector<ll> v;
//	while (n--)
//	{
//		ll m;
//		cin >> m;
//		v.push_back(m);
//	}
//	vector<ll> prev(v.size());
//	ll sum = 0;
//	prev[0] = v[0];
//	ll i = 0;
//	for (i = 1; i < v.size(); i++)
//	{
//		prev[i] = prev[i - 1] + v[i];
//		if (prev[i] > 0)
//		{
//			sum += prev[i];
//		}
//	}
//	cout << sum;
//	return 0;
//}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) ((x)&(-x)) 
//typedef long long ll;
//const ll maxn = 5e5 + 5;
//ll tree[maxn + 1];
//ll n, m;
//void update(int x, int d)
//{
//	while (x <= n)
//	{
//		tree[x] += d;
//		x += lowbit(x);
//	}
//}
//ll getsum(int x)
//{
//	ll sum = 0;
//	while (x > 0)
//	{
//		sum += tree[x];
//		x -= lowbit(x);
//	}
//	return sum;
//}
//ll query(int l, int r)
//{
//	return getsum(r) - getsum(l - 1);
//}
//int main()
//{
//	cin >> n >> m;
//	vector<ll> nums;
//	ll i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ll a;
//		cin >> a;
//		nums.push_back(a);
//	}
//	for (ll j = 1; j <= n; j++)
//	{
//		update(j, nums[j - 1]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		ll y, x, k;
//		cin >> y >> x >> k;
//		if (y == 1)
//		{
//			nums[x - 1] += k;
//			update(x, k);
//		}
//		else
//		{
//			cout << query(x, k) << endl;
//		}
//	}
//	return 0;
//}

////E-5
//#include<bits/stdc++.h>
//using namespace std;
//#define lowbit(x) ((x)&(-x)) 
//typedef long long ll;
//const ll maxn = 5e5 + 5;
//ll tree[maxn + 1];
//ll nums[maxn + 1];
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
////ll query(ll l, ll r)
////{
////	return getsum(r) - getsum(l - 1);
////}
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

//G-7
//#include<iostream>
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
//        for (i = begin; i <= end ; i++)
//        {
//            arr1[i] = arr2[i];
//        }
//    }
//}
//int main()
//{
//    ll n;
//    while (cin >> n)
//    {
//        if (n == 0)
//        {
//            break;
//        }
//        for (ll i = 1; i <= n; i++)
//        {
//            cin >> arr1[i];
//        }
//        cnt = 0;
//        merge_sort(1, n);
//        cout << cnt << endl;
//    }
//    return 0;
//}