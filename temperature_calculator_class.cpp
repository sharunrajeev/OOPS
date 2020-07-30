#include <iostream>

using namespace std;

class temperature {
    float nC,nF;

    public:

    void accept() {
        cout<<"Enter the value of temperature in Celsius ";
        cin>>nC;
    }

    void convert() {
        nF=32+((9/5)*nC);
    }

    void display() {
        cout<<"Temperature in Farenheit : "<<nF;
    }

}t;

int main() {
    t.accept();
    t.convert();
    t.display();
    cout<<endl;
    return 0;
}