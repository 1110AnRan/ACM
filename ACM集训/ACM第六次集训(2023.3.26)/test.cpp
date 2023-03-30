#define _CRT_SECURE_NO_WARNINGS 1


//L1-8 外星人的一天
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int day, hh, mm, total=0;
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d %d:%d", &day, &hh, &mm);
//		total = (24 * 60 * (day - 1) + hh * 60 + mm) / 2;
//		if (day == 0)
//		{
//			printf("%d %02d:%02d\n", 0, hh, mm);
//		}
//		else
//		{
//			printf("%d %02d:%02d\n", total / 1440 + 1, total % 1440 / 60, total % 1440 % 60);
//		}
//	}
//	return 0;
//}

//L1-3 宇宙无敌加法器
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	string s1, s2, s3;
//	s3.resize(s.size() + 1);
//	cin >> s1 >> s2;
//	if (s1.size() < s2.size())
//	{
//		swap(s1, s2);
//	}
//	int id1 = s1.size() - 1;
//	int id2 = s2.size() - 1;
//	int id3 = s.size() - 1;
//	int div = 0;
//	int i = 0;
//	for (i = 0; i < s2.size(); i++)
//	{
//		if (s[id3] == '0')
//		{
//			s3[id3] = (s1[id1] - 48 + s2[id2] - 48 + div) % 10 + '0';
//			div = (s1[id1] - 48 + s2[id2] - 48 + div) / 10;
//		}
//		else
//		{
//			s3[id3] = (s1[id1] - 48 + s2[id2] - 48 + div) % (s[id3] - 48);
//			div = (s1[id1] - 48 + s2[id2] - 48 + div) / (s[id3] - 48);
//		}
//		id1--;
//		id2--;
//		id3--;
//	}
//	for (i = 0; i < s1.size() - s2.size(); i++)
//	{
//		if (s[id3] == '0')
//		{
//			s3[id3] = (s1[id1] - 48 + div) % 10;
//			div = (s1[id1] - 48  + div) / 10;
//		}
//		else
//		{
//			s3[id3] = (s1[id1] - 48 + div) % (s[id3] - 48) + '0';
//			div = (s1[id1] - 48 + div) / (s[id3] - 48);
//		}
//		id1--;
//		id3--;
//	}
//	if (s1.size() == s2.size())
//	{
//		for (i = 0; i < s3.size()-2; i++)
//		{
//			cout << (int)s3[i];
//		}
//	}
//	else
//	{
//		for (i = s1.size() - s2.size() - 1; i < s3.size() - 1; i++)
//		{
//			cout << (int)s3[i];
//		}
//	}
//	return 0;
//}

//L2-4 链表去重
#include<iostream>
#define MAX_NODE 100000
using namespace std;
typedef struct Node
{
	int prevptr;
	int val;
	int nextptr;
}node;
int main()
{
	int L, N;
	cin >> L >> N;
	node oldnode[MAX_NODE];
	node newnode[MAX_NODE];
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		cin >> oldnode[i].prevptr >> oldnode[i].val >> oldnode[i].nextptr;
		if (oldnode[i].prevptr == L)
		{
			newnode[0] = oldnode[i];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (newnode[i].nextptr == oldnode[j].prevptr)
			{
				newnode[i + 1] = oldnode[j];
				break;
			}
		}
	}




	return 0;
}