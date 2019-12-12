#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class computer{
	public:
		long palindromic_prime(long x);
		void output(long num[1000],long range);
		
		long count,x,j,pdtemp,base,bin,rem,key,temp,rev;
		long num[1000],real,range,i;
};

int main(){
	long range=0,real,i,inp[1000];
	computer engineering;
	cout<<"RANGE: ";
	cin>>range;
	cout<<endl;
	real=2;
	for(i=0;i<range;i++){
		inp[i]=real;
		real=real+1;
	}
	engineering.output(inp,range);
}

long computer :: palindromic_prime(long x){
	count=0; 
		for(j=2;j<x;j++){			
			if(x%j==0){
				count++;
			}
		}
	if(count==0){ 	
		pdtemp=x;
		bin=0;
		base=1;
	    for(;pdtemp>0;){
			rem=pdtemp%2;
			bin=bin+(rem*base);
			base=base*10;
			pdtemp=pdtemp/2;
						}
			key=bin;
			temp=0;
			rev=0;
					for(;key!=0;){
						temp=key%10;
						key=key/10;
						rev=temp+(rev*10);
								}
		if(rev==bin){	
					return 1; 
					}
		else{
					return 0; 
			}
	}else{
		return 0;
		}
	
	}

void computer::output(long num[1000],long range){
	computer engineering;
	real=2;
	for(i=0;i<range;i++){
		num[i]=real;
		real=real+1;
		if(palindromic_prime(num[i])==1){
			num[i]=engineering.bin;
			cout<<num[i]<<" ";
		}
		cout<<num[i]<<" ";
		if(palindromic_prime(num[i])==0){
			num[i]=0;
			cout<<num[i]<<" ";
		}
	}
	
}



