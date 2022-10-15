#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	char S[1000000],*p;
	cin>>S;
	if((p=strstr(S,"AB"))&&(strstr(p+2,"BA")))
	cout<<"YES"<<endl;
	else if((p=strstr(S,"BA"))&&(strstr(p+2,"AB")))
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
