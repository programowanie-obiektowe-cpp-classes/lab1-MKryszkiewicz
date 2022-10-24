class Wektor2D
{
    public:
    //Konstruktory
        Wektor2D ()
        {
            wektor[0] = wektor[1] = 0;
        }
        Wektor2D (double x, double y)
        {
            wektor[0] = x;
            wektor[1] = y;
        }
    //Settery
        void setX(double var)
        {
            wektor[0]=  var;
        }
        void setY(double var)
        {
            wektor[0]=  var;
        }
    //Gettery    
        double getX()
        {
            return wektor[0];
        }
        double getY()
        {
            return wektor[1];
        }
    private:
        double wektor[2];
};