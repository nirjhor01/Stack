#include<bits/stdc++.h>
using namespace std;
 main()
{
  long long n,m,res=0,ip;
  stack<int>s;
  s.push(1);
  cin>>n>>m;
  for (long long i=0;i<m;i++)
  {
  	cin>>ip;
  	if(ip>=s.top())
  	{
      res+=(ip-s.top());
      s.push(ip);
  	}
  	else
  	{
  		res+=((n-s.top())+ip);
  		s.push(ip);
  	}
  }
  cout<<res<<endl;
}