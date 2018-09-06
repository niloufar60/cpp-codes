//
//  p389-employ.cpp
//  
//
//  Created by Niloufar on 2018-08-11.
//

#include <iostream>
using namespace std;
const int LEN = 80;

class employee {
private:
    char name[LEN];
    unsigned long number ;
public:
    void getdata()
    {
        cout << "\n Enter last name: " ;
        cin>> name;
        cout << "  Enter number: ";
        cin >> number;
    }
    void putdata() const
    {
        cout << "\n Name: " << name;
        cout << "\n Number: " << number;
    }
};
class manager : public employee
{
private:
    char title[LEN];
    double dues;
public:
    void getdata()
    {
        employee::getdata();
        cout << "  Enter title: ";
        cin >> title;
        cout << "  Enter golf club dues: ";
        cin >> dues;
    }
    void putdata() const
    {
        employee::putdata();
        cout <<"\n Title: " << title;
        cout << "\n Golf club dues: " << dues;
    }
};
class scientist : public employee
{
private:
    int pubs;
public:
    void getdata()
    {
        cout << " Enter number of pubs: " ;
        cin >> pubs;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Number of publications: " << pubs;
    }
    
};
class laborer : public employee
{
    
};
int main()
{
    manager m1,m2;
    scientist s1;
    laborer l1;
    
    cout << endl;
    cout << "\n Enter data for manager 1:";
    m1.getdata();
    
    cout << "\n Enter data for maganer 2:";
    m2.getdata();
    
    cout << "\n Enter data for scientist 1:";
    s1.getdata();
    
    cout << "\n Enter data for laborer 1:";
    l1.getdata();
    
    cout << "\n Data on manager 1: ";
    m1.putdata();
    
    cout << "\n Data on manager 2: ";
    m2.putdata();
    
    cout << "\n Data on scientist 1: ";
    s1.putdata();
    
    cout << "\n Data on laborer 1: ";
    l1.putdata();
    cout << endl;
    
    return 0;
}













































