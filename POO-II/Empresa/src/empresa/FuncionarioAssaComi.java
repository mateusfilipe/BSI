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
    private double SalarioFinal = 0;
    private final int numeroVendas;
    private static double porcentagemSobVenda;

    public FuncionarioAssaComi(double SalarioFixo, int numeroVendas, double porcentagemSobVenda) {
        super(SalarioFixo + (SalarioFixo/10));
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
        SalarioFinal = SalarioFixo + (numeroVendas * porcentagemSobVenda);
    }
    
    public double getSalarioFinal(){
        return SalarioFinal;
    }

}
