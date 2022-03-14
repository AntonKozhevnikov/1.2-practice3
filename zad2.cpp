#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    float a, b;
    char c;
    if(1)
    {
    try //конкретно этот try не работате, не понял почему
        {
            if (typeid(a) == typeid(char) || typeid(b) == typeid(char))
            {
                throw 1;
            }
            {
            cout<<"vvedite 1 chislo= ";
    cin>>a;
    cout<<"vvedite 2 chislo= ";
    cin>> b;
    cout<<"vvedite operaciu ";
    cin>> c;
            }
        }
        catch(int i)
        {
            cout << "enter a number, not a symbol" << endl;
        }}
    if (c=='+')
    {
        cout<<"resultat= "<<a+b;
    }
    if (c=='-')
    {
        cout<<"resultat= "<<a-b;
    }
    if (c=='*')
    {
        cout<<"resultat= "<<a*b;
    }
    if (c=='/')
    {
      try
        {
            if (b == 0)
            {
                throw 2;
            }
            cout<<"resultat= "<<a*(1./b);
        }
        catch(int i)
        {
            cout << "do not divide by 0" << endl;
        }
    }
    return 0;
}
