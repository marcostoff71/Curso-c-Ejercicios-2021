#include <iostream>
#include <stdlib.h>
#include <vector> 

int main(int argc, char** argv) {
	vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Size : " << g1.size(); 
    cout << "\nCapacity : " << g1.capacity(); 
    cout << "\nMax_Size : " << g1.max_size(); 
	
	using namespace std;
	return 0;
}
