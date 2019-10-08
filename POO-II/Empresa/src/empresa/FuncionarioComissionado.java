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
public class FuncionarioComissionado extends Funcionario {
    private String nome;
    private String cpf;
    private double SalarioFinal = 0;
    private final int numeroVendas;
    private static double porcentagemSobVenda;
    
    public FuncionarioComissionado(String nome, String cpf, double SalarioFixo, int numeroVendas, double porcentagemSobVenda) {
        super(nome,cpf,0);
        this.numeroVendas = numeroVendas;
        FuncionarioComissionado.porcentagemSobVenda = porcentagemSobVenda;
    }

    public static double getPorcentagemSobVenda() {
        return porcentagemSobVenda;
    }

    public static void setPorcentagemSobVenda(double porcentagemSobVenda) {
        FuncionarioComissionado.porcentagemSobVenda = porcentagemSobVenda;
    }
    
    public void calcularSalarioFinal(){
        SalarioFinal = numeroVendas * porcentagemSobVenda;
    }
    
    public double getSalarioFinal(){
        return SalarioFinal;
    }
    
    
    @Override
    public void imprimirDados(){
        super.imprimirDados();
        System.out.println("Cargo: Comissionado\n"+
                           "Salário Líquido: "+SalarioFinal+"\n");
    }
    
}
