#include <stdio.h>

main(){
	
	int i,senha;
	char usuario[20],usuario2[20];
	
	while(i!=4){
		printf("#########SIMULADOR DE PROTOCOLOS###############\n\n");
		printf("1. Simular o envio de uma mensagem com o protocolo HTTP.\n");
		printf("2. Simular o envio de uma mensagem com o protocolo FTP.\n");
		printf("3. Simular o envio de uma mensagem com o protocolo SMTP.\n");
		printf("4. Sair do simulador.\n");
		scanf("%d",&i);
		switch(i){
			case 1:
			system("cls");
			printf("**************************************************************\n");
			printf("Iniciando a simulacao de envio de uma mensagem via HTTP\n");
			printf("**************************************************************\n\n");
			printf("Criando socket com o protocolo de transporte TCP no cliente\n");
			printf("Socket criado com sucesso\n");
			printf("Estabelecendo conexao TCP com o protocolo TCP no servidor\n");
			printf("Conexao OK\n");
			printf("Criando mensagem HTTP de requisicao no cliente\n");
			printf("Passando mensagem HTTP de requisicao através do socket para o protocolo TCP no cliente.\n");
			printf("Enviando mensagem HTTP de requisicao pela rede.\n");
			printf("Recebendo mensagem HTTP de requisicao no servidor.");
			printf("Tratando mensagem HTTP de requisicão no servidor e criando mensagem HTTP de resposta.\n");
			printf("Passando mensagem HTTP de resposta através do socket para o protocolo TCP no servidor.\n");
			printf("Enviando mensagem HTTP de resposta pela rede.\n");
			printf("Recebendo mensagem HTTP de resposta no cliente.\n");
			printf("Finalizando Conexao TCP\n\n");
			printf("**************************************************************\n");
			printf("Finalizando a simulacao de envio de uma mensagem via HTTP\n");
			printf("**************************************************************\n");
			system("pause");
			system("cls");
			break;
			
			
			case 2:
			system("cls");
			printf("**************************************************************\n");
			printf("Iniciando a simulacao de envio de uma mensagem via FTP\n");
			printf("**************************************************************\n\n");
			printf("Criando socket com o protocolo de transporte TCP no cliente\n");
			printf("Socket criado com sucesso\n");
			printf("Estabelecendo conexao TCP com o protocolo TCP no servidor\n");
			printf("Inicializando conexao Half Duplex\n");
			printf("Porta 21 OK\n");
			printf("Inicializando conexao Full Duplex\n");
			printf("Porta 20 OK\n");
			printf("Conexao OK\n");
			printf("Esperando autenticacao do usuario...\n\n");
			printf("Usuario: \n");scanf("%s",&usuario);
			printf("Senha(apenas numeros): \n");scanf("%s",&senha);
			printf("\n\nBem vindo, %s !\n",usuario);
			printf("Endereco IP da maquina: 177.168.56.20 / mascara  255.255.255.0\n");
			printf("Transferindo arquivos FTP para a maquina principal\n");
			printf("analizando a integridade dos arquivos\n");
			printf("arquivos OK, transferencia FTP de arquivos aceita.\n");
			printf("solicitacao de encerramento da conexao FTP aceita.\n");
			printf("finalizando conexao Half Duplex\n");
			printf("Porta 21 fechada\n");
			printf("finalizando conexao Full Duplex\n");
			printf("Porta 20 fechada\n");
			printf("Finalizando conexao TCP.\n");
			printf("**************************************************************\n");
			printf("Finalizando a simulacao de envio de uma mensagem via FTP\n");
			printf("**************************************************************\n");
			system("pause");
			system("cls");
			break;
			
			case 3:
			system("cls");
			printf("**************************************************************\n");
			printf("Iniciando a simulacao de envio de uma mensagem via SMTP\n");
			printf("**************************************************************\n");
			printf("Criando socket com o protocolo de transporte TCP no cliente\n");
			printf("Socket criado com sucesso\n");
			printf("Estabelecendo conexao TCP com o protocolo TCP no servidor\n");
			printf("identificando servidor...\n\n");
			printf("nome do servidor SMTP: "); scanf("%s",&usuario2);
			printf("\n\niniciando chamada para conexao SMTP com %s .smtp.CCM.net\n");
			printf("%s .smtp.CCM.net OK\n");
			printf("Sincronizando conexao SMTP com %s .smtp.CCM.net\n");
			printf("sincronizacao SMTP OK\n");
			printf("Esperando resposta de usuario\n");
			printf("USUARIO: E-mail para: joaozinho@gmail.com\n");
			printf("Esperando resposta de usuario\n");
			printf("USUARIO: E-mail de: jhonataugusto147@gmail.com\n");
			printf("USUARIO: DATA\n");
			printf("Iniciar entrada de email. termine com <CRLF>. <CRLF>\n\n");
			printf("\nassunto: Prova AV1 Estacio\n");
			printf("\n\nUSUARIO: Segue o anexo da prova AV1 da Instituicao Estacio, ate mais! ;)\n");
			printf("\nanexo.pdf\n");
			printf("\nUSUARIO: <CRLF>. <CRLF>\n");
			printf("Deseja fechar s/n?\n");
			printf("USUARIO: s\n");
			printf("Fechando portas de conexao SMTP\n");
			printf("portas de conexao SMTP fechadas\n");
			printf("Concluindo solicitacao TCP para conexao entre cliente e servidor\n");
			printf("solicitacao TCP fechada\n");
			printf("desligando o sistema.\n");
			printf("**************************************************************\n");
			printf("Finalizando a simulacao de envio de uma mensagem via SMTP\n");
			printf("**************************************************************\n");
			system("pause");
			system("cls");
			
			break;
			
			case 4:
				
			
			break;
			
			default:
				system("cls");
				system("comando invalido, tente novamente");
				system("pause");
				system("cls");
				
			break;
		}
	}
	
}
