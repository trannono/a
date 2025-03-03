#include<bits/stdc++.h>

using namespace std;

struct ps{
	int t,m;
};
ps rutgonphanso(ps a)
{
	ps p;
	p.t=a.t/__gcd(a.t,a.m);
	p.m=a.m/__gcd(a.t,a.m);
	return p;
}
void xuly()
{
	ps a;
	cin>>a.t>>a.m;
	cout<<rutgonphanso(a).t<<"/"<<rutgonphanso(a).m<<endl;
}
int main(){ 
  	
 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	
   	freopen("inp.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    t=2;
    //cin>>t;
    while(t--)
    {
    	xuly();
    }

}

