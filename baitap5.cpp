#include<bits/stdc++.h>

using namespace std;

struct Date{
  int ngay;int thang; int nam;
};
Date sau(Date a)
{
    //xet cac truong hop dac biet
    Date b;
    //ngay cuoi nam
    if(a.ngay==31&&a.thang==12) 
      {
        b.ngay=1;
        b.thang=1;
        b.nam=a.nam+1;
        return b;
      }
    //xet nam nhuan truoc roi moi xet thang 2 thong thuong vi ham se tra ve truoc neu do 
    // la nam nhuan co the khong can xet vi thang 2 ngay 28/29 thi qua thang moi luon
    if(a.nam%400==0||(a.nam%100)%4==0)
    {
      if(a.thang==2&&a.ngay==29)
      {
        b.ngay=1;
        b.thang=3;
        b.nam=a.nam;
        return b;
      }
    }
    if(a.ngay==28&&a.thang==2)
    {
        b.ngay=1;
        b.thang=3;
        b.nam=a.nam;
        return b;
    }
    //xet cac thang co 30 ngay
    if(a.ngay==30)
    {
      if(a.thang==4||a.thang==6||a.thang==9||a.thang==11)
      {
        b.ngay=1;
        b.thang=a.thang+1;
        b.nam=a.nam;
        return b;
      }
    }
       //xet cac thang co 31 ngay
     if(a.ngay==31)
    {
      if(a.thang==1||a.thang==3||a.thang==5||a.thang==7||a.thang==8||a.thang==10)
      {
        b.ngay=1;
        b.thang=a.thang+1;
        b.nam=a.nam;
        return b;
      }
    }
    //TH cac ngay binh thuong khong gay thay doi qua nhieu
        b.ngay=a.ngay+1;
        b.thang=a.thang;
        b.nam=a.nam;
        return b;
      
}
Date truoc(Date a)
{
    //xet th nam truoc
    Date b;
    if(a.ngay==1&&a.thang==1) 
      {
        b.ngay=31;
        b.thang=12;
        b.nam=a.nam-1;
        return b;
      }
    //thang co thang truoc la 30 ngay
    if(a.ngay==1)
    {
      if(a.thang==4||a.thang==6||a.thang==9||a.thang==11)
      {
        b.ngay=30;
        b.thang=a.thang-1;
        b.nam=a.nam;
        return b;
      }
    }
    //thang co thang truoc la 31 ngay
     if(a.ngay==1)
    {
      if(a.thang==1||a.thang==5||a.thang==7||a.thang==8||a.thang==10)
      {
        b.ngay=31;
        b.thang=a.thang-1;
        b.nam=a.nam;
        return b;
      }
    }
    //xet thang dac biet nam nhuan thang 2 co 29 or 28
    if(a.ngay==1)
      if(a.thang==3)
      {
        if(a.nam%400==0||(a.nam%100)%4==0)
            {
              b.ngay=29;
              b.thang=a.thang-1;
              b.nam=a.nam;
              return b;
            }
        else
            {
              b.ngay=28;
              b.thang=a.thang-1;
              b.nam=a.nam;
              return b;
            }
      }
        b.ngay=a.ngay-1;
        b.thang=a.thang;
        b.nam=a.nam;
        return b;
      
}
int xuly(Date a)
{
  //xet theo tung thang 1
  if(a.thang==1)return a.ngay;
  int tam=30;
  if(a.thang==2)return tam+a.ngay;
  if(a.nam%400==0||(a.nam%100)%4==0)
    {
      tam+=29;
    }
  else tam+=28;
  if(a.thang==3)return tam+a.ngay;
  tam+=31;
  if(a.thang==4)return tam+a.ngay;
  tam+=30;
  if(a.thang==5)return tam+a.ngay;
  tam+=31;
  if(a.thang==6)return tam+a.ngay;
  tam+=30;
  if(a.thang==7)return tam+a.ngay;
  tam+=31;
  if(a.thang==8)return tam+a.ngay;
  tam+=31;
  if(a.thang==9)return tam+a.ngay;
  tam+=30;
  if(a.thang==10)return tam+a.ngay;
  tam+=31;
  if(a.thang==11)return tam+a.ngay;
  tam+=30;
  if(a.thang==12)return tam+a.ngay;
  tam+=31;
  return tam;
}
int main(){ 
  //nhap xuat file
     freopen("inp.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    //nhap vao ngay can xu ly
    Date a;
    cin>>a.ngay>>a.thang>>a.nam;
    //tim ngay dung o sau
    cout<<sau(a).ngay<<"/"<<sau(a).thang<<"/"<<sau(a).nam<<endl; 

    cout<<truoc(a).ngay<<"/"<<truoc(a).thang<<"/"<<truoc(a).nam<<endl; 

    cout<<"la ngay thu:"<<xuly(a)<<endl;

}

