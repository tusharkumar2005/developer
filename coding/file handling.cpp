using namespace std;
#include <iostream>
#include <fstream>

int main(){
	
	ofstream newfile("C:\\Users\\Tushar Kumar\\Desktop\\kanish.txt");
	cout<<"file created succesfully...!";
 	newfile<<"hello kanish ";
	
	newfile.close();
	cout<<newfile;

/*	
	cout<<"*"<<endl;
	cout<<"**"<<endl;
	cout<<"***"<<endl;
	cout<<"****"<<endl;
	cout<<"******"<<endl;
	
*/	
	return 0;
	
	
	
}
