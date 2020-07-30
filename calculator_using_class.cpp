#include <iostream>

using namespace std;

class calculator
{
private:
    int a,b;
    char opr;
public:
    void get_values() {
        cout<<"Enter two numbers    :";
        cin>>a>>b;
        cout<<"Enter the operator   : ";
        cin>>opr;
    } 
    float return_result() {
        switch (opr)
        {
        case '+':
            return(a+b);
            break;
        case '-':
            return(a-b);
            break;
        case '*':
            return(a*b);
            break;
        case '/':
            if(b==0){
                cout<<"Division by Zero";
                break;
            }
            else {
                return(a/b);
                break;
            }
        default:
            cout<<"Wrong operator";
            break;
        }
        return 0;
    }
};

int main() {
    calculator c;
    c.get_values();
    cout<<"Result   : "<<c.return_result();
}