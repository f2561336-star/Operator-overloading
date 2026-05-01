#include<iostream>
using namespace std;
class student{
	private:
	string name;
	int rollno;
	float gpa;
	
	public:
	void setdata(){
	cout<<"enter name ";
	cin>>name;
	cout<<"enter rollno" ;
	cin>>rollno;
	cout<<"enter gpa";
	cin>>gpa;
	}
	void display()
	{
	cout<<name<<endl;
	cout<<rollno<<endl;
	cout<<gpa<<endl;
	}
	
};

int main()
{
   student s1;
   s1.setdata();
   s1.display();
} 




