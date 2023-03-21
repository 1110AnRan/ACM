#define _CRT_SECURE_NO_WARNINGS 1

//L1-041 寻找250
//#include <iostream>
//using namespace std;
//int main()
//{
//	int count = 0;
//	int m;
//	while ((cin >> m))
//	{
//		count++;
//		if (m == 250)
//		{
//			cout << count << endl;
//			break;
//		}
//	}
//	return 0;
//}

//L1-042 日期格式化
//#include <iostream>
//using namespace std;
//int main()
//{
//	int mm, dd, yyyy;
//	scanf("%d-%d-%d", &mm, &dd, &yyyy);
//	printf("%d-%02d-%02d", yyyy, mm, dd);
//	return 0;
//}

//L1-044 稳赢
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	int k = 0;
//	int count = 0;
//	cin >> k;
//	string s1;
//	vector<string> v;
//	while ((cin >> s1))
//	{
//		if (s1 == "End")
//		{
//			break;
//		}
//		v.push_back(s1);
//	}
//	int i = 0;
//	for (i = 0; i < v.size(); i++)
//	{
//		count++;
//		if (count == k + 1)
//		{
//			cout << v[i] << endl;
//			count = 0;
//		}
//		else if (v[i] == "ChuiZi")
//		{
//			cout << "Bu" << endl;
//		}
//		else if (v[i] == "Bu")
//		{
//			cout << "JianDao" << endl;
//		}
//		else if (v[i] == "JianDao")
//		{
//			cout << "ChuiZi" << endl;
//		}
//	}
//	return 0;
//}

//L1-045 宇宙无敌大招呼
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	cout << "Hello " << s << endl;
//	return 0;
//}

//L1-047 装睡
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int N = 0;
//	cin >> N;
//	string s;
//	int breath, skip;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		cin >> s >> breath >> skip;
//		if ((breath < 15 || breath>20) || (skip < 50 || skip>70))
//		{
//			cout << s << endl;
//		}
//	}
//}

//L1-051 打折
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int price, discount;
//	cin >> price >> discount;
//	cout << fixed << setprecision(2) << price * discount * 0.1 << endl;
//	return 0;
//}

//L1-052 2018我们要赢
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2018" << endl;
//	cout << "wo3 men2 yao4 ying2 !" << endl;
//	return 0;
//}

//L1-053 电子汪
//#include <iostream>
//using namespace std;
//int main()
//{
//	int A, B;
//	cin >> A >> B;
//	int i = 0;
//	for (i = 0; i < A + B; i++)
//	{
//		cout << "Wang!";
//	}
//	return 0;
//}

//L1-056 猜数字
//#include<iostream>
//#include<vector>
//#include<string>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int N;
//	int sum = 0;
//	int ave = 0;
//	int min = 0;
//	string name;
//	cin >> N;
//	pair<string, int> p;
//	vector<pair<string, int>> v;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		cin >> p.first >> p.second;
//		sum += p.second;
//		v.push_back(p);
//	}
//	ave = sum / N / 2;
//	if (N == 1)
//	{
//		cout << ave << " " << v[0].first << endl;
//	}
//	else
//	{
//		min = fabs(v[0].second - ave);
//		for (i = 1; i < N; i++)
//		{
//			if (fabs(v[i].second - ave) < min)
//			{
//				min = fabs(v[i].second - ave);
//				name = v[i].first;
//			}
//		}
//		cout << ave << " " << name << endl;
//	}
//	return 0;
//}

//L1-057 PTA使我精神焕发
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "PTA shi3 wo3 jing1 shen2 huan4 fa1 !" << endl;
//	return 0;
//}