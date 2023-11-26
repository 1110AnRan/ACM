


//C
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int t;
//ll n;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n;
//		if (n % 2 == 0)
//		{
//			cout << "No\n";
//		}
//		else
//		{
//			cout << "Yes\n";
//		}
//		
//	}
//	return 0;
//}


//B
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, k;
//int a[5005];
//int b[5005];
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> a[i];
//		b[i] = b[i - 1] + a[i];
//	}
//
//	int l, r;
//	double _max = 0;
//	for (int i = 1; i <= n - k + 1; i++)
//	{
//		l = i;
//		for (r = i + k - 1; r <= n; r++)
//		{
//			_max = max(1.0 * (b[r] - b[l - 1]) / (r - l + 1), _max);
//		}
//	}
//	printf("%.15lf", _max);
//	return 0;
//}


//F
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 2 == 0)
//		cout << n / 2 - 1 << endl;
//	else
//		cout << n / 2 << endl;
//	return 0;
//}


//E
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll l1, l2, r1, r2, k;
//int main()
//{
//    cin >> l1 >> r1 >> l2 >> r2 >> k;
//    ll l = max(l1, l2);
//    ll r = min(r1, r2);
//    ll ans = 0;
//    if (r >= l)
//    {
//        ans = r - l + 1;
//    }
//    if (k >= l && k <= r)
//    {
//        ans -= 1;
//    }
//    cout << ans << endl;
//}


//D
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int t;
//ll n, k;
//ll s[100005];
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> k;
//		int i;
//		ll d = 0;
//		for (i = 1; i <= n; ++i)
//		{
//			cin >> s[i];
//			d ^= s[i];
//		}
//
//		if ((n % 2 == 0 && k % 2 == 1)||(n % 2 != 0 && k != 0))
//		{
//			for (i = 1; i <= n; ++i)
//			{
//				ll ans = d ^ s[i];
//				cout << ans << " ";
//			}
//		}
//		else
//		{
//			for (i = 1; i <= n; ++i)
//			{
//				cout << s[i] << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}