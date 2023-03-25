#define _CRT_SECURE_NO_WARNINGS 1


//L1-058 6翻了
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1);
//	s2.resize(s1.size());
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int k = 0;
//	for (i = 0; i < s1.size(); i++)
//	{
//		count = 0;
//		if (s1[i] != '6')
//		{
//			s2[j] = s1[i];
//			j++;
//		}
//		else
//		{
//			for (k = i; s1[k] == '6'; k++)
//			{
//				count++;
//				i++;
//			}
//			i--;
//			if (count <= 3)
//			{
//				for (k = 0; k < count; k++)
//				{
//					s2[j] = '6';
//					j++;
//				}
//			}
//			else if (count > 3 && count <= 9)
//			{
//				s2[j] = '9';
//				j++;
//			}
//			else
//			{
//				s2[j++] = '2';
//				s2[j++] = '7';
//			}
//		}
//	}
//	cout << s2 << endl;
//	return 0;
//}

//L2-021 点赞狂魔
//#include<iostream>
//#include<string>
//#include<set>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0;
//	string name[100];
//	set<int> s;
//	vector<int> vk;		//记录每个人标签出现次数平均值最小
//	vector<int> v;		//记录每个人不同的标签个数
//	cin >> n;
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = 0;
//		s.clear();
//		cin >> name[i];
//		cin >> k;
//		for (j = 0; j < k; j++)
//		{
//			cin >> m;
//			sum += m;
//			s.insert(m);
//		}
//		sum /= k;
//		vk.push_back(sum);
//		v.push_back(s.size());
//	}
//	if (n == 2)
//	{
//		if (v[0] > v[1])
//		{
//			cout << name[0] << " " << name[1] << " -" << endl;
//		}
//		else if (v[0] < v[1])
//		{
//			cout << name[1] << " " << name[0] << " -" << endl;
//		}
//		else if (v[0] == v[1])
//		{
//			if (vk[0] < vk[1])
//			{
//				cout << name[1] << " " << name[0] << " -" << endl;
//			}
//			else
//			{
//				cout << name[0] << " " << name[1] << " -" << endl;
//			}
//		}
//	}
//	else if (n == 1)
//	{
//		cout << name[0] << " - -" << endl;
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			int flag = 0;
//			for (j = 0; j < n - i - 1; j++)
//			{
//				if (v[j] > v[j + 1])
//				{
//					int temp = v[j];
//					v[j] = v[j + 1];
//					v[j + 1] = temp;
//					temp = vk[j];
//					vk[j] = vk[j + 1];
//					vk[j + 1] = temp;
//					string stemp = name[j];
//					name[j] = name[j + 1];
//					name[j + 1] = stemp;
//					flag = 1;
//				}
//			}
//			if (flag == 0)
//			{
//				break;
//			}
//		}
//		for (i = n - 1; i > n - 3; i--)
//		{
//			if (v[i] == v[i - 1])
//			{
//				if (vk[i] < vk[i - 1])
//				{
//					int temp = v[i];
//					v[i] = v[i - 1];
//					v[i - 1] = temp;
//					temp = vk[i];
//					vk[i] = vk[i - 1];
//					vk[i - 1] = temp;
//					string stemp = name[i];
//					name[i] = name[i - 1];
//					name[i - 1] = stemp;
//				}
//			}
//		}
//		for (i = n - 1; i >= n - 3; i--)
//		{
//			cout << name[i];
//			if (i > n - 3)
//			{
//				cout << " ";
//			}
//		}
//	}
//	return 0;
//}

//L1-060 心理阴影面积
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	cout << 50 * 100 - 100 * y / 2 - 100 * (100 - x) / 2 << endl;
//	return 0;
//}

//L1-061 新胖子公式
//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double weight, hight;
//	cin >> weight >> hight;
//	cout <<fixed<<setprecision(1)<< weight / (hight * hight) << endl;
//	if (weight / (hight * hight) > 25)
//	{
//		cout << "PANG" << endl;
//	}
//	else
//	{
//		cout << "Hai Xing" << endl;
//	}
//	return 0;
//}

//L1-062 幸运彩票
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int N = 0;
//	cin >> N;
//	string s;
//	int i = 0;
//	int begin = 0, end = 0;
//	for (i = 0; i < N; i++)
//	{
//		begin = 0;
//		end = 0;
//		cin >> s;
//		begin = s[0] - 48 + s[1] - 48 + s[2] - 48;
//		end = s[3] - 48 + s[4] - 48 + s[5] - 48;
//		if (begin == end)
//		{
//			cout << "You are lucky!" << endl;
//		}
//		else
//		{
//			cout << "Wish you good luck." << endl;
//		}
//	}
//
//	return 0;
//}

//L1-063 吃鱼还是吃肉
//#include<iostream>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int sex, height, weight;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		cin >> sex >> height >> weight;
//		if (sex == 0)
//		{
//			if (height == 129)
//			{
//				cout << "wan mei! ";
//			}
//			else if (height < 129)
//			{
//				cout << "duo chi yu! ";
//			}
//			else
//			{
//				cout << "ni li hai! ";
//			}
//			if (weight == 25)
//			{
//				cout << "wan mei!" << endl;
//			}
//			else if (weight < 25)
//			{
//				cout << "duo chi rou!" << endl;
//			}
//			else
//			{
//				cout << "shao chi rou!" << endl;
//			}
//		}
//		else
//		{
//			if (height == 130)
//			{
//				cout << "wan mei! ";
//			}
//			else if (height < 130)
//			{
//				cout << "duo chi yu! ";
//			}
//			else
//			{
//				cout << "ni li hai! ";
//			}
//			if (weight == 27)
//			{
//				cout << "wan mei!" << endl;
//			}
//			else if (weight < 27)
//			{
//				cout << "duo chi rou!" << endl;
//			}
//			else
//			{
//				cout << "shao chi rou!" << endl;
//			}
//		}
//	}
//	return 0;
//}

