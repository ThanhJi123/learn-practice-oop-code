#include <bits/stdc++.h>

using namespace std;

main(){
	vector<int> vt;
	vt.push_back(9);
	vt.push_back(1);
	vt.push_back(7);
	cout<<"size(): "<<vt.size()<<endl;
	vt.pop_back();
	cout<<"size():"<<vt.size()<<endl;
	cout<<(vt.empty() ? "Empty" : "Not empty")<<endl;
	vt.clear();
	cout<<"size():"<<vt.size()<<endl;
	cout<<(vt.empty() ? "Empty" : "Not empty")<<endl;
	cout<<"nhap phan tu : ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"nhap gia tri : ";
		cin>>x;
		vt.push_back(x);
	}
	cout<<"mang : ";
	for(int i=0;i<vt.size();i++){
		cout<<vt[i]<<" ";
	}
	
}
