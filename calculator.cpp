#include <iostream>
using namespace std;
class calculator{
    int x , y;
public:
void setdata(int a , int b){
    x=a;
    y=b;
}
void addition(){
    cout<<"the sum is "<<x + y<<endl;
}
void substract(){
    cout<<"the diffrence is "<<x-y<<endl;
}
void multi(){
    cout<<"the multiply is "<<x*y<<endl;
}
void division(){
    if (y==0)
    {
        cout<<"it is false";
        return ;
    }
    
    cout<<"the division is "<<(float)x/y<<endl;
}
};
int main()
{
    int a, b;
    char t;
    cout<<"WELCOME TO SHIVAM'S CALCULATOR "<<endl;
    cout << "\n enter the first number " << endl;
    cin >> a;
    cout << "enter the operator " << endl;
    cin >> t;
    cout << " enter the second number" << endl;
    cin >> b;
    calculator c;
    c.setdata(a , b);
    if (t == '+')
    {
        c.addition();
    }
    else if (t=='-')
    {
        c.substract();
    }
    else if (t=='*')
    {
        c.multi();
    }
    else if (t=='/')
    {
        c.division();
    }
    else{
        cout<<"invalid";
    }

    return 0;
}