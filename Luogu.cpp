#include <iostream>
using namespace std;
int main(){
	int n,a,b,max,min;
	cin >> n >> a;
	max=min=a;
	for(int i=0;i<n-1;i++){
		scanf("%d",&a);
		if(a>max){
			max=a;
		}
		else if(a<=min){
			min=a;
		}
	}
	cout << min << max <<endl;
	return 0;
}
