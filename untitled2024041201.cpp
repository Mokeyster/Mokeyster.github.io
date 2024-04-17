#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m;
	cin>>n>>m;
	int tmp;
	while(m != 0)
	{
		tmp = n % m;
		n = m;
		m = tmp;
	}
	
	cout<<n<<' '<<m;
	return 0;
}


