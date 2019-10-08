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
    private String nome;
    private String cpf;
    final double SalarioFixo;

    public Funcionario(String nome, String cpf, double SalarioFixo) {
        this.nome = nome;
        this.cpf = cpf;
        this.SalarioFixo = SalarioFixo;
    }

    public double getSalarioFixo() {
        return SalarioFixo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
           
    public void imprimirDados(){
        System.out.print("Nome: "+nome+"\n"+
                           "CPF: "+cpf+"\n"+
                           "Salário Bruto: "+SalarioFixo+"\n");
    }
}
