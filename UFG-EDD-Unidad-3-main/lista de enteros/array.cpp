#include <iostream>
#include <array>
//Jonathan Velasquez VP100717
using namespace std;

int main (int argc, char *argv[]) {
	array<int, 3> a = {8, 9, 10};
	
	cout << a.size() << endl;
	cout << a.front() << endl;
	cout << a.back() << endl;
	
	cout << a[0] << a[1] << a[2] << endl;
	
	return 0;
}
