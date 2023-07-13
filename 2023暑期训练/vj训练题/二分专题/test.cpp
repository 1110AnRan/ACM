
//C-3
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 100005;
//ll n;
//vector<ll> v;
//int main()
//{
//	cin >> n;
//	ll i = 0, value;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> value;
//		v.insert(upper_bound(v.begin(), v.end(), value), value);
//		if (i % 2 == 1)
//		{
//			cout << v[(i - 1) / 2] << endl;
//		}
//	}
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll s, a, b;
//int main()
//{
//	cin >> s >> a >> b;
//	double s1 = 1.0 * (a + b) * s / (b + 3 * a);
//	double mintime = s1 / b + (s - s1) / a;
//	cout << fixed << setprecision(6) << mintime;
//	return 0;
//}



//F-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 100005;
//ll n, m, nums1[MAXN], nums2[MAXN];
//map<int, bool> mp;
//int main()
//{
//	cin >> n >> m;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums1[i];
//	}
//	for (i = 1; i <= m; i++)
//	{
//		cin >> nums2[i];
//		mp[nums2[i]] = true;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (mp[nums1[i]])
//		{
//			cout << nums1[i] << " ";
//		}
//	}
//	return 0;
//}

//G-7
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 100005;
ll nums[MAXN], n, m;
ll check(ll x)
{
	ll t = 1, t1 = nums[1] + x; 
	for (ll i = 2; i <= n; i++)
	{
		if (nums[i] < t1)
		{
			continue;
		}
		t++;
		t1 = nums[i] + x;
	}
	if (t >= m)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> nums[i];
	}
	sort(nums + 1, nums + 1 + n);
	ll left = 0, right = nums[n] - nums[1];
	while (left <= right)
	{
		ll mid = (left + right) >> 1;  
		if (check(mid))
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	cout << right << "\n";
	return 0;
}


//H-8
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 100005;
//ll n, m, nums1[MAXN], nums2[MAXN];
//int main()
//{
//	cin >> m >> n;
//	int i = 0;
//	for (i = 1; i <= m; i++)
//	{
//		cin >> nums1[i];
//	}
//	sort(nums1 + 1, nums1 + 1 + m);
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums2[i];
//	}
//	ll sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ll left = 0, right = m + 1;
//		while (left < right)
//		{
//			ll mid = (left + right) >> 1;
//			if (nums1[mid] <= nums2[i])
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid;
//			}
//		}
//		if (left == 1)
//		{
//			sum += abs(nums1[1] - nums2[i]);
//		}
//		else
//		{
//			sum += min(abs(nums1[left] - nums2[i]), abs(nums1[left - 1] - nums2[i]));
//		}
//
//	}
//	cout << sum << endl;
//	return 0;
//}