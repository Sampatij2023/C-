#include<iostream>
using namespace std;
int main(){
	char A[]="Hey my name is     Deepak";
	int i=0,word=1;
	for (i;A[i]!='\0';i++){
		if (A[i]=='' &&A[i-1]!=A[i]){
			word++;
		}
	}
	cout<<"No of words are: "<<word<<endl;
}