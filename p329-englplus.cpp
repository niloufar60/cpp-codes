//
//  p329-englplus.cpp
//  
//
//  Created by Niloufar on 2018-07-31.
//

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0),inches(0)
    {
        
    }
    Distance(int ft, float in) : feet(ft),inches(in)
    {
        
    }
    void get_dist()
    {
        cout << "\nEnter feet: ";
        cin>> feet;
        cout << "\nEnter inches: ";
        cin>> inches;
    }
    void show_dist()
    {
        cout << feet << "\'-"<< inches << "\""<<endl;
    }
    Distance operator + (Distance) const;
};

Distance Distance :: operator + (Distance d2) const
{
    int f=feet+d2.feet;
    float i=inches+d2.inches;
    if (i>=12.0)
    {
        i=i-12.0;
        f++;
    }
    return Distance(f,i);
}

int main()
{
    
    Distance dist1,dist3,dist4;
    dist1.get_dist();
    
    Distance dist2(11,6.25);
    dist3=dist1+dist2;
    dist4=dist1+dist2+dist3;
    
    cout << "\ndist1= ";
    dist1.show_dist();
    cout << endl;
    cout<<"\ndist2= ";
    dist2.show_dist();
    cout << endl;
    cout << "\ndist3= ";
    dist3.show_dist();
    cout << endl;
    cout << "dist4= ";
    dist4.show_dist();
    cout << endl;
    
    return 0;
    
}



































