//A-A
//#include<bits/stdc++.h>
//using namespace std;
//int num[123][123] = { 0 };
//int main()
//{
//	int n, m, r, x, y, cnt = 0;
//	cin >> n >> m >> r;
//	while (m--)
//	{
//		cin >> x >> y;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				double d = sqrt((x - i) * (x - i) + (y - j) * (y - j));	
//				if (d <= r)
//				{
//					num[i][j]++;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (num[i][j] > 0)
//			{
//				cnt++;
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//}

//B-B
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll maxn = 100005;
//ll n, nums[maxn];
//ll cnt = 0;
//int main()
//{
//	cin >> n;
//	ll i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//	}
//	for (i = 2; i <= n; i++)
//	{
//		if (nums[i] > nums[i - 1])
//		{
//			cnt += nums[i] - nums[i - 1];
//		}
//	}
//	cout << cnt + nums[1];
//	return 0;
//}




//C-C
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll Maxn = 1000005;
//ll a[Maxn];
//ll t, n;
//int main()
//{
//	cin >> t;
//	ll i = 0;
//	ll j = 0;
//	for (i = 1; i <= t; i++)
//	{
//		cin >> n;
//		for (j = 1; j <= n; j++)
//		{
//			cin >> a[j];
//		}
//		ll l = 1;
//		ll cnt = 0;
//		while (l <= n)
//		{
//			if (a[l] == l)
//			{
//				l++;
//			}
//			else
//			{
//				ll Max = a[l];
//				ll r = l + 1;
//				Max = max(Max, a[r]);
//				while (Max > r)
//				{
//					r++;
//					Max = fmax(Max, a[r]);
//				}
//				cnt += r - l + 1;
//				l = r + 1;
//			}
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}

//D-D
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 200005;
//ll nums[MAXN], sums[MAXN];
//int main()
//{
//	ll n;
//	cin >> n;
//	ll i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		sums[i] = sums[i - 1] + nums[i];
//	}
//	ll cnt = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cnt += nums[i] * (sums[n] - sums[i]);
//	}
//	cout << cnt;
//	return 0;
//}



//G-G
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll Maxn = 5000005;
//ll n, p, x, y, z;
//ll a[Maxn + 1], b[Maxn + 1];
//int main()
//{
//	cin.tie(0);
//	cin >> n >> p;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		b[i] = a[i] - a[i - 1];
//	}
//	for (i = 1; i <= p; i++)
//	{
//		cin >> x >> y >> z;
//		b[x] += z;
//		b[y + 1] -= z;
//	}
//	int min = 101;
//	for (i = 1; i <= n; i++)
//	{
//		a[i] = a[i - 1] + b[i];
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//	cout << min;
//	return 0;
//}

//I-I
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//#define lowbit(x) ((x)&(-x))
//const ll MAXN = 10000005;
//ll n, m, a, b, c, nums[MAXN];
//void update(ll x, ll d)
//{
//	while (x <= n)
//	{
//		nums[x] += d;
//		x += lowbit(x);
//	}
//}
//ll getsum(int x)
//{
//	ll sum = 0;
//	while (x > 0)
//	{
//		sum += nums[x];
//		x -= lowbit(x);
//	}
//	return sum;
//}
//int main()
//{
//	cin >> n >> m;
//	while (m--)
//	{
//		cin >> c;
//		if (c == 0)
//		{
//			cin >> a >> b;
//			update(a, 1);
//			update(b + 1, -1);
//		}
//		else
//		{
//			cin >> a;
//			cout << getsum(a) << endl;
//		}
//	}
//	return 0;
//}

//J-J
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 200005;
//ll n, nums[MAXN], prenums[MAXN];
//int main()
//{
//	cin.tie(0);
//	cin >> n;
//	int i = 0;
//	ll cnt = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		prenums[i] = nums[i] - nums[i - 1];
//	}
//	ll begin = 1, end = n;
//	while (begin < end)
//	{
//		while (prenums[begin] > 0)
//		{
//			begin++;
//		}
//		while (prenums[end] < 0)
//		{
//			end--;
//		}
//		if (begin > end)
//		{
//			break;
//		}
//		ll min = fmin(1 - prenums[begin], 1 + prenums[end]);
//		cnt += min;
//		prenums[begin] += min;
//		prenums[end] -= min;
//	}
//	cout << cnt << endl;
//	return 0;
//}
