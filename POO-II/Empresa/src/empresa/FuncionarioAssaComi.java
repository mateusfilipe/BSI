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
public class FuncionarioAssaComi extends Funcionario {
    private String nome;
    private String cpf;
    private double SalarioFinal = 0;
    private final int numeroVendas;
    private static double porcentagemSobVenda;

    public FuncionarioAssaComi(String nome, String cpf,double SalarioFixo, int numeroVendas, double porcentagemSobVenda) {
        super(nome, cpf,SalarioFixo + (SalarioFixo/10));
        this.numeroVendas = numeroVendas;
        FuncionarioAssaComi.porcentagemSobVenda = porcentagemSobVenda;
    }

    public static double getPorcentagemSobVenda() {
        return porcentagemSobVenda;
    }

    public static void setPorcentagemSobVenda(int porcentagemSobVenda) {
        FuncionarioAssaComi.porcentagemSobVenda = porcentagemSobVenda;
    }
    
    public void calcularSalarioFinal(){
        SalarioFinal = SalarioFixo + ( numeroVendas  * porcentagemSobVenda);
    }
    
    public double getSalarioFinal(){
        return SalarioFinal;
    }
    
    
    @Override
    public void imprimirDados(){
        super.imprimirDados();
        System.out.println("Cargo: Assalariado/Comissionado\n"+
                           "Salário Líquido: "+SalarioFinal+"\n");
    }
}
