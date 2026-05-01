#include<iostream>
using namespace std;
class person{

	 public:
	string name;
	string address;
	float height;
	void setdata(string a,string b,float c)
	{
		name =a;
		address =b;
		height =c;
	}
	void display()
	{
		cout<<address;
		cout<<name;
		cout<<height;
	}
	};
	class student:public person
	{
		public:
			int rollno;
			float gpa;
			char grade;
			void getdata(){
				cout<<"Enter rollno:";
				cin>>rollno;
				cout<<"Enter GPA:";
				cin>>gpa;
				cout<<"Enter grade:";
				 cin>>grade;
			}
			void display(){
			cout<<rollno<<endl;
			cout<<gpa<<endl;
			cout<<grade<<endl;
			
			}
	};

	int main(){
		student s;
		s.getdata();
		s.display();
		s.person ::setdata("ali","gg",3);
		
		
	}
