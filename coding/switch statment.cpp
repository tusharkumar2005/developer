using namespace std;
#include <iostream>

int main(){
	
	int input;
	cout << "Enter the no: \n";
	cin>>input;
	
	switch(input){
		
		case 1 :cout<<"monday";
		break;
		
		case 2 :cout<<"tuesday";
		break;
		
		case 3 :cout<<"wednsday";
		break;
		
		case 4 :cout<<"thrusday";
		break;
		
		case 5 :cout<<"friday";
		break;
		
		case 6 :cout<<"saturday";
		break;
		
		case 7 :cout<<"sunday";
		break;
		
		default :cout<< "invalid no.";
	}
	
	
	return 0;
}
