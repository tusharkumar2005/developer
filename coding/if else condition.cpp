#include <iostream>
using namespace std;

int main(){
	
	int age;
	
	cout<<"enter your age"<<endl;
	cin>>age;
/*	
	if (age>=150){
		
		cout<<"invalid age";
	}
	
	else if (age >=18){
		cout<<"you can vote";
		
}
	else
	{
		
		cout<<"sorry,you can not vote";
	}
*/
	switch (age){
	
	
	case 12:
		cout<<"you are 10 year old";
		break;
	
	case 18:
		cout<<"you are 18 year old";
		break;
	
	default :
		cout<<"you are dis match";
		break;
				
}
}

	
	


