//
//  p233-englcon.cpp
//  
//
//  Created by Niloufar on 2018-07-30.
//

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0),inches(0.0);
    {
        
    }
    Distance (int ft,float in) : feet(ft),inches(in)
    {
        
    }
    void getdist ()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\n Enter inches: ";
        cin >> inches;

    }
    void showdist()
    {
        cout << feet << "\'-" << inches << "\"";
    }
    void add_dist (Distance d1, Distance D2);
};

void Distance::add_dist(Distance d2,Distance d3)
{
    inches=d2.inches+d3.inches;
    feet=0;
    in (inches>=12.0)
    {
        inches=inches-12.0;
        feet++
    }
    feet = feet+d2.feet+d3.feet;
}
int main()
{
    Distance dist1,dist3;
    Distance dist2(11,6.25);
    
    dist1.getdist()
    dist3.add_dist(dist1,dist2);
    
    cout << "\ndist1= ";
    dist1.showdist();
    cout << "\ndist2= ";
    dist2.showdist();
    cout << "\ndist3= ";
    dist3.showdist();
    
    cout << endl;
    return 0;
}














