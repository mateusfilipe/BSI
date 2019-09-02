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
public class Cartao {
    private double limite;
    private Data validade;
    private double fatura;
    private ContaBancaria contaAssociada;
    
    /**
     * Construtor da classe cartão
     * @param limite - limite do cartão 150% do saalário
     * @param validade - validade do cartão
     * @param contaAssociada - conta associada ao cartão
     */
    public Cartao(double limite, Data validade, ContaBancaria contaAssociada) {
        this.limite = limite;
        this.validade = validade;
        this.fatura = 0;
        this.contaAssociada = contaAssociada;
    }

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }

    public Data getValidade() {
        return validade;
    }

    public void setValidade(Data validade) {
        this.validade = validade;
    }

    public double getFatura() {
        return fatura;
    }

    public void setFatura(double fatura) {
        this.fatura = fatura;
    }

    public ContaBancaria getContaAssociada() {
        return contaAssociada;
    }

    public void setContaAssociada(ContaBancaria contaAssociada) {
        this.contaAssociada = contaAssociada;
    }
    
    /**
     * Efetuar compra com o cartão, somando
     * @param valorCompra - valor da compra feita com o cartão
     */
    public void comprarComCartao(int valorCompra){
        if(this.fatura+valorCompra >= limite){
            System.out.println("Limite estourado.");
        }else{
            this.fatura+=valorCompra;
        }
    }
    
    /**
     * Impressão da atual situação do cartão
     * @return extrato com situação do cartão
     */
    public String extratoCartao(){
        return "\nLimite atual = "+getLimite() + "\nValidade = "+getValidade() + "\nFatura = ";
    }
}
