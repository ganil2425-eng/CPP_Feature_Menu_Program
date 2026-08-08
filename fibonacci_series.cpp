#include <iostream>
using namespace std;

class fibonacci
{
    public:
    void series(int end)
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
};

int main() 
{
    int n;
    cout << "Enter the fibonacci end: ";
    cin >> n;
    
    fibonacci f;
    f.series(n);
    return 0;
}