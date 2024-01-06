

//250.反转字符串中的字符
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse(s.begin(), s.end());
//	cout << s << endl;
//	return 0;
//}


//251
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	string s1, s2;
//	map<char, int> mp;
//	cin >> s1 >> s2;
//	int len1 = s1.size(), len2 = s2.size();
//	int i;
//	for (i = 0; i < len1; i++)
//	{
//		mp[s1[i]]++;
//	}
//	string ans;
//	for (i = 0; i < len2; i++)
//	{
//		if (mp[s2[i]] == 0)
//		{
//			ans = s2[i];
//			break;
//		}
//		else
//		{
//			mp[s2[i]]--;
//		}
//	}
//	if (ans.size() != 0)
//	{
//		cout << ans;
//	}
//	else
//	{
//		auto it = mp.begin();
//		while (it != mp.end())
//		{
//			if (it->second > 0)
//			{
//				ans += it->first;
//			}
//			++it;
//		}
//		cout << ans;
//	}
//	return 0;
//}


//252
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, target, a[105];
//vector<pair<int, int>>v;
//bool cmp(pair<int, int> p1, pair<int, int>p2)
//{
//	return p1.first + p1.second > p2.first + p2.second;
//}
//int main()
//{
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	cin >> target;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] + a[j] == target)
//			{
//				v.push_back(make_pair(i, j));
//			}
//		}
//	}
//	sort(v.begin(), v.end(), cmp);
//	cout << v[0].first << " " << v[0].second;
//	return 0;
//}



//253
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n;
//int main()
//{
//	cin >> n;
//	if (n % 3 == 0 && n % 5 != 0)
//	{
//		cout << "Fizz";
//	}
//	else if (n % 5 == 0 && n % 3 != 0)
//	{
//		cout << "Buzz";
//	}
//	else if (n % 3 == 0 && n % 5 == 0)
//	{
//		cout << "FizzBuzz";
//	}
//	else
//	{
//		cout << n;
//	}
//
//	return 0;
//}


//254
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << a + b << endl;
//	return 0;
//}



//297
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n;
//int a[105];
//int main()
//{
//	cin >> n;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int _min = a[i];
//		int index = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (_min > a[j])
//			{
//				_min = a[j];
//				index = j;
//			}
//		}
//		a[index] = a[i];
//		a[i] = _min;
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}


//298
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, a[105];
//int main()
//{
//	cin >> n;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j > 0; j--)
//		{
//			if (a[j] < a[j - 1])
//			{
//				swap(a[j], a[j - 1]);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}


//299
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, a[105];
//void QuickSort(int l, int r)
//{
//	if (l >= r)
//	{
//		return;
//	}
//
//	int left = l, right = r;
//	int pivot = left;
//	while (left < right)
//	{
//		while (left < right && a[right] >= a[pivot])
//		{
//			--right;
//		}
//		while (left < right && a[left] <= a[pivot])
//		{
//			++left;
//		}
//		swap(a[left], a[right]);
//	}
//	swap(a[pivot], a[right]);
//	pivot = right;
//	QuickSort(l, pivot - 1);
//	QuickSort(pivot + 1, r);
//}
//void Print()
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//int main()
//{
//	cin >> n;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	QuickSort(0, n - 1);
//	Print();
//	return 0;
//}



//300
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//void _MergeSort(int* a, int left, int right, int* tmp)
//{
//	if (left >= right)
//		return;
//	int mid = (right + left) >> 1;
//
//	_MergeSort(a, left, mid, tmp);
//	_MergeSort(a, mid + 1, right, tmp);
//
//	int begin1 = left, end1 = mid;
//	int begin2 = mid + 1, end2 = right;
//	int index = left;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (a[begin1] < a[begin2])
//		{
//			tmp[index++] = a[begin1++];
//		}
//		else
//		{
//			tmp[index++] = a[begin2++];
//		}
//	}
//
//	while (begin1 <= end1)
//	{
//		tmp[index++] = a[begin1++];
//	}
//
//	while (begin2 <= end2)
//	{
//		tmp[index++] = a[begin2++];
//	}
//	for (int i = left; i <= right; i++)
//	{
//		a[i] = tmp[i];
//	}
//}
//void MergeSort(int* a, int n)
//{
//	int* tmp = new int[n];
//	_MergeSort(a, 0, n - 1, tmp);
//	delete[]tmp;
//}
//int main()
//{
//	int n, a[105];
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	MergeSort(a, n);
//	for (i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}



//301
//#include <bits/stdc++.h>
//using namespace std;
//int GetMaxNum(int* a, int n)
//{
//	int i = 1;
//	int ret = a[0];
//	while (i < n)
//	{
//		if (a[i] > ret)
//		{
//			ret = a[i];
//		}
//		++i;
//	}
//	return ret;
//}
//int GetMaxCount(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		++count;
//		x /= 10;
//	}
//	return count;
//}
//int GetIndex(int x, int count)
//{
//	int ret = 0;
//	for (int i = 1; i <= count; i++)
//	{
//		ret = x % 10;
//		x /= 10;
//	}
//	return ret;
//}
//void bucketsort(int* a, int n, vector<queue<int>>& v,int count)
//{
//	for (int i = 1; i <= count; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			v[GetIndex(a[j], i)].push(a[j]);
//		}
//		int index = 0;
//		int k = 0;
//		while (k <= 9)
//		{
//			while (!v[k].empty())
//			{
//				a[index++] = v[k].front();
//				v[k].pop();
//			}
//			++k;
//		}
//	}
//}
//int main()
//{
//	int n, a[105];
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	vector<queue<int>> v;
//	v.resize(9);
//	int MaxNum = GetMaxNum(a, n);
//	int count = GetMaxCount(MaxNum);
//	bucketsort(a, n, v, count);
//	for (i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}
