//
//  p249-statdata.cpp
//  
//
//  Created by Niloufar on 2018-07-31.
//

#include <iostream>
using namespace std;

class foo
{
private:
    static int count;
public:
    foo()
    {
        count++;
    }
    int getCount()
    {
        return count;
    }
};

int foo::count=0;

int main()

{
    
    foo f1,f2,f3;

    
    cout << "count: " << f1.getCount() << endl;
    cout << "count: " << f2.getCount()<<endl;
    cout << "count: " << f3.getCount()<<endl;
    
    return 0;
    
}
