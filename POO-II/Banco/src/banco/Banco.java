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
        // TODO code application logic here
        ContaBancaria Conta1;
        Cliente Cliente1;
        Cliente1 = new Cliente("Mateus Filipe", 6666, 800.50, "Pintor");
        Conta1 = new ContaBancaria(Cliente1, "Corrente", new Data(20,12,2000), new Data(01,9,2019), 2000.18, 2, 1234);
        Conta1.DadosDaConta(Conta1);

    }
    
}
