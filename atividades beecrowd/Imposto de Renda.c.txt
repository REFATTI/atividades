SUBMISSÃO # 41865506

#include <stdio.h>

int main()
{
	float salario;
	
	scanf("%f",&salario);
	
	if(salario>=0.00 && salario<=2000.00){
		printf("Isento\n");
	}
	
	else if(salario>=2000.01 && salario<=3000.00){
		salario-=2000.00;
		salario = salario *0.08;
		printf("R$ %.2f\n",salario);
	}else if(salario>3000.01 && salario<4500.00){
		salario = (salario - 3000.0)*0.18 + (1000*0.08);
		printf("R$ %.2f\n",salario);

	}else {
        salario = (salario - 4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2f\n", salario);
    }
	return 0;
}