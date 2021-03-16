

#include <iostream>
#include <cstdlib>
#include "Estico.h"
#include<vector>
using namespace std;


int main()
{
    Estico estatico();
    Estico* e1 = new Estico();

    cout << e1->getCont()<<endl;
    
    vector<int> num;
    num.push_back(1);
    num.push_back(4);

    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << endl;
    }
    for (auto value : num)
    {
        cout << value << endl;
    } 
    system("pause");
    return 0;
}
