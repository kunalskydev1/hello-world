#include<iostream>
#include<algorithm>

using namespace std;

int main()

{
	int a[10]={5,2,8,4,6,1,9,5,0,7};

	sort(a,a+10);

	for(int i=0;i<10;i++){
		cout<<a[i];
	}

	return 0;

}
