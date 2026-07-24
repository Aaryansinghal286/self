// WAP using inline function to calculate simple interest. Also use function overloading and default arguments.
#include <iostream>
using namespace std;
inline float SI(double p, float r, float t=10)
{
    return (p*r*t)/100;
}
float SI(double P){
    return (P*8.15*10)/100;
}
int main()
{
    cout<<SI(2000, 8.15, 8)<<endl<<
    SI(2000, 9.10)<<endl<<
    SI(2300)<<endl;
    return 0;
}
