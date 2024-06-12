#include <iostream>
using namespace std;
class complex
{
    private:
    int x,y;

    public:
    complex(){}

    complex(int a, int b)
    {
        x=a;y=b;
    }

    void display()
    {
        cout<<x<<"+i"<<y<<endl;
    }

    complex operator +(complex c)
    { complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return(temp);
    }
};

int main() 
{complex c1(5,4),c2(3,5),c3;
c3= c1 + c2;
c3.display();
    return 0;
}