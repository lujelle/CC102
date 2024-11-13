#include <iostream>

using namespace std;

int main ()
{
	int temperature;
    cout << "enter the temparature in degree" ;
	cin >> temperature;
	
	if(temperature < 32) {
	   cout << "bring a heavy jacket!"; 
	   
	}
	else if(temperature >=32 && temperature <=50) {
	   cout << "bring a light jacket!";
	} 
	else {
        cout << "Not to bring any jacket!!";		
	}
	return 0;
	
} 