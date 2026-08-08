#include <iostream>
using namespace std;

class features
{

    public:

    void f_series(int end)
    {
        int a = 0, b = 1, c;
        for(int i=0; i<end; i++)
        {
            cout << a << endl;
            c = a+b;
            a = b;
            b = c;
        }
    }

    void is_even(int num)
    {
        if(num%2==0)
        {
            cout<<"Number is Even"<<endl;
        }
        else
        {
            cout<<"Number is Odd"<<endl;
        }
    }

    void palindrome(int num)
    {
        int copy = num;
        int remainder = 0;
        int reverse = 0;
        while(num!=0)
        {
            remainder = num%10;
            reverse = reverse*10+remainder;
            num = num/10;
        }
        if(copy==reverse)
        {
            cout<<"Number is palindrome = "<<reverse<<endl;
        }
        else
        {
            cout<<"Number is not palindrome = "<<reverse<<endl;
        }
    }
};

int main() 
{

    features f;
    
    while(true)
    {
        int choose;
        cout<<"========MENU========"<<endl;
        cout<<"1.fibonacci series"<<endl;
        cout<<"2.Even/Odd"<<endl;
        cout<<"3.palindrome"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Choose: ";
        cin>>choose;
        if(choose==1)
        {
            int end;
            cout<<"Enter fibonacci series end: ";
            cin>>end;
            f.f_series(end);
        }
        else if(choose==2)
        {
            int num;
            cout<<"Enter number: ";
            cin>>num;
            f.is_even(num);
        }
        else if(choose==3)
        {
            int num;
            cout<<"Enter number: ";
            cin>>num;
            f.palindrome(num);
        }
        else if(choose==4)
        {
            cout<<"Exit Successfuly"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}
