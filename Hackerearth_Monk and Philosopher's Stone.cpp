#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc, a,ans=-1;
	stack<int>s1;
	string s;
	std::vector<int> v1;
	cin >> tc;
	while (tc--)
	{

		cin >> a;
		v1.push_back(a);

	}
	int q, x, c = 0, sum = 0;
	cin >> q >> x;

	while (q--)
	{
		cin >> s;
		if (s == "Harry")
		{
			s1.push(v1[c]);
			sum += v1[c];
			c++;

		}
		 if (s == "Remove" && !s1.empty())
		{
			int z = s1.top();
			s1.pop();
			sum -= z;

		}
		if(sum==x)
		{
			cout << s1.size() << endl;
			return 0;
		}



	}
	cout<<"-1"<<endl;

}