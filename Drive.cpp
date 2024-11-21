#include <iostream>

using namespace std;

int main()
{
	int age;
	 cout << " what is your age?";
	 cin >> age;
	if(age < 16) {
	  cout << " too young to drive";
	}else if(age == 16){
		cout << "Better clear the road";
	}else{	
		cout << "you are getting pretty old";
	}	
	return 0;
}