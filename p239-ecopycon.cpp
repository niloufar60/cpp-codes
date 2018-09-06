//
//  p239-ecopycon.cpp
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
    Distance () : feet(0),inches(0.0)
    {
        
    }
    Distance(int ft,float in) : feet(ft),inches(in)
    {
        
    }
    void getDist()
    {
        cout << "\nEnter feet: " ;
        cin >> feet;
        cout << "\nEnter inches: ";
        cin>> inches;
    }
    void showDist()
    {
        cout << feet << "\'-"<<inches << "\"";
    }
};
int main()
{
    Distance dist1(11,6.25);
    Distance dist2 (dist1);
    Distance dist3 = dist1;
    
    cout << "\ndist1= ";
    dist1.showDist();
    cout << "\ndist2= ";
    dist2.showDist();
    cout << "\ndist3= ";
    dist3.showDist();
    cout << endl;
    
    return 0;
}
