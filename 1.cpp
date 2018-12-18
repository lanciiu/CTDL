#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Diem{
	private:
		int x,y;
	public:
//ham tao co doi so
		Diem(int h=0, int t=0){
			x=h;
			y=t;
		}
//Nhap
		void NhapDiem(){
			cout<<"Nhap toa do x, y: ";
			cin>>x>>y;
		}
//In
		void InDiem(){
			cout<<"Toa Do(x,y)= ("<<x<<","<<y<<")";
			cout<<endl;
		}
//lay ra gtri x
	int GiatriX(){
	return x;
}
//lay ra gtri y
	int GiatriY(){
	return y;
}
//tinh khoang cach
	float KhoangCach(Diem m){
		return sqrt(pow(m.x-x,2)+pow(m.y-y,2));
	}
};

//ham main()
main(){
	Diem A(3,4);
	A.InDiem();
	//Tao diem B voi gtri  nhap tu ban phim
	Diem B;
	B.NhapDiem();
	B.InDiem();
	//Tao diem C doi xung voi B qua goc toa do
	Diem C(-B.GiatriX(),-B.GiatriY());
	C.InDiem();	
	//khoang cach tu B den 0
	Diem(0,0);
	cout<<"Khoang cach tu B den 0 "<<B.KhoangCach(0)<<endl;
	cout<<"Khoang cach tu C den B "<<C.KhoangCach(B);
	
}	
