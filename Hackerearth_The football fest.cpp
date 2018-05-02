#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long tc, x, n, m, B = 0;
	cin >> tc;
	while (tc--)
	{
		stack<int>s;
		cin >> n >> m;
		s.push(m);
		char c;
		while (n--)
		{
			cin >> c;
			if (c == 'P')
			{
				if(B&1)
				{
					s.pop();
				}
				cin >> x;
				s.push(x);
				B=0;
			}
			else
			{
				B++;
			}
		}
		if(B&1) s.pop();
		cout<<"Player "<<s.top()<<endl;

	}
}