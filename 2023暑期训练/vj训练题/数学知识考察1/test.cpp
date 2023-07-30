
//A-1
//#include<bits/stdc++.h>
//using namespace std;
//typedef unsigned long long ull;
//ull n, a, b, c, k;
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		cin >> a >> b >> c >> k;
//		if ((c - b) == (b - a))
//		{
//			ull d = c - b;
//			cout << (a + (k - 1) * d) % 200907 << "\n";
//		}
//		else
//		{
//			ull q = c / b;
//			cout <<  ull((a * pow(q, k - 1))) % 200907 << "\n";
//		}
//	}
//	return 0;
//}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int x, y, p, ans = 1, a;
//int main()
//{
//	cin >> x >> y;
//	if (y % x != 0)
//	{
//		cout << 0;
//	}
//	else
//	{
//		p = y / x;
//		a = 2;
//		while (p != 1)
//		{
//			while (p % a != 0)
//			{
//				a++;
//			}
//			while (p % a == 0)
//			{
//				p /= a;
//			}
//			a++; 
//			ans *= 2;
//		}
//		cout << ans;
//	}
//	return 0;
//}

//G-7
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n;
//int main()
//{
//	cin >> n;
//	ll i;
//	for (i = 2; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			cout << n / i;
//			break;
//		}
//	}
//	return 0;
//}