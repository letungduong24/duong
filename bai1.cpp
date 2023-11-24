
B?n dã g?i
#include<iostream>
using namespace std;
class Songuyen{
	private:
		int A;
		int B;
	public:
		Songuyen(int AA, int BB){
			A=AA;
			B=BB;
		}
		int Tinhtong(){
			int sum=0;
			sum=A+B;
			return sum;
		}
};
int main(){
	int A,B;
	cin>>A>>B;
	Songuyen S(A,B);
	cout<<S.Tinhtong();
}
