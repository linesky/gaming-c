//https://wasdk.github.io/WasmFiddle/
int power(int a,int b){ 
	int c;
	int d;
	c=a;
	if(b>0){
		for(d=0;d<b-1;d++){
			
			c=c*a;
		}
	}else{c=1;}
  return c;
}
