#include <iostream>
using namespace std;


int main(){
	
	int a,b,c;
	
	cout <<"Enter First Number : ";
	cin>>a;
	
	cout <<"Enter Second Number : ";
	cin>>b;
	
	cout<<"select 1 for + "<<endl;
	cout<<"select 2 for - "<<endl;
	cout<<"select 3 for * "<<endl;
	cout<<"select 4 for / "<<endl;
	
	
	cout<<"Enter your operator : ";
	cin>>c;
	

	if(c==1){
		cout<<"Yours Sum is " <<a+b<<endl;
	}
	else if (c==2){
		cout<<"Yours Sub is " <<a-b<<endl;
	}
	else if (c==3){
		cout<<"Yours multi is " <<a*b<<endl;
	}
	else if (c==4){
		cout<<"Yours Divide is " <<a/b<<endl;
	}
	else {
		cout<<"Invalide Operater "<<endl;
	}		
		
	return 0;
	
	
}
