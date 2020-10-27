#include <iostream>

class Time {
  int hr,min,sec;
  public:
  Time(){
    hr=0;min=0;sec = 0;
  };
  Time(int h,int m,int s) {
    hr = h;
    min = m;
    sec = s;
  }
  Time operator -(Time t) {
    Time temp;
    temp.hr = t.hr - hr;
    temp.min = t.min - min;
    temp.sec = t.sec - sec + (temp.min*60) + (temp.hr*60*60);
    if(temp.sec < 0 )
      temp.sec *= -1;
    return temp;
  }
  Time operator +(int t) {
    Time temp;
    temp.hr = hr;
    temp.min = min;
    temp.sec = t + sec;
    return temp;
  }
  void printData() {
    std::cout<<hr<<":"<<min<<':'<<sec<<std::endl;
  }
  void printSeconds() {
    std::cout<<"Seconds : "<<sec<<std::endl;
  }
};

int main() {
  Time T1(1,30,15),T2(1,45,25),T3;
  T3 = T2 - T1;
  T3.printSeconds();
  T1.printData();
  T1 = T1 + 10;
  T1.printData();
}
