

//B-2
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
////const ll MAXN = 1026;
//ll n;
//string/*tree[MAXN],*/ s;
////void BuildBinaryTree(string s, int root, int leftchild, int rightchild)
////{
////	if (rightchild <= pow(2, n + 1))
////	{
////		string s1 = s.substr(0, s.size() / 2);
////		string s2 = s.substr(s.size() / 2 , s.size() - s.size() / 2);
////		tree[root] = s, tree[leftchild] = s1, tree[rightchild] = s2;
////		BuildBinaryTree(s1, leftchild, leftchild * 2, leftchild * 2 + 1);
////		BuildBinaryTree(s2, rightchild, rightchild * 2, rightchild * 2 + 1);
////		if (s1 == string(s1.size(), '0'))
////		{
////			cout << "B";
////		}
////		else if (s1 == string(s1.size(), '1'))
////		{
////			cout << "I";
////		}
////		else
////		{
////			cout << "F";
////		}
////
////		if (s2 == string(s2.size(), '0'))
////		{
////			cout << "B";
////		}
////		else if (s2 == string(s2.size(), '1'))
////		{
////			cout << "I";
////		}
////		else
////		{
////			cout << "F";
////		}
////
////		if (s == string(s.size(), '0'))
////		{
////			cout << "B";
////		}
////		else if (s == string(s.size(), '1'))
////		{
////			cout << "I";
////		}
////		else
////		{
////			cout << "F";
////		}
////	}
////	
////}
////void PrintChildeValue(string value)
////{
////	int flag0 = value.find('0', 0);
////	int flag1 = value.find('1', 0);
////	if (flag0 != -1 && flag1 != -1)
////	{
////		cout << "F";
////	}
////	else if (flag0 == -1 && flag1 != -1)
////	{
////		cout << "I";
////	}
////	else if (flag0 != -1 && flag1 == -1)
////	{
////		cout << "B";
////	}
////
////}
//
////void PostorderTraversal(int key)
////{
////	if (key <= pow(2, n + 1))
////	{
////		PostorderTraversal(key * 2);
////		PostorderTraversal(key * 2 + 1);
////		PrintChildeValue(tree[key]);
////	}
////}
//
//void PrintFBI(string value)
//{
//	if (value.size() > 1)
//	{
//		PrintFBI(value.substr(0, value.size() / 2));
//		PrintFBI(value.substr(value.size() / 2, value.size() / 2));
//	}
//	if (value == string(value.size(), '0'))
//	{
//		cout << "B";
//	}
//	else if (value == string(value.size(), '1'))
//	{
//		cout << "I";
//	}
//	else 
//	{
//		cout << "F";
//	}
//
//}
//int main()
//{
//	cin >> n >> s;
//	if (s.size() == 1)
//	{
//		if (s == "0")
//		{
//			cout << "B";
//		}
//		else
//		{
//			cout << "I";
//		}
//	}
//	else
//	{
//		//int root = 1, leftchild = root * 2, rightchild = root * 2 + 1;
//		//BuildBinaryTree(s, root, leftchild, rightchild);
//		//PostorderTraversal(root);
//		PrintFBI(s);
//	}
//	return 0;
//}

//E-5
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//char matrix[105][105];
//int n;
//typedef struct Point
//{
//	int x;
//	int y;
//}Point;
//stack<Point> s;
//void Search(int row,int col,char dst)
//{
//	if (matrix[row][col] == dst)
//	{
//		if (row - 1 >= 1 && col -1 >= 1)
//		{
//			Search(row - 1, col - 1, 'i');
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	Point point;
//	point.x = 1;
//	point.y = 1;
//	char dst = 'y';
//	Search(point.x, point.y, dst);
//	return 0;
//}

//F-6
//#include<bits/stdc++.h>
//using namespace std;
//typedef struct PlatForm
//{
//	int num;
//	int height;
//	int left;
//	int right;
//}PlatForm;
//int n;
//const int MAX = 1005;
//void JudgeIFAnotherPlatform(PlatForm* platform)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int leftminnum = 0;
//		int rightminnum = 0;
//		for (j = 1; j <= n; j++)
//		{
//			if ((platform + j)->height < (platform + i)->height)
//			{
//				if ((platform + j)->left<(platform + i)->left && (platform + j)->right>(platform + i)->left)
//				{
//					if ((platform + leftminnum)->height < (platform + j)->height)
//					{
//						leftminnum = j;
//					}
//				}
//				if ((platform + j)->left<(platform + i)->right && (platform + j)->right>(platform + i)->right)
//				{
//					if ((platform + rightminnum)->height < (platform + j)->height)
//					{
//						rightminnum = j;
//					}
//				}
//			}
//		}
//		cout << leftminnum << " " << rightminnum << "\n";
//	}
//}
//int main()
//{
//	cin >> n;
//	PlatForm platform[MAX];
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		platform[i].num = i;
//		cin >> platform[i].height >> platform[i].left >> platform[i].right;
//	}
//	JudgeIFAnotherPlatform(platform);
//	return 0;
//}

//H-8
//#include<bits/stdc++.h>
//using namespace std;
//bool MINM(int x, int k)
//{
//    int cur = 0;
//    for (int i = 0; i < k; i++)
//    {
//        cur = (cur + x - 1) % (2 * k - i);
//        if (cur < k)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//int main()
//{
//    int k;
//    cin >> k;
//    for (int i = k;; i++)
//    {
//        if (MINM(i, k))
//        {
//            cout << i << endl;
//            break;
//        }
//    }
//    return 0;
//}






//I-9
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	string s(n, '0');
//	cout << n << "\n";
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (i != j)
//			{
//				if (s[j] == '0')
//				{
//					s[j] = '1';
//				}
//				else
//				{
//					s[j] = '0';
//				}
//			}
//		}
//		cout << s << "\n";
//	}
//
//	return 0;
//}