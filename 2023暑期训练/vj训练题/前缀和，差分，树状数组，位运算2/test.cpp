
//A-1
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 100005;
//ll n, m, nums1[MAXN], prenums1[MAXN], nums2[MAXN], prenums2[MAXN];
//int main()
//{
//	cin >> n >> m;;
//	ll i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> nums1[i];
//		prenums1[i] = prenums1[i - 1] + nums1[i];
//	}
//	for (i = 1; i <= m; i++)
//	{
//		cin >> nums2[i];
//		prenums2[i] = prenums2[i - 1] + nums2[i];
//	}
//	ll begin1 = 1, begin2 = 1;
//	ll cnt = 0;
//	while (begin1 <= n && begin2 <= m)
//	{
//		if (prenums1[begin1] == prenums2[begin2])
//		{
//			cnt++;
//			begin1++;
//			begin2++;
//		}
//		else if (prenums1[begin1] > prenums2[begin2])
//		{
//			begin2++;
//		}
//		else if (prenums1[begin1] < prenums2[begin2])
//		{
//			begin1++;
//		}
//	}
//	cout << cnt;
//	return 0;
//}



//B-2



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, k;
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (k >= 30 || n <= ll((1 << k) - 1))
		{
			cout << n + 1 << endl;
		}
		else
		{
			cout << (1 << k) << endl;
		}
	}
	return 0;
}
