#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
class INPUT
{
public: 
    int x;
    double y;
    string z;
};
int main() {
    INPUT P;
    ifstream myfile;
    myfile.open("C:\\Users\\ASUS\\Documents\\GitHub\\myproject3\\HW\\1.txt");
    myfile >> P.z;
    myfile >> P.y;
    myfile >> P.x;
    cout << P.z << endl << P.x << endl << P.y;   
    myfile.close();
    
    return 0;
}