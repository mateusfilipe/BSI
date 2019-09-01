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
     * @return TRUE caso seja elegível, FALSE caso não seja elegível
     */
    public boolean liberarEmprestimo(Cliente clienteE, ContaBancaria contaClienteE){
        return clienteE.getSalario() >= 998 && contaClienteE.getSaldo() >= 1497 && clienteE.getProfissao() != null;
    }
    
    /**
     * Inciar pedido de empréstimo de um cliente
     * @param cliente - cliente que está fazendo empréstimo
     * @param contaCliente - conta do cliente que solicitou empréstimo
     * @param valorEmprestimo  - valor solicitado do empréstimo
     */
    public void inciarPedidoEmprestimo(Cliente cliente, ContaBancaria contaCliente, int valorEmprestimo){
        if(liberarEmprestimo(cliente, contaCliente)){    
            if(valorEmprestimo <= 10000){
                contaCliente.depositar(valorEmprestimo);
            }else{
                contaCliente.depositar(valorEmprestimo);
                contaCliente.sacar(valorEmprestimo/100, contaCliente.getSenha());
            }
        }else{
            System.out.println("Impréstimo não pode ser realizado, verificar na agência.");
        }
    }
    
    public boolean liberarCartao(Cliente clienteC){
        return clienteC.getProfissao() != null && clienteC.getSalario() != 0;
    }
    
    public void inciairPedidoCartao(){
        System.out.println("Toma um cartão");
    }
}