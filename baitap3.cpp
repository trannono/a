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
ps operator+(ps p1,ps p2)
{
    ps p3;
    p3.tu=p1.tu*p2.mau+p2.tu*p1.mau;
    p3.mau=p1.mau*p2.mau;
    int ucln=__gcd(p3.tu,p3.mau);
    return rutgonphanso(p3);
}
ps operator-(ps p1,ps p2)
{
    ps p3;
    p3.tu=p1.tu*p2.mau-p2.tu*p1.mau;
    p3.mau=p1.mau*p2.mau;
    int ucln=__gcd(p3.tu,p3.mau);
    return rutgonphanso(p3);
}
ps operator*(ps p1,ps p2)
{
    ps p3;
    p3.tu=p1.tu*p2.tu;
    p3.mau=p1.mau*p2.mau;
    int ucln=__gcd(p3.tu,p3.mau);
    return rutgonphanso(p3);
}
ps operator/(ps p1,ps p2)
{
    ps p3;
    p3.tu=p1.tu*p2.mau;
    p3.mau=p1.mau*p2.tu;
    int ucln=__gcd(p3.tu,p3.mau);
    return rutgonphanso(p3);
}
void xuly()
{
	//khai bao phan so va nhap vao phan so can so sanh
	ps a;
	cin>>a.tu>>a.mau;
	ps b;
	cin>>b.tu>>b.mau;
	//thuc hien ham so sanh
	cout<<"CONG: "<<(a+b).tu<<"/"<<(a+b).mau<<endl;
    cout<<"TRU: "<<(a-b).tu<<"/"<<(a-b).mau<<endl;
    cout<<"NHAN: "<<(a*b).tu<<"/"<<(a*b).mau<<endl;
    cout<<"CHIA: "<<(a/b).tu<<"/"<<(a/b).mau<<endl;
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

