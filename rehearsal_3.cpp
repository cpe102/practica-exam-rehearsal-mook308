#include <iostream>
#include<cmath>
using namespace std;
//Write sumSqrt() here.
double sumSqrt(int N){
    int i = 0,y = 0;
    double z=0;
    while(i<N){
        z+=1/sqrt(i+1);
        i++;
        }
    
    if(N<=0){
        return y;
    }else{
        return z;
    }
    
    
}

int main()
{
    double a = sumSqrt(-5);
    double b = sumSqrt(3);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
 
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";


}
