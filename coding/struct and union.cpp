using namespace std;
#include <iostream>
//                        	    	struct mathord

/*
struct stu{
	
	int roll;
	char name[20];
	float marks;
	
};

int main(){
	
	struct stu s;
	cout<<"Enter student roll no.\n";
	cin>>s.roll;
	
	cout<<"Enter student name \n";
	cin>>s.name;
	
	cout<<"Enter student marks\n";
	cin>>s.marks;
	
	cout<<"your detail\n"<<s.roll<<endl<<s.name<<endl<<s.marks;
	
}

*/

//                                      union methord						

/*
union stu{
	
	int roll;
	char name[20];
	float marks;
	
};

int main(){
	
	union stu s;
	cout<<"Enter student roll no.\n";
	cin>>s.roll;
	cout<<s.roll<<endl;
	
	cout<<"Enter student name \n";
	cin>>s.name;
	cout<<s.name<<endl;;
	
	cout<<"Enter student marks\n";
	cin>>s.marks;
	cout<<s.marks<<endl;;
	
//	cout<<"your detail\n"<<s.roll<<endl<<s.name<<endl<<s.marks;
	
}
*/

int main(){

enum gender{ //                       enum methord
	male,female
};
cout<<male;
}
