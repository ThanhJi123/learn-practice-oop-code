#include<bits/stdc++.h>

using namespace std;

class Vector{
	private :
		double x,y,z;
	public :
		Vector(double x,double y,double z){
			this->x=x;
			this->y=y;
			this->z=z;
		}
		
		friend ostream& operator<<(ostream&,Vector&);
		friend Vector operator+(Vector a,Vector b);
		friend Vector operator-(Vector a,Vector b);
		friend Vector operator*(Vector a,double x);
};
ostream& operator<<(ostream& os,Vector& v){
	os<<"x : "<<v.x<<"   y : "<<v.y<<"   z : "<<v.z<<endl;
}
Vector operator+(Vector a,Vector b){
	return Vector(a.x+b.x,a.y+b.y,a.z+b.z);
}
Vector operator-(Vector a,Vector b){
	return Vector(a.x-b.x,a.y-b.y,a.z-b.z);
}
Vector operator*(Vector a,double x){
	return Vector(a.x*x,a.y*x,a.z*x);
}

main(){
	Vector v1(1,2,3),v2(3,2,1);
	Vector vcong=v1+v2;
	Vector vtru=v1-v2;
	Vector vnhan=v1*2;
	cout<<vcong<<vtru<<vnhan;
	
}
