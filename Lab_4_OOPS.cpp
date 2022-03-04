#include<iostream>
#include<math.h>
using namespace std;

class Exponent
{
    public:
    double index(double x, int y)
    {
        int output = 1;
        for(int i = 1; i<=y; i++)
            output = output*x;
        return output;
    }

    double index(double x)
    {
        int y = 2;
        double m;
        m = pow(x,y);
        return m;
    }
};

int main()
{
    int result = 0;
    Exponent pow;
    result = pow.index(2,5);
    cout << "The result of 2^5 is: " << result;
    return 0;
}