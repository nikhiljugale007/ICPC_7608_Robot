#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cstring>

using namespace std ;


int main(){

	int m , n ;
	cin>>m>>n;
	
	string s1 = "MOVE" ;
	string s2s = "TURN" ;
	
	
	
	int x =0 , y=0 , direction = 1 ;
	
	for(int i=0;i<n;i++){
		string inst ;
		int value ;
		
		cin>>inst;
		cin>>value;
		
		
		if(inst == "MOVE"  ){
			if(direction == 1){
				x=x+value ;
			}
			else  if(direction == 2){
				y=y+value;
			}
			else if(direction == 3){
				x=x-value;	
			}
			else{
				y=y-value;
			}	
		}
		else if(inst == "TURN"){
			if(value == 0){
				switch(direction){
				case 1:
					direction = 2 ;
					break;
				case 2:
					direction = 3 ;
					break;
				case 3:
					direction = 4 ;
					break;
				case 4:
					direction = 1;
					break;				
				}
			}
			if(value == 1){
				switch(direction){
				case 1:
					direction = 4 ;
					break;
				case 2:
					direction = 1 ;
					break;
				case 3:
					direction = 2 ;
					break;
				case 4:
					direction = 3;
					break;				
				}
			}
		}
		
		if(x<0 || x>m || y<0 || y>m){
			cout<<"-1"<<endl;
			return 0;
		}
	}
	cout<<"X ="<<x<<" Y = "<<y<<endl; 
	

	return 0;
}
