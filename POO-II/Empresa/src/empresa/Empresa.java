/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package empresa;

/**
 *
 * @author aluno
 */
public class Empresa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Teste para Assalariado/Comissionado
        FuncionarioAssaComi func1 = new FuncionarioAssaComi("Maria Rita","12345679800",1000, 970, 0.15);
        func1.calcularSalarioFinal();
        func1.imprimirDados();
        
        //Teste para Comissionado
        FuncionarioComissionado func2 = new FuncionarioComissionado("Marcos Fita","1234657900",998, 380, 0.33);
        func2.calcularSalarioFinal();
        func2.imprimirDados();
        
        //Teste Assalariado
        FuncionarioAssalariado func3 = new FuncionarioAssalariado("Mateus Lita", "44456733300", 1032.33);
        func3.imprimirDados();
        
        //Teste Horista
        FuncionarioHorista func4 = new FuncionarioHorista("Marcio Pita","55533365400",72,42);
        func4.calcularSalarioFinal();
        func4.imprimirDados();  
        
   }
    
}
