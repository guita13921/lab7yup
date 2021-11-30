#include<iostream>

using namespace std;
int adiff(int A,int B){
    while(A > 360){
        A = A - 360;
    }
    while(B > 360){
        B = B -360;
    }
    while(A < 0){
    A = 360 + A;
    }
    while(B < 0){
    B = 360 + B;
    }
int x;
      x = A-B;
          if(x < 0){
          x = -x;
          }
          if(x > 180){
          x = 360 - x;}
  return x;
}




int main(){
  cout << adiff(180,270) << "\n";
  cout << adiff(210,45) << "\n";
  cout << adiff(0,360) << "\n";
  cout << adiff(10,350) << "\n";
  cout << adiff(95,260) << "\n";
  cout << adiff(90,-90) << "\n";
  cout << adiff(1000,280) << "\n";
  cout << adiff(60,244) << "\n";
}
