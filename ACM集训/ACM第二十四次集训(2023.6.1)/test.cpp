#define _CRT_SECURE_NO_WARNINGS 1
//6月个人训练赛1

//A-1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int a, b;
//		int count = 0;
//		cin >> a >> b;
//		while (a / b)
//		{
//			if (b == 1)
//			{
//				b++;
//				count++;
//			}
//			else if (a / b != 1)
//			{
//				a = a / b;
//				count++;
//			}
//			else if (a / b == 1)
//			{
//				b++;
//				count++;
//			}
//		}
//		count++;
//		cout << count << endl;
//	}
//	return 0;
//}


//C-3
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	if (c == 0 && a == d)
//	{
//		cout << 1 << endl;
//	}
//	else if (c != 0 && a != 0 && a == d)
//	{
//		cout << 1 << endl;
//	}
//	else
//	{
//		cout << 0 << endl;
//	}
//	return 0;
//}

//D-4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int h1, h2, m1, m2;
//	scanf("%d:%d", &h1, &m1);
//	scanf("%d:%d", &h2, &m2);
//	int gap1 = h2 * 60 + h1 * 60 + m2 + m1;
//	printf("%02d:%02d", gap1 / 2 / 60, gap1 / 2  % 60);
//	return 0;
//}

//E-5
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double up1 = 1, up2 = 1, up3 = 1;
	double down1 = 120 , down2 = 720, down3 = 5040;
	int i = 0;
	for (i = n - 4; i <= n; i++)
	{
		up1 *= i;
	}
	up2 = up1 * (n - 5);
	up3 = up2 * (n - 6);
	cout << up1 / down1 + up2 / down2 + up3 / down3 << endl;
	return 0;
}