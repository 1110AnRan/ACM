//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int weight[100005], height[100005];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> weight[i] >> height[i];
//	}
//	int l = 0, r = 100005;
//	while (l <= r)
//	{
//		int mid = (l + r) >> 1;
//		int sum = 0;
//		for (i = 0; i < n; i++)
//		{
//			sum += (weight[i] / mid) * (height[i] / mid);
//		}
//		if (sum >= k)
//		{
//			l = mid + 1;
//		}
//		else
//		{
//			r = mid - 1;
//		}
//	}
//	cout << l - 1 << endl;
//	return 0;
//}

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll sum = 0, x = 0, n;
//int main()
//{
//	cin >> n;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			if (x < 16)
//			{
//				sum += pow(2, 16 + x);
//			}
//			else
//			{
//				sum += pow(2, x - 16);
//			}
//		}
//		x++;
//		n /= 2;
//	}
//	cout << sum;
//	return 0;
//}



//D-4
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 100005;
//ll n, nums[MAXN], prenums[MAXN], cnt = 0;
//int main()
//{
//	cin >> n;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		prenums[i] = nums[i] - nums[i - 1];
//		if (prenums[i] > 0)
//		{
//			cnt += prenums[i];
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll t, x, y;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> x >> y;
//		if ((x == 1 && y == 2) || (x == 2 && y == 1))
//		{
//			cout << "Yes\n";
//		}
//		else
//		{
//			cout << "No\n";
//		}
//	}
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 200005;
//ll t, n, nums[MAXN], prenums[MAXN];
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		ll i = 0;
//		ll max = 0;
//		for (i = 0; i < n; i++)
//		{
//			cin >> nums[i];
//			if (i == 0)
//			{
//				prenums[i] = nums[i];
//			}
//			else
//			{
//				prenums[i] = nums[i] - nums[i - 1];
//			}
//		}
//		if (prenums[0] != 0)
//		{
//			cout << 0 << endl;
//			continue;
//		}
//		ll l, r;
//		for (i = 1; i < n; i++)
//		{
//			if (prenums[i] != 1)
//			{
//				l = i;
//				max = fmax(max, nums[i]);
//				break;
//			}
//		}
//		for (i = l + 1; i < n; i++)
//		{
//			max = fmax(max, nums[i]);
//			if (max == i)
//			{
//				r = i;
//				break;
//			}
//		}
//		ll ans = nums[l];
//		for (i = l + 1; i <= r; i++)
//		{
//			if (nums[i] != i)
//			{
//				ans &= nums[i];
//			}
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}


