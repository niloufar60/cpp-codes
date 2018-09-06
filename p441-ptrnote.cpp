//
//  p441-ptrnote.cpp
//  
//
//  Created by Niloufar on 2018-08-17.
//

#include <iostream>
using namespace std;

int main()
{
    int intarray[5]={31,54,77,52,93};
    for (int j=0;j<5;j++)
    {
        cout << *(intarray+j) <<endl;
    }
    return 0;
    
}
