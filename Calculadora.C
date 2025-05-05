#include <stdio.h>
int main(){
	int CodOp;
	printf("Ingresa el codigo de operacion (1:Suma/2:Resta/3:Multiplicacion/4:Division): ");
	scanf("%d", &CodOp);
	if ((CodOp<1) || (CodOp>5)){
		printf("El codigo no existe");}
	else{
		int Num1,Num2;
		printf("Ingresa el primer numero: ");
		scanf("%d", &Num1);
		printf("Ingresa el segundo numero: ");
		scanf("%d", &Num2);
		if (CodOp == 1){
			int Res = Num1+Num2;
			printf("%d + %d = %d",Num1,Num2,Res);
			}
		if (CodOp == 2){
			int Res = Num1 - Num2;
			printf("%d - %d = %d",Num1,Num2,Res);
			}
		if (CodOp == 3){
			int Res = Num1 * Num2;
			printf("%d * %d = %d",Num1,Num2,Res);
			}
		if (CodOp == 4){
			int Res = Num1 / Num2;
			printf ("%d / %d = %d",Num1,Num2,Res);
			}
		}
	printf("\n");
	return 0;
}
