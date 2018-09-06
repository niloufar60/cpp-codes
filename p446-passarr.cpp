//
//  p446-passarr.cpp
//  
//
//  Created by Niloufar on 2018-08-17.
//

#include <iostream>
using namespace std;
const int MAX=5;

int main()
{
    void centimize(double*);
    
    double varray[MAX]={10,43.1,95.9,59.7,87.3};
    centimize(varray);
    
    for (int j=0;j<MAX;j++)
    {
        cout << "varray[" << j << "]= "
        << varray[j] << " centimeters" << endl;
    }
    
    return 0;
}

void centimize(double* ptrd)
{
    for (int j=0;j<MAX;j++)
    {
        *(ptrd+j)=*(ptrd+j)*2.54;
    }
}
