#include <stdio.h>
#include <string.h>

int main() {
	
	struct Credenciado {
		int cpf, cep,ddd,cel,cnpj,data,num,telcom,ano;
		char nome, end, complemento, bairro, estado, cidade, inscest, inscmun, email, contres, cnae,assres,car,mode,cor; 
	};
	
	struct Credenciado credenciado ;
		printf("----------------DADOS DO CREDENCIADO--------------\n");	
		printf("Nome Completo:\n");
		scanf("%[^\n]c", &credenciado.nome);
		fflush(stdin);
		printf("Endereco:\n");
		scanf("%c",&credenciado.end);
		fflush(stdin);
		printf("Complemento:\n ");
		scanf("%c", &credenciado.complemento);
		fflush(stdin);
		printf("Bairro:\n ");
		scanf("%c", &credenciado.bairro);
		fflush(stdin);
		printf("Numero:\n ");
		scanf("%d",&credenciado.num);
		fflush(stdin);
		printf("CEP:\n ");
		scanf("%d", &credenciado.cep);
		fflush(stdin);
		printf("Estado:\n ");
		scanf("%c", &credenciado.estado);
		fflush(stdin);
		printf("Cidade:\n ");
		scanf("%c", &credenciado.cidade);
		fflush(stdin);
		printf("DDD:\n ");
		scanf("%d", &credenciado.ddd);
		fflush(stdin);
		printf("Telefone Residencial ou Comercial:\n ");
		scanf("%d",&credenciado.cel);
		fflush(stdin);
		printf("CPF:\n ");
		scanf("%c",&credenciado.cpf);
		fflush(stdin);
		printf("CNPJ(Apenas para pessoas PJ):\n ");
		scanf("%d", &credenciado.cnpj);
		fflush(stdin);
		printf("Insc. Estadual:\n ");
		scanf("%c", &credenciado.inscest);
		fflush(stdin);
		printf("Insc. Municipal:\n ");
		scanf("%c", &credenciado.inscmun);
		fflush(stdin);
		printf("CNAE:\n ");
		scanf("%c", &credenciado.cnae);
		fflush(stdin);
		printf("E-MAIL:\n ");
		scanf("%c", &credenciado.email);
		fflush(stdin);
		printf("Contato do Responsavel: (Em caso de pessoa juridica)\n ");
		scanf("%c", &credenciado.contres);
		fflush(stdin);
		printf("Telefone COmercial:\n ");
		scanf("%d", &credenciado.telcom);
		fflush(stdin);
		printf("Data:\n ");
		scanf("%d", &credenciado.data);
		fflush(stdin);
		printf("Assinatura do Responsavel:\n ");
		scanf("%c", &credenciado.assres);
		fflush(stdin);
		printf("-------------------------DADOS DO VEICULO--------------------\n");
		printf("Placa:\n ");
		scanf("%c", &credenciado.car);
		fflush(stdin);
		printf("Modelo:\n ");
		scanf("%c", &credenciado.mode);
		fflush(stdin);
		printf("Ano:\n ");
		scanf("%d", &credenciado.ano);
		fflush(stdin);
		printf("Cor:\n ");
		scanf("%c", &credenciado.cor);

	return 0;
}