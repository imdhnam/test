#include<iostream>
using namespace std;

class C1
{
    int value = 7;
public:
    void Prt(ostream& out)
    {
        out << value << endl;
    }
}

int main() 
{
    C1 c;
    ostream out;
    c.Prt(out);

    cout << out.out();
    cout << "modify 2" << endl;
    return 0;
}