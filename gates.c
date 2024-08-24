int and(int a, int b){
	int c;
	if(a == 1 && b == 1){
		c = 1; 
	} else{
		c = 0;
	}
	return c;
}
int or(int a, int b){ 
	int c;
	if(a == 0 && b == 0){
		c = 0;
	} else{
		c = 1;
	}
	return c;
}

int not(int a){
	int b;
	if(a == 0) b = 1;
	if(a == 1) b = 0;
	return b;
}

int xor(int a, int b){
	return or(and(a,not(b)), and(not(a),b));
}

int nand(int a, int b){ 
	return not(and(a,b));
} 

/*
int mux(int a, int b, int selector){
	if(selector = 0){
		return a;
	} else{
		return b;
	}
}

//figure out how to return two results at once
int dmux(int input, int selector){
	int a;
	int b;
	if(selector = 0){
		a = input;
		b = 0;
	} else{ 
		a = 0;
		b = input;
	}
}

void multi_not(int a[16]){
	for(int i = 0; i < 16; i++){
		a[i] = not(a[i]);
	}
}

void multi_and(int a[16], int b[16],int c[16]) {
	for(int i = 0; i < 16; i++) {
		c[i] = and(a[i],b[i]);
	}
}	
*/
