#include <iostream>

using namespace std;

void pause(){
	
	cout << "Please Press Enter to conintue..." << endl;
	cin.ignore(100,'\n');
	cin.get();
}


int main(){
	
	
	pause();
	return 0;	
}
