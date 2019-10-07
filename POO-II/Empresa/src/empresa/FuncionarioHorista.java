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
public class FuncionarioHorista extends Funcionario {
    private double SalarioFinal;
    private double SalarioFixoHorista;
    private double horasTrabalhadas;
    private double horasExtra;

    public FuncionarioHorista(double SalarioFixoHorista, double horasTrabalhadas, double SalarioFixo) {
        super(SalarioFixoHorista);
        this.horasTrabalhadas = horasTrabalhadas;
        if(horasTrabalhadas > 40)
            this.horasExtra = SalarioFixoHorista * 1.5;
        else
            this.horasExtra = 0;
        SalarioFinal = 0;
    }

    public double getSalarioFixoHorista() {
        return SalarioFixoHorista;
    }

    public void setSalarioFixoHorista(double SalarioFixoHorista) {
        this.SalarioFixoHorista = SalarioFixoHorista;
    }

    public double getHorasTrabalhadas() {
        return horasTrabalhadas;
    }

    public void setHorasTrabalhadas(double horasTrabalhadas) {
        this.horasTrabalhadas = horasTrabalhadas;
    }

    public double getHorasExtra() {
        return horasExtra;
    }

    public void setHorasExtra(double horasExtra) {
        this.horasExtra = horasExtra;
    }
    
    public void calcularSalarioFinal(){
        
        SalarioFinal = SalarioFixoHorista + (SalarioFixoHorista*horasTrabalhadas) + horasExtra;
    }
    
    public double getSalarioFinal(){
        return SalarioFinal;
    }
    
}
