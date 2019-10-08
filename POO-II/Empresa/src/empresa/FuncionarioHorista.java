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
    private String nome;
    private String cpf;
    private double SalarioFinal;
    private double SalarioFixoHorista;
    private double horasTrabalhadas;
    private double valorHorasExtra;

    public FuncionarioHorista(String nome, String cpf, double SalarioFixoHorista, double horasTrabalhadas) {
        super(nome, cpf, SalarioFixoHorista);
        this.horasTrabalhadas = horasTrabalhadas;
        if(horasTrabalhadas <= 40)
            this.valorHorasExtra = 0;
        else
            this.valorHorasExtra = SalarioFixoHorista * 1.5;
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

    public double getValorHorasExtra() {
        return valorHorasExtra;
    }

    public void setValorHorasExtra(double valorHorasExtra) {
        this.valorHorasExtra = valorHorasExtra;
    }
    
    public void calcularSalarioFinal(){
        SalarioFinal = (SalarioFixoHorista*horasTrabalhadas);
        if(horasTrabalhadas > 40)
            SalarioFinal += (valorHorasExtra * (horasTrabalhadas - 40));
    }
    
    public double getSalarioFinal(){
        return SalarioFinal;
    }
    
    
    @Override
    public void imprimirDados(){
        super.imprimirDados(); 
        System.out.println("Cargo: Horista\n"+
                           "Salário Líquido: "+SalarioFinal+"\n"+
                           "Horas Extras: " + (horasTrabalhadas - 40)+"\n");
    }
}

