#include<iostream>
#include<string>
using namespace std;
struct student {
	private:
	string name;
	int rollno;
	float gpa;
	public:
		void setdata(){
			cout<<"enter your name:";
			cin>>name;
			cout<<"enter your rollno:";
			cin>>rollno;
			cout<<"enter your gpa:";
			cin>>gpa;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<rollno<<endl;
			cout<<gpa<<endl;
		}
};
int main(){
	student s1;
	s1.setdata();
	s1.display();
}
