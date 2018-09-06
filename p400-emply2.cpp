//
//  p400-emply2.cpp
//  
//
//  Created by Niloufar on 2018-08-16.
//

#include <iostream>
using namespace std;
const int LEN = 80;

class employee
{
private:
    char name[LEN];
    unsigned long number;
public:
    void getdata()
    {
        cout << "\nEnter last name: ";
        cin >> name;
        cout << "\nEnter number: ";
        cin >> number;
    }
    void putdata() const
    {
        cout << "\nName: " << name;
        cout << "\nNumber: " << number;
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
                cout << "\nEnter title: ";
                cin>> title;
                cout << "\nEnter golf club dues: ";
                cin >> dues;
                
            }
            void putdata() const
            {
                employee::putdata();
                cout << "\nTitle: " << title;
                cout << "\nGolf club dues: " << dues;
            }
        };
        
class scientist:public employee

        {
        private:
            int pubs;
        public:
            void getdata()
            {
                employee::getdata();
                cout << "\nEnter number of pubs: ";
                cin >> pubs;
            }
            void putdata() const
            {
                employee::putdata();
                cout << "\nNumber of publications: "<<pubs;
                
            }
        };
        
        class laborer : public employee
        {
            
        };
        
        class foreman : public laborer
        {
        private:
            float qoutas;
        public:
            void getdata()
            {
                laborer::getdata();
                cout << "\nEnter qoutas: ";
                cin >> qoutas;
            
            }
            void putdata() const
            {
                laborer::putdata();
                cout << "\nQoutas: " << qoutas;
            }
        };
        
        int main()
        {
            laborer l1;
            foreman f1;
            
            cout << "\nEnter data for laborer 1" ;
            l1.getdata();
            cout << "\nEnter data for foreman 1";
            f1.getdata();
            
            cout << "\nData on Laborer 1";
            l1.putdata();
            cout << "\nData on foreman 1";
            f1.putdata();
            cout << endl;
            
            return 0;
        }
        
        
        
     
        
        
        
        
        
        
        
        
        
        
        
        
        










