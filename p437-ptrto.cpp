//
//  p437-ptrto.cpp
//  
//
//  Created by Niloufar on 2018-08-17.
//

#include <iostream>
using namespace std;

int main()
{
    int var1, var2;
    int* ptr;
    
    ptr=&var1;
    *ptr=37;
    var2=*ptr;
    
    cout << var2 << "  " << var1 << endl;
    return 0;
    
}
