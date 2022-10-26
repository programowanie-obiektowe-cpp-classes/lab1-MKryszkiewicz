class Wektor2D
{
    public:
    //Konstruktory
        Wektor2D() : x1(0), x2(0) {}
        Wektor2D(double x, double y) : x1(x), x2(y) {}
        Wektor2D(const Wektor2D& f) : x1(f.x1), x2(f.x2) {}
    //Settery
        void setX(double var)
        {
            x1=  var;
        }
        void setY(double var)
        {
            x2=  var;
        }
    //Gettery    
        double getX()
        {
            return x1;
        }
        double getY()
        {
            return x2;
        }
    //Operatory
        Wektor2D operator+ (const Wektor2D& prawy)
        {
            Wektor2D tmp;
            tmp.x1 = prawy.x1;
            tmp.x1 += this->x1;
            tmp.x2 = prawy.x2;
            tmp.x2 += this->x2;
            return tmp;
        }

        double operator* (const Wektor2D& prawy)
        {
            double tmp1, tmp2;
            tmp1 = prawy.x1;
            tmp1 *= this->x1;
            tmp2= prawy.x2;
            tmp2 *= this->x2;
            return tmp1+tmp2;
        }
    private:
        double x2;
        double x1;
};