#include<bits/stdc++.h>

using namespace std;

struct ps{
	int t,m;
};
ps rutgonphanso(ps a)
{
	//ham rut gon phan so 
	ps p;
	p.t=a.t/__gcd(a.t,a.m);
	p.m=a.m/__gcd(a.t,a.m);
	return p;
}
void xuly()
{
	ps a;
	//nhap vao phan so can rut gon
	cin>>a.t>>a.m;
	cout<<rutgonphanso(a).t<<"/"<<rutgonphanso(a).m<<endl;
}
int main(){ 
  	
 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//nhap xuat file
    freopen("inp.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
	//so luong phan so can xu ly
    t=1;
    //cin>>t;
    while(t--)
    {
    	xuly();
    }

}

