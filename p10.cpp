# include <iostream>
using namespace std;
int main ()
{
    cout << "Enter the Length " << endl;
    int l;
    cin >> l;
    cout << "Enter the width " << endl;
    int w;
    cin >> w;

    int A;
    A = l*w;

    int P;
    P = 2*(l+w);

    cout << "Area of the Rectangle =  "<< A;
    cout << endl;
    cout << "Perimeter of the Rectangle =  " << P;
    cout << endl;


    return 0;
}

