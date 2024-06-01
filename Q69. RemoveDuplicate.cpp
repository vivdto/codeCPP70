#include <iostream> 
#include <set> 
using namespace std; 

int main() 
{ 
	int myArray[] = { 2, 1, 5, 4, 3, 5 }; 
	set<int> mySet(myArray, myArray + 6); 

	cout << "Elements in a set are:" << endl; 
	for (auto elem : mySet) { 
		cout << elem << " "; 
	} 

	return 0; 
}
