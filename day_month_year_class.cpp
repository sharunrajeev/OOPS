#include <iostream>

using namespace std;

class calender {
    int day,month,year;
    char month_name[12][10] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    public:
    void input(){
        cout<<"Enter the Date : ";
        cin>>day>>month>>year;
    }
    void output() {
        cout<<"Date \t: "<<day<<"-"<<month_name[month-1]<<"-"<<year<<endl;
    }
}c;

int main() {
    c.input();
    c.output();
}