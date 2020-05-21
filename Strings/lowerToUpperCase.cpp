#include <iostream>
using namespace std;

int main(){
	char A[]="Deepak";
	int i=0;
	for (i;A[i]!='\0';i++){
		A[i]=A[i]+32;
	}
	printf("%s\n", A);
}