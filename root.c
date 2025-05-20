#include<stdio.h>
#include<math.h>
int main (){
float a,b,c,discriminant,root1,root2,realPart,imagPart;
printf("Enter cofficient a,b and c:");
scanf("%f %f %f", &a,&b,&c);
discriminant = b*b -4*a*c;
if(discriminant > 0){
root1 = (-b + sqrt(discriminant))/(2 * a);
root2 = (-b - sqrt(discriminant))/(2 * a);
printf("roots are real and different,\n");
printf("root 1 = %2f\n",root1);
printf("root2 = %2f\n",root2);
}
else if(discriminant == 0){
root1 = root2 = -b/(2*a);
printf("Roots are real and equal.\n");
printf("root1 = root2 = %2f\n",root1);
}
else{
realPart = -b/(2*a);
imagPart = sqrt(-discriminant)/(2*a);
printf("Roots are complex and imaginary.\n");
printf("roo1 = %2f + %2f\n",realPart,imagPart);
printf("roo1 = %2f - %2f\n",realPart,imagPart);
}
return 0 ;
}