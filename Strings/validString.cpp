#include<iostream>
using namespace std;

int main (){
	char *name="Deepa?k";
	if(valid(name)){
		printf("Valid String");
	}else{
		printf("Invalid String");
	}
}

int valid(char *name){
	int i;
	for (i=0;name[i]!='\0';i++){
		if(!(name[i]>=65 && name[i]<=90)&&!(name[i]>=97 && name[i]<=122) && !(name[i]>=47 && name[i]<=57))
			return 0;
	}return 1;
}