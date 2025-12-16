#include<iostream>
using namespace std;

char before(char x){
	if(x == 'A'){
        x = 'Z';
    }
	else if (x < 'A' || x > 'Z'){
		x = '0';
	}
    else{
        x = x - 1;
    }
    return x;
}