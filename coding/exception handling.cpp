using namespace std;
#include <iostream>

int main(){
	
	int a,b,c;
	cout<<"test started\n";
	
	cout<<"enter first no.\n";
	cin>>a;
	
	cout<<"enter second no.\n";
	cin>>b;
	
	try{
		
		if(b==0)
		throw b;
		
		c=a/b;
		cout<<"Result: "<<c;
	}
	
	catch(int x){
		
		cout<<"can't devided by " <<x;
	}
		
	
	cout<<endl<<"Task completed....!";
	
}
