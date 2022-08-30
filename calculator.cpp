#include <iostream>
#include<math.h>
using namespace  std;

int main ()
{
    int x,y;
    char op;
    cout<<"Enter thr first number: ";
    cin>>x;
    cout<<endl<<"Enter one of this operator: ' + , - , * , /' ";
    cin>>op;
    cout<<endl<<"Enter the second number: ";
    cin>>y;
    
    if(op == '+'){
        cout<<"The sum of "<<x<<"+"<<y<<" is "<<x+y;
    }
    else if(op == '-'){
        cout<<"The sub of "<<x<<"-"<<y<<" is "<<x-y;
    }
    else if(op == '*'){
        cout<<"The mult of "<<x<<"*"<<y<<" is "<<x*y;
    }
    else if(op == '/'){
        cout<<"The l9isma of "<<x<<"/"<<y<<" is "<<x/y;
    }
    else{
        cout<<"You enter the wrong operator!"<<endl;
        cout<<"Please calcule again!";
    }
}