/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package banco;

import java.util.ArrayList;

/**
 *
 * @author Angela
 */
public class Gerente {
    private String nome;
    private String funcao;
    private int numeroClientes;
    private long cpf;
    
    /**
     * Construtor da classe Gerente
     * @param nome - nome do Gerente
     * @param funcao - função do Gerente
     * @param numeroClientes - numero de clientes associados ao Gerente
     * @param cpf - cpf do Gerente
     */
    public Gerente(String nome, String funcao, int numeroClientes, long cpf) {
        this.nome = nome;
        this.funcao = funcao;
        this.numeroClientes = numeroClientes;
        this.cpf = cpf;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getFuncao() { 
        return funcao;
    }

    public void setFuncao(String funcao) {
        this.funcao = funcao;
    }

    public int getNumeroClientes() {
        return numeroClientes;
    }

    public void setNumeroClientes(int numeroClientes) {
        this.numeroClientes = numeroClientes;
    }

    public long getCpf() {
        return cpf;
    }

    public void setCpf(long cpf) {
        this.cpf = cpf;
    }
    
    /**
     * Verificação da disposição do empréstimo, se um cliente é elegível para fazer empréstimo
     * @param clienteE - cliente solicitante
     * @param contaClienteE - conta do cliente solicitante
     * @param valorEmprestimo - valor solicitado do empréstimo
     */
    private void liberarEmprestimo(ContaBancaria contaCliente, int valorEmprestimo){
        if(valorEmprestimo <= 10000){
            contaCliente.depositar(valorEmprestimo);
        }else{
            contaCliente.depositar(valorEmprestimo);
            contaCliente.sacar(valorEmprestimo/100, contaCliente.getSenha());
        }
    }
    
    /**
     * Inciar pedido de empréstimo de um cliente
     * @param salario - salário do cliente
     * @param contaCliente - conta do cliente que solicitou empréstimo
     * @param valorEmprestimo  - valor solicitado do empréstimo
     */

    public void inciarPedidoEmprestimo(double salario, ContaBancaria contaCliente, int valorEmprestimo){
        if(salario >= 998){
            liberarEmprestimo(contaCliente, valorEmprestimo);
            System.out.println("Empréstimo autorizado.");
        }else{
            System.out.println("Empréstimo não autorizado.");
        }
    }
    /**
     * Verificação caso o cliente seja elegível para receber o cartão
     * @param clienteC - cliente que solicitou o cartão
     */
    private void liberarCartao(double salario){
        System.out.println("Cartão emitido com sucesso, chegará em seu endereço dentro de 90 dias.");
        System.out.println("Seu limite é de :"+ salario*1.5);
    }
    
    /**
     * Inicipar pedido do cartão soliciatdo pelo cliente
     * @param salario - salario do cliente
     */
    public void inciairPedidoCartao(double salario){
        if(salario >= 0){
            liberarCartao(salario);
        }else{
            System.out.println("Emissão de cartão não autorizado.");
        }
    }
}