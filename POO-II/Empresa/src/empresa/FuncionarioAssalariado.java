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
public class FuncionarioAssalariado extends Funcionario {
    private String nome;
    private String cpf;
    final double SalarioFixoAssalariado = 0;
    public FuncionarioAssalariado(String nome, String cpf, double SalarioFixoAssalariado) {
        super(nome, cpf,SalarioFixoAssalariado);
    }
    
    @Override
    public double getSalarioFixo() {
        return SalarioFixo;
    }
    
    @Override
    public void imprimirDados(){
        super.imprimirDados();
        System.out.println("Cargo: Assalariado\n");
    }
}
