#include<iostream>

using namespace std;
int adiff(int a,int b)
{
  int c;
    if(b>a)
    {
      c=b-a;
    }
    else
    {
      c=a-b;
    }
    if(c%360 >180)
    {
      return 360-c%360;
    }
    else
    {
      return c%360;
    }
}

int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244)<<"\n";
}
