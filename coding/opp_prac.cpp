//                               opps practices
using namespace std;
#include <iostream>

/*
class marks{
	int maths;
	int sci;
	int total;
	
	public:
		int mathsresult(){
			int maths=50;
			cout<<"Enter maths marks\n";
		//	cin>>maths<<endl;
			
		}
		
		void sciresult(){
			int sci=90;
			cout<<"Enter sci marks\n";
		//	cin>>sci<<endl;
		}
		
		void totalmarks(){
			int total=140;
			cout<<"your t.marks is :\n";
			
		}
};
*/

class A{
	private:
		int a;
	
	protected:
		int b;
	public:
		int c;
		
};

int main(){
	
//	marks obj;
//	obj.mathsresult();
//	obj.sciresult();
//	obj.totalmarks();
	
	A obj;
//	obj.a;
	obj.c;
//	obj.b;
	
//	cout<<obj.a<<endl; // not allowed	
//	cout<<obj.b<<endl;// not allowed
	cout<<obj.c<<endl;// allowed
	
}
