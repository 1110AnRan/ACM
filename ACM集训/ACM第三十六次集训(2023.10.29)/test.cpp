
//B-2
//#include<bits/stdc++.h>
//using namespace std;
//double nums[10005];
//int n, m;
//bool check(double mid)
//{
//	int cnt = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cnt += floor(nums[i] / mid);
//	}
//	if (cnt >= m)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{	
//	cin >> n >> m;
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		cin >> nums[i];
//	}
//	double l = 0, r = 100000;
//	while (r - l > 0.00001)
//	{
//		double mid = (r + l) / 2;
//		if (check(mid))
//		{
//			l = mid;
//		}
//		else
//		{
//			r = mid;
//		}
//	}
//	cout << fixed << setprecision(2) << floor(r * 100) / 100;
//	return 0;
//}

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll t, a, b;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b;
//		if (b == 1)
//		{
//			cout << "NO\n";
//		}
//		else
//		{
//			cout << "YES\n";
//			cout << a * b << " " << a << " " << a * b + a << endl;
//		}
//	}
//	return 0;
//}


//E-5
//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int k;
//int main()
//{
//	cin >> s;
//	cin >> k;
//	int w = k;
//	int t = k;
//	bool flag = true;
//	while (w--)
//	{
//		for (int i = 0; i < s.size(); ++i)
//		{
//			if (s[i] > s[i + 1])
//			{
//				s.erase(i, 1);
//				t--;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < s.size() - t; i++)
//	{
//		if (s[i] == '0' && flag == true)
//		{
//			continue;
//		}
//		else if (s[i] != '0' && flag == true) 
//		{
//			flag = false;
//		}
//		cout << s[i];
//	}
//	if (flag == true)
//	{
//		cout << 0;
//	}
//	return 0;
//}


//F-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int nums[310];
//int main() 
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) 
//	{
//		cin >> nums[i];
//	}
//	nums[0] = 0;
//	ll ans = 0;
//	sort(nums, nums + n + 1);
//	int l = 0, r = n;
//	while (l != r) 
//	{
//		ans += pow(nums[r] - nums[l], 2);
//		l++;
//		if (l != r) 
//		{
//			ans += pow(nums[r] - nums[l], 2);
//			r--;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}


