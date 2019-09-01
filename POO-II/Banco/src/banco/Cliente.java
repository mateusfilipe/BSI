/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package banco;

/**
 *
 * @author Angela
 */
public class Cliente {
    private String nome;
    private long cpf;
    private double salario;
    private String profissao;
    private int senha;
    
    /**
     * Construtor da classe Cliente
     * @param nome - nome do Cliente
     * @param cpf - cpf do Cliente
     * @param salario - salario do cliente
     * @param profissao  - profissao do cliente
     */
    public Cliente(String nome, long cpf, double salario, String profissao) {
        this.nome = nome;
        this.cpf = cpf;
        this.salario = salario;
        this.profissao = profissao;
    }
       
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public long getCpf() {
        return cpf;
    }

    public void setCpf(long cpf) {
        this.cpf = cpf;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getProfissao() {
        return profissao;
    }

    public void setProfissao(String profissao) {
        this.profissao = profissao;
    }
    
    /**
     * Atualização da senha, varíavel armazenanda na classe ContaBancaria
     * @param contaCliente - conta do cliente a ter a senha atualizada
     * @param senhaOriginal - senha original antes da alteração, para verificação
     * @param senhaNova - nova senha a ser cadastrada no sistema
     */
    public void atualizarSenha(ContaBancaria contaCliente,int senhaOriginal, int senhaNova){
        if(senhaOriginal == contaCliente.getSenha())
            contaCliente.setSenha(senhaNova);
        else
            System.out.println("ERROR: Senha inválida.");
    }
    
    public void inciarPedidoEmprestimo(ContaBancaria contaCliente, int valorEmprestimo){
        if(valorEmprestimo <= 10000){
            contaCliente.depositar(valorEmprestimo);
        }else{
            contaCliente.depositar(valorEmprestimo);
            contaCliente.sacar(valorEmprestimo/100, senha);
        }
    }
    
}
