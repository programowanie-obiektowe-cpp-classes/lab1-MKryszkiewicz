class Wektor2D
{
    public:
        Wektor2D ()
        {
            wektor[0] = wektor[1] = 0;
        }
        Wektor2D (float x, float y)
        {
            wektor[0] = x;
            wektor[1] = y;
        }
        void setX(float var)
        {
            wektor[0]=  var;
        }
        void setY(float var)
        {
            wektor[0]=  var;
        }
    private:
        float wektor[2];
};