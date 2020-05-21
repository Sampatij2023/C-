#include<iostream>
using namespace std;
int main(){
	char A[]="Hey, my name is DPAK";
	int i=0,vowelCount=0,consonentCount=0;

	for (i;A[i]!='\0';i++){
		if (A[i]=='a',A[i]=='e',A[i]=='i',A[i]=='o',A[i]=='u',A[i]=='A',A[i]=='E',A[i]=='I',A[i]=='O',A[i]=='U'){
			/* code */
			vowelCount++;

		}
		else if ((A[i]>=65 && A[i<=90])||(A[i]>=97 && A[i<=122])){
				consonentCount++;

		}
	}
	cout<<"No of vowels: "<<vowelCount<<endl;
	cout<<"No of consonents: "<<consonentCount<<endl;
}
