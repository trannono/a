#include<bits/stdc++.h>

using namespace std;

struct ps{
    int tu;
    int mau;
};
ps rutgonphanso(ps p1)
{
	//dung ham co san tim kiem ucln cua hai so de rut gon
    ps p2;
    int ucln=__gcd(p1.tu,p1.mau);
    p2.tu=p1.tu/ucln;
    p2.mau=p1.mau/ucln;
    return p2;
}
ps phansolonnhat(ps p1,ps p2)
{
	//so sanh hai phan so bang logic
    if((rutgonphanso(p1).tu/rutgonphanso(p1).mau)>=rutgonphanso(p2).tu/rutgonphanso(p2).mau)
        return p1;
    else 
        return p2;
}
void xuly()
{
	//khai bao phan so va nhap vao phan so can so sanh
	ps a;
	cin>>a.tu>>a.mau;
	ps b;
	cin>>b.tu>>b.mau;
	//thuc hien ham so sanh
	cout<<phansolonnhat(a,b).tu<<"/"<<phansolonnhat(a,b).mau<<endl;
}
int main(){ 
  	
 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//nhap xuat file
   	freopen("inp.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    //bo phan so can so sanh
    t=1;
    while(t--)
    {
    	xuly();
    }

}

