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
    private Gerente gerenteResponsavel;
    
    /**
     * Construtor da classe Cliente
     * @param nome - nome do Cliente
     * @param cpf - cpf do Cliente
     * @param salario - salario do cliente
     * @param profissao  - profissao do cliente
     * @param gerenteResponsavel - gerente do cliente
     */
    public Cliente(String nome, long cpf, double salario, String profissao, Gerente gerenteResponsavel) {
        this.nome = nome;
        this.cpf = cpf;
        this.salario = salario;
        this.profissao = profissao;
        this.gerenteResponsavel = gerenteResponsavel;
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

    public int getSenha() {
        return senha;
    }

    public void setSenha(int senha) {
        this.senha = senha;
    }

    public Gerente getGerenteResponsavel() {
        return gerenteResponsavel;
    }

    public void setGerenteResponsavel(Gerente gerenteResponsavel) {
        this.gerenteResponsavel = gerenteResponsavel;
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
    
    /**
     * Pedir empréstimo, cliente solicita empréstimo
     * @param conta - conta do cliente a receber empréstimo
     * @param gerenteResponsavel - gerente responsável pelo cliente
     * @param valorEmprestimo - valor do empréstimo
     */
    public void pedirEmprestimo(ContaBancaria conta, Gerente gerenteResponsavel, int valorEmprestimo){
        gerenteResponsavel.inciarPedidoEmprestimo(getSalario(), conta, valorEmprestimo);
    }
    
    /**
     * Pedir cartão, cliente solicita um cartão
     * @param gerenteResponsavel - gerente reponsável pelo cliente
     */
    public void pedirCartao(Gerente gerenteResponsavel){
        gerenteResponsavel.inciairPedidoCartao(getSalario());
    }

    /**
     * Impressão dos dados relacionados cliente
     * @return Dados do cliente
     */
    public String imprimirDados() {
        return "\nNome = " + nome + "\nCPF = " + cpf + "\nSalário = " + salario + "\nProfissão = " + profissao + "\nGerente Responsável = " + gerenteResponsavel.getNome();
    }
    
}
