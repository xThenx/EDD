#include <iostream>
#include <vector>
//Jonathan Velasquez VP100717

using namespace std;

int main (int argc, char *argv[]){
	
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	
	cout << v.size() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	
	return 0;
}

