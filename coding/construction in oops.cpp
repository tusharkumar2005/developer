using namespace std;
#include <iostream>

class A {
  public:
	A(){  // default construction
		int a=10;
		int b=20;
		cout<<a+b<<endl;
	}
};

class B{
	int x,y;
	public:
		B(int c,int d){ // parameterized construction
		
		x=c;  y=d;
			cout<<x<<ends<<y<<endl;
		}
		A(A&ref){
			
			x=ref.x;
			y=ref.y;
			
			cout<<x<<ends<<y<<;
		}
}; 

int main(){
	A obj;
	B total(50,30);
	
	return 0;
	
}
