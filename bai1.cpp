#include<iostream>
#include<cmath>
using namespace std;
class So{
	private:
		int A;
		int B;
		int C;
		int D;
	public:
		So(int AA, int BB, int CC, int DD){
			A=AA;
			B=BB;
			C=CC;
			D=DD;
		}
		int Tinh(){
			int kq;
			kq=A+(B-abs(C))*D;
			return kq;
		}
};
int main(){
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	So S(A,B,C,D);
	cout<<S.Tinh();
}
