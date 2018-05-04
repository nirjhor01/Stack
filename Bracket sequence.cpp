#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char>st;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if((s[i]=='('||s[i]=='{'||s[i]=='['))//&&!st.empty())
		{
			st.push(s[i]);
		}
		else if((st.top()=='('&&s[i]==')')||(st.top()=='{'&&s[i]=='}')||(st.top()=='['&&s[i]==']'))
		{
			st.pop();
		}
	}
	cout<<st.size()<<endl;
}
