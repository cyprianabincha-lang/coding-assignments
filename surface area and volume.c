//c programme to calculate  surface area and volume of cylinder 
/*Name: cyprian Abincha 
  Reg no:PA106/G/28791/25
  */
#include<stdio.h>

int main() {

    float  volume, surfacearea, height, radius,π;
    printf("enter your height\n");
    scanf("%f",& height);
    printf("my height is %f\n", height);

    printf("Enter your radius\n");
    scanf("%f",&radius);
    printf("my radius is %f\n", radius);

    π=3.142;
    volume=π*radius*radius*height;
    printf("volume:%f\n", volume);

    surfacearea=(2*π*radius*radius)+(2*π*radius*height);
    printf("surfacearea:%f", surfacearea);
    return 0;
}
