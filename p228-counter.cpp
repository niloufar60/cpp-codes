//
//  p228-counter.cpp
//  
//
//  Created by Niloufar on 2018-07-30.
//

#include <iostream>
using namespace std;

class Counter
{
public:
    Counter () : count(0)
    {
        
    }
    void inc_count()
    {
        count++;
    }
     int get_count()
    {
            return count;
    }
private:
    unsigned int count;
};

int main()
{

Counter c1,c2;

cout << "\nc1= " << c1.get_count();
cout << "\nc2= " << c2.get_count();

c1.inc_count();
c2.inc_count();
c2.inc_count();

cout << "\nc1= " << c1.get_count();
cout << "\nc2= " << c2.get_count();

cout << endl;
return 0;
}
