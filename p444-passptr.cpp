//
//  p444-passptr.cpp
//  
//
//  Created by Niloufar on 2018-08-17.
//

#include <iostream>
using namespace std;

int main()
{
    void centimize(double*);
    
    double var=10.0;
    cout << "var= " << var << " inches" <<endl;
    
    centimize(&var);
    cout << "var= " << var << " centimeters" << endl;
    return 0;
}
void centimize(double *ptrd)
{
    *ptrd=*ptrd*2.54;
}
