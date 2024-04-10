//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
int map3d(int x,int y,int z){ 
  int ii=0;
  int l=0;
  int indexs=0;
  int xx=2;
  int yy=2;
  int zz=2;
  //      "1     2  1     2
  //      "1  2  1  2  1  2  1  2
  char *i=" \n*\n \n*\n \n*\n \n*\n";
  l=strlen(i);
  indexs=x+(y*xx)+(yy*xx)*z;
  if(indexs>2 && indexs<l+3){
	  ii=(int)i[indexs-3];
  }else{if(indexs==0){
			ii=xx;
		}else{
			if(indexs==1){
			ii=yy;
				
			}else{if(indexs==2){
				ii=zz;
			}
		}}}
	
	
  return ii;
}


int main(){
	int x=0;
	int y=0;
	int z=0;
	int dx=0;
	int dy=0;
	int dz=0;
	x=map3d(0,0,0);
	y=map3d(0+1,0,0);
	z=map3d(0+2,0,0);
	printf("\033[43;37m\n");
	for(dz=0;dz<z;dz++){
		for(dy=0;dy<y;dy++){
			for(dx=0;dx<x;dx++){
				putc(map3d(dx+3,dy,dz),stdout);
			}
		}
		putc('\n',stdout);
	}
}
