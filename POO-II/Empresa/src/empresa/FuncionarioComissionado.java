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
    private double SalarioFinal = 0;
    private final int numeroVendas;
    private static double porcentagemSobVenda;
    
    public FuncionarioComissionado(double SalarioFixo, int numeroVendas, double porcentagemSobVenda) {
        super(0);
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
    
    
    
}
