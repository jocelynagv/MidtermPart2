#include <iostream>
using namespace std;

int main()
{
    int x = 12;
    int y = 12;
    while (x >= 1)
    {
        cout << "Table of " << x << " in reverse "<<endl;
        cout << "=======================" << endl;

            while (y>=1)
            {
                cout<<x<<" by "<< y << " ---> " << x * y << endl;
                y--;
            }
        y = 12;
        x--;
    }
}
    
