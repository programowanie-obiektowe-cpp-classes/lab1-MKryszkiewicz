#include <iostream>

using namespace std;

class Wektor2D
{
    public:
        Wektor2D ()
        {
            wektor[0] = wektor[1] = 0;
            cout<<"domyslny"<<endl;
        }
        Wektor2D (float x, float y)
        {
            wektor[0] = x;
            wektor[1] = y;
            cout<<"parametryczny"<<endl;
        }
        void setX(float var)
        {
            wektor[0]=  var;
            cout<<"setterx"<<endl;
        }
        void setY(float var)
        {
            wektor[0]=  var;
            cout<<"settery"<<endl;
        }
    private:
        float wektor[2];
};
