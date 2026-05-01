#include<iostream>
#include<string>
using namespace std;
class account{
	string accountno;
	double ballence;
	public:
	account(string a, double b){
		accountno=a;
		ballence=b;
	}
	account operator+(account a){
		double newballence=ballence+a.ballence;
		string newaccount="combined account";
		account temp(newaccount,newballence);
		return temp;
	}	
	void display(){
		cout<<"accountno:"<<accountno<<endl;
		cout<<"ballence:"<<ballence<<endl;
	}
};
int main(){
	account acc1("101",100);
	account acc2("102",200);
	account acc3=acc1+acc2;
	cout<<"first account:"<<endl;
	acc1.display();
	cout<<"second account:"<<endl;
	acc2.display();
	cout<<"combined account:"<<endl;
	acc3.display();
	return 0;
}







