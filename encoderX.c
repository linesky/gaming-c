//https://wasdk.github.io/WasmFiddle/
int encodeX(int a){ 
  int ii=-1;
  int i[]={5,7,9,3,71,10,10,12,4,12,2,1,2,3,15,16};
  if(a>-1 && a<16){
	  ii=i[a];
  }else{ii=-1;}
  return ii;
}
