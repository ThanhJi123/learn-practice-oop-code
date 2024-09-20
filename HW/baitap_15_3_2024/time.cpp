#include<iostream>
using namespace std;


int main(){
	int x,y,z;
	cin >>x>>y>>z;
	
//	if(y == 59 && z==59){
//		if(x == 23){
//			x=0;
//			y=0;
//			z=0;
//			cout<<x<<" "<<y<<" "<<z;
//		}
//		else{
//			x=x+1;
//			y=0;
//			z=0;
//			cout<<x<<" "<<y<<" "<<z;
//		}
//	}
//	if(z==59){
//		y=y+1;
//		z=0;
//		cout<<x<<" "<<y<<" "<<z;
//	}
//	else{
//		z=z+1;
//		cout<<x<<" "<<y<<" "<<z;
//	}
	
	if(z==59){
		if(y==59){
			if(x==23){
				x=0;
				y=0;
				z=0;
				cout<<x<<" "<<y<<" "<<z;
			}
			else{
				x=x+1;
				y=0;
				z=0;
				cout<<x<<" "<<y<<" "<<z;
			}
		}
		else{
			y=y+1;
			z=0;
			cout<<x<<" "<<y<<" "<<z;
		}
	}
	else{
		z=z+1;
		cout<<x<<" "<<y<<" "<<z;
	}
	
	
	
	
}

