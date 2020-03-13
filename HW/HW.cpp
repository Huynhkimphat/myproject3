#include <iostream>
#include <fstream>
#include<string>

using namespace std;
class INPUT
{
public:
        int x;
        double y;
        string z;
};
int main() {
    ofstream myfile;
    myfile.open("1.txt");
    int w;
    cin >> w;
    while (w != 0)
    {
        INPUT p;
        cout << "Name:";
        cin >> p.z;
        cout << "Age: ";
        cin >> p.x;
        cout << "Avg: ";
        cin >> p.y;
        myfile << p.z << endl << p.x << endl << p.y << endl;
        w--;
    }
    myfile.close();
    return 0;
}