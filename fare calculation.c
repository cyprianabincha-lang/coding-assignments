/*Name Cyprian Abincha
Reg PA106/G/28791/25
*/

#include <stdio.h>

float f(float km);
	void main(){
		
		float total_fare,kilometers;
		
	printf("enter your kilometers:\n");
	scanf("%f",&kilometers);	
		
		total_fare=f(kilometers);
		
		printf("total fare is %.2f\n",total_fare);
		return 0;
	}
	
	float f(float km){
	
	float fare;	
		
	fare=km*50;	
	
	return fare;
		
	}