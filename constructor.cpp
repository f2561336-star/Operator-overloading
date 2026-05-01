#include <iostream>
using namespace std;
class student{
	string name;
	int rollno;
	float gpa;
	
	public:
	void getdata(string a,int b, float c ){
	name=a;
	rollno=b;
	gpa=c;
	}
	void display(){
	cout<<name<<endl;
	cout<<rollno<<endl;
	cout<<gpa<<endl;
	}
};
int main()
{
	student s1;
	s1.getdata( "Faizan",31,2.68);
	s1.display();
}
