#include<stdio.h>
int main()
{
float a,b,x;
printf("Wywedi dwe chisla:");
scanf("%f ",&a);
scanf("%f",&b);
if(a==0){
    if(b>0){
        x=-b/a;
        printf("Vsqko chislo e reshenie");
    }
    else
        printf("NQma reshenie");

}else if(a>0){
    x=-b/a;
    printf("x>%f",x);
}else {
    x=-b/a;
    printf("x<%f", x);
}
    return 0;
//a*x>-b
}
