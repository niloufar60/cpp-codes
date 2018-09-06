//
//  p226-englobj.cpp
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
    void setdist(int ft,float in)
    {
        feet=ft;
        inches=in;
    }
    void getdist()
    {
        cout << "Enter feet: " ;
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << "\"";
    }
};
int main ()
{
    Distance dist1,dist2;
    
    dist1.setdist(11,6.25);
    dist2.getdist();
    
    cout << "\ndist1= ";
    dist1.showdist();
    cout << "\ndist2= ";
    dist2.showdist();
    cout << endl;
    return 0;
}
