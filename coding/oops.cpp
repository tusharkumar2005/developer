#include <iostream>
using namespace std;

//												object orinted programmer

class person {
	
	int run;
	string msg;
	
	public:
		void play(){
			run=50;
			cout<< "today i scored " <<run<< "\nruns"<<endl;
		}
		
		void walk(){
			msg="today i walk 2km..!";
			cout<<msg;
			
		}
};

int main(){
	
	person obj;
	obj.play();
	obj.walk();
	return 0;
}
