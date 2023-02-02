#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,d1;
    cout<<"To solve a Quadratic Equation of the general form:"
    cout<<"Enter the values of a,b & c";
    cin>>a>>b>>c;
    d = sqrt((b*b) - (4*a*c));
    if (d<0)
    cout<<"Roots are imaginary";
    else{
        d = -b + sqrt((b*b) - (4*a*c))/2*a;
        d1 = -b - sqrt((b*b) - (4*a*c))/2*a;
        cout<<"Roots are: "<<d<<d1;
    }
}