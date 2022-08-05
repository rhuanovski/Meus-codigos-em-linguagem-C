#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

   // estruturas: 
   
  struct Conta
  {
      float saldo;                                      //saldo da conta em reais
      float limite;                                    //maximo que pode ser removido de uma só vez
      int tipo;                                       //corrente ou poupança   0 ou 1
      int taxa_rendimento_mensal;                    //taxa de rendimento mensal
      float valorDepositado;
      float saque;
  };
  
  //funções antes da função main:
  
  //função 1:
  void ContaCorrente(void) {
            
            struct Conta corrente;
       
            corrente.saldo = 50;
            corrente.limite = 200;
            corrente.taxa_rendimento_mensal = 3 / 100;  //ao mês
            corrente.valorDepositado; 
       int escolha1;
             
     if (corrente.saldo >= 0) {
            system ("color 0a"); }
     else
           { system ("color 04"); }
                                  
            printf ("Digite um valor de depósito para a sua conta bancária: \n");
            scanf ("%f", &corrente.valorDepositado); 
            
            corrente.saldo = corrente.saldo + corrente.valorDepositado;
            
            printf ("Informações da conta:\n");
            printf ("Saldo total: R$%.2f\n", corrente.saldo);
            printf ("O limite de saque de uma só vez para esse tipo de conta é de R$%.2f \n", corrente.limite);
  
  //decisão múltipla
   printf ("1 - Realizar um saque\n");
   printf ("2 - Fazer um investimento\n");
   printf ("3- Sair\n");
   
   switch(escolha1) {
        case 1:
             void sacaCorrente2(void); 
             sacaCorrente();
             
        case 2:
            void investeCorrente2(void); 
            investeCorrente(); 
            
        case 3:
            exit (1);
            break;
        
        default:
            printf ("\aerror invalid command\n");
            break;
            }  }
  
  //função 2:
  void ContaPoupanca(void) {
      
      struct Conta poupanca;
      
      poupanca.saldo = 50;
      poupanca.limite = 100;
      poupanca.taxa_rendimento_mensal = 1 / 100;  //ao mês
      poupanca.valorDepositado; 
     int escolha2;
     
     if (poupanca.saldo >= 0) {
            system ("color 0a"); }
     else
        {   system ("color 04");
                                  }
     printf ("Digite um valor de depósito para a sua conta bancária: \n");
     scanf ("%f", &poupanca.valorDepositado);
     
     poupanca.saldo = poupanca.saldo + poupanca.valorDepositado;
     
     printf ("Informações da conta:\n");
     printf ("Saldo total: R$%.2f\n", poupanca.saldo);
     printf ("O limite de saque de uma só vez para esse tipo de conta é de R$%.2f \n", poupanca.limite); 
  
  //decisão múltipla
   printf ("1 - Realizar um saque\n");
   printf ("2 - Fazer um investimento\n");
   printf ("3- Sair\n");
   
   switch(escolha2) {
          case 1: 
                void sacaPoupanca2(void);
                sacaPoupanca();
                
          case 2: 
               void sacaPoupanca2(void);
               investePoupanca();
          
          case 3:
               exit (1);
               break;
               
          default:
              printf ("\aerror invalid command\n");
              break;
            }   }
            
  
   //função 3 (função saque para conta corrente)         //lembrete: taxa de saque de 5% para conta poupanca e 2% conta corrente
  void sacaCorrente2(void) {
          struct Conta corrente;
          corrente.saque;
          
          printf ("OBS: A taxa de saque para contas correntes é de 2%\n");
          printf ("Digite o valor para saque: \n");
          scanf ("%f", &corrente.saque);
          
         if (corrente.saque > corrente.limite) 
                   printf ("\aLimite excedido! MÁX: R$%.2f\n", corrente.limite);  
         else if  (corrente.saque > corrente.limite && corrente.saque > corrente.saldo)
                   printf ("\aValor de saque excedido ao saldo e limite excedido\n"); 
         else 
              ( corrente.saldo = corrente.saldo - corrente.saque - 2 / 100 * corrente.saldo );
          
          printf ("Saque realizado com sucesso\n");
          printf ("Saldo total: R$%.2f\n", corrente.saldo);
  
                 }
  
  //função 4 (função investe para conta corrente)
  void investeCorrente2(void) {
    struct Conta corrente;
     float M;                                            //montante
     float C;                                            //capital
     int I = corrente.taxa_rendimento_mensal;            //corrente.taxa_rendimento_mensal 
     int T;                                              //meses
     float potencia;
    //fórmula juros compostos  M = C * (1 + i) ^ t 
    printf ("Insira a quantidade de meses da aplicação do investimento: \n");
    scanf ("%i", &T);
    
   ( M = corrente.saldo * (1 + I) );
  potencia = pow(M,T);
    printf ("Montante ao final da aplicação de %i meses: R$%.2f\n", T, potencia);
        
                    }
  // função 5 (função saque para conta poupança)
  void sacaPoupanca2(void) {
     struct Conta poupanca;
     poupanca.saque;
          
          printf ("OBS: A taxa de saque para contas poupança é de 5%\n");
          printf ("Digite o valor para saque: \n");
          scanf ("%f", &poupanca.saque);
          
          if (poupanca.saque > poupanca.limite) 
                   printf ("\aLimite excedido! MÁX: R$%.2f\n", poupanca.limite);  
         else if (poupanca.saque > poupanca.limite && poupanca.saque > poupanca.saldo)
                   printf ("\aValor de saque excedido ao saldo e limite excedido\n");
         else 
              ( poupanca.saldo = poupanca.saldo - poupanca.saque - 2 / 100 * poupanca.saldo );
          
          printf ("Saque realizado com sucesso\n");
          printf ("Saldo total: R$%.2f\n", poupanca.saldo);
        }
  
  //função 6 (função investe para conta poupança)
  void investePoupanca2(void) {
    struct Conta poupanca;
     float M2;                                            //montante
     float C2;                                            //capital
     int I2 = poupanca.taxa_rendimento_mensal;            //corrente.taxa_rendimento_mensal 
     int T2;                                              //meses
     float potencia2;
    //fórmula juros compostos  M = C * (1 + i) ^ t 
    printf ("Insira a quantidade de meses da aplicação do investimento: \n");
    scanf ("%i", &T2);
    
   ( M2 = poupanca.saldo * (1 + I2) );
   potencia2 = pow(M2,T2); 
    printf ("Montante ao final da aplicação de %i meses: R$%.2f\n", T2, potencia2);
        
                        }
   int main (void) {
   
   int tipo;
   
   printf ("Bem-vindo ao app banco digital!\n");
   printf ("Escolha o tipo de conta: \n");
   printf ("0 - Corrente\n");
   printf ("1 - Poupança\n");
   printf ("2 - Sair\n");
   
   scanf ("%d", &tipo);
   
   switch(tipo) {
         case 0:
              printf ("Conta Corrente: \n");
              ContaCorrente();
           
         case 1: 
              printf ("Conta Poupança: \n");
              ContaPoupanca();
                     
         case 3:
              exit (1);
              break;
         
         default:
              printf ("\aerror invalid command\n");
              break;
      }      
              
    return 0;
    }
