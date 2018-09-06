//
//  p253-endconst.cpp
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
    Distance() : feet(0),inches(0.0)
    {
        
    }
    Distance(int ft,float in) : feet(ft),inches(in)
    {
        
    }
    void getDist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin>> inches;
    }
    void showDist() const
    {
        cout << feet << "\'-"<< inches<< "\""<<endl;
    }
    Distance addDist(const Distance&) const;
};

Distance Distance :: addDist(const Distance & d2) const
{
    Distance temp;
    temp.inches = inches+d2.inches;
    if (temp.inches>12.0)
    {
        temp.inches=temp.inches-12;
        temp.feet=1;
    }
    temp.feet=temp.feet+feet+d2.feet;
    return temp;
}
int main()
{
    Distance dist1,dist3;
    Distance dist2(11,6.25);
    
    dist1.getDist();
    dist3=dist1.addDist(dist2);
    
    cout << "\ndist1= ";
    dist1.showDist();
    cout<< "\ndist2= ";
    dist2.showDist();
    cout << "\ndist3= ";
    dist3.showDist();
    
    cout << endl;
    
    return 0;
}





