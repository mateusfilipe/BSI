/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package banco;

/**
 *
 * @author Angela
 */
public class Banco {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Cliente cliente1;
        ContaBancaria conta1;
        ContaBancaria conta2;
        Gerente gerente1;
        
        gerente1 = new Gerente("Silvio Santos", "Gerente Bancário", 33, 145879);
        cliente1 = new Cliente("Mateus Filipe", 14552489633L, 2549.13, "Professor", gerente1);
        conta1 = new ContaBancaria(cliente1, "Corrente", new Data(2,9,2025), new Data(2,9,2019), 0, 33, 5555);
        conta2 = new ContaBancaria(cliente1, "Poupança", new Data(2,9,2025), new Data(2,9,2019), 0, 34, 6666);
        
        /**
         * Segue um teste de todas os métodos da classe Cliente:
         * Junto a isso já se testa alguns métodos do Gerente.
         */
        cliente1.atualizarSenha(conta1, 5555, 4444);
        cliente1.pedirEmprestimo(conta1, gerente1, 20000);
        cliente1.pedirCartao(gerente1);
        System.out.println(cliente1.imprimirDados());
        
        /**
         * Segue um teste de todos os métodos da classe Conta:
         */
        conta1.depositar(2500);
        conta1.sacar(2300, 4444);
        conta1.transferir(conta1, conta2, 10000);
        System.out.println(conta1.DadosDaConta(conta1));
        System.out.println(conta1.DadosDaConta(conta2));
        
        /**
         * Testando a impressão das informações do gerente.
         */
        System.out.println(gerente1.imprimirDados());
        

    }
    
}
