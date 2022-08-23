//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
  #define xx 8
  #define yy 8
  #define zz 8
  int i[xx*yy*zz+2];
int ram3d(int x,int y,int z,int writes,int value){ 
  int ii=0;
  int l=xx*yy*zz;
  int indexs=0;
  indexs=x+(y*xx)+(xx*yy*z);
  if(indexs>2 && indexs<l+3){
	  if(writes!=0)i[indexs-3]=value;

	  ii=(int)i[indexs-3];
  }else{if(indexs==0){
			ii=xx;
		}else{
			if(indexs==1){
			ii=yy;
				
			}else{if(indexs==2){
					ii=zz;
				
			}
			}
		}}
	
	
  return ii;
}


int main(){
	int x=0;
	int y=0;
	int z=0;
	int dx=0;
	int dy=0;
	int dz=0;
	int errs=0;
	x=ram3d(0,0,0,0,0);
	y=ram3d(0+1,0,0,0,0);
	z=ram3d(0+2,0,0,0,0);
	for(dz=0;dz<z;dz++){
		for(dy=0;dy<y;dy++){
			for(dx=0;dx<x;dx++){
				ram3d(dx+3,dy,dz,1,dx+(dy*xx)+xx*yy*dz);
			}
		}
	}
	for(dz=0;dz<z;dz++){
		for(dy=0;dy<y;dy++){
			for(dx=0;dx<x;dx++){
				errs=ram3d(dx+3,dy,dz,0,0);
				if(errs!=dx+(dy*xx)+xx*yy*dz)puts("---error");
				printf("x %d,y %d ,z %d =%d\n",dx,dy,dz,errs);
			}
		}
	}


}
