#include<iostream>
using namespace std;

int main(){
	int n{0};
	setlocale(LC_CTYPE, "Spanish");
	cout<<"ingrese un n�mero: ";
	cin>>n;
	cout<<endl;
	cout<<"Su n�mero es: "<<n<<endl;
	return 0;
}
