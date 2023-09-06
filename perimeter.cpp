#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

class perimeter
{
    float p;
    public:
        perimeter(float r)
        { 
            p = 2 * 3.14 * r;
        }
        perimeter(float l, float b)
        {
            p = 2 * (l + b);
        }
        perimeter(float a, float b, float c)
        {
            p = a + b + c;
        }
        void display()
        {
            cout << "\n Perimeter : " << p;
        }
};        
int main() 
{
    int ch;
    float x, y, z;
    do
    {
        cout << "\n\n 1. perimeter of Circle";
        cout << "\n\n 2. perimeter of Rectangle";
        cout << "\n\n 3. perimeter of Triangle";
        cout << "\n\n 0. Exit";
        cout << "\n\n  Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            {
                cout << "\n Enter the diameter of the circle: ";
                 cin >> x;
                perimeter p1(x);
                p1.display();
            }
            break;

            case 2:
            {
                cout << "\n Enter length and breadth of the rectangle: ";
                cin >> x >> y;
                perimeter p2(x,y);
                p2.display();
            }
            break;

            case 3:
            {
                cout << "\n Enter the sides of the triangle: ";
                cin >> x >> y >> z;
                perimeter p3(x,y,z);
                p3.display();
            }
            break;

            case 0:
                    exit(0);

            default:
                    cout << "\n\n Invalid choice...";
        }
    }    
       while(ch!=0);
       return 0; 
    
}       
