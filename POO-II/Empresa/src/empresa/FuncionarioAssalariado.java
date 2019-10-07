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
    final double SalarioFixoAssalariado = 0;
    public FuncionarioAssalariado(double SalarioFixoAsslariado) {
        super(SalarioFixoAsslariado);
    }

    public double getSalarioFixoAssalariado() {
        return SalarioFixoAssalariado;
    }

    @Override
    public double getSalarioFixo() {
        return SalarioFixo;
    }
    
}
