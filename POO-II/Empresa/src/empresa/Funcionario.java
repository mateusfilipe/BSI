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
public class Funcionario {
    final double SalarioFixo;

    public Funcionario(double SalarioFixo) {
        this.SalarioFixo = SalarioFixo;
    }

    public double getSalarioFixo() {
        return SalarioFixo;
    }
    
}
