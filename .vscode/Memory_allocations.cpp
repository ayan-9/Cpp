#include<iostream>
using namespace std;

class University{
	 public:
	 string name;
	 int year;
	 
	 University(string name1, int year2){
	 	name = name1;
	 	year = year2;
	 }
	 
};
int main(){
		University u("NED",20);
	cout << u.name << endl;
	cout << u.year << endl;

	return 0;
}