#include<iostream>
using namespace std;

int main(){
	char name[] ="deepak";
	int H[26]={0},i;
	for(i=0;name[i]!='\0';i++){
		
		H[name[i]-97]+=1;
// 		printf("%d\n",H[name[i]-97] );
// 		if (H[name[i]-97]==1){
// 			printf("%c\n",i+97 );
// 		}
	}
	for(i=0;i<26;i++){
	    if (H[i]>=1){
	        printf("%c",i+97);
	    }
	}
}