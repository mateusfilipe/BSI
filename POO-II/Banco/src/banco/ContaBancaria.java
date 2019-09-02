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
public class ContaBancaria {
    private Cliente cliente;
    private String tipoConta;
    private Data validade;
    private Data dataCriacao;
    private double saldo;
    private int idConta;
    public int senha;

    public ContaBancaria(Cliente cliente, String tipoConta, Data validade, Data dataCriacao, double saldo, int idConta, int senha) {
        this.cliente = cliente;
        this.tipoConta = tipoConta;
        this.validade = validade;
        this.dataCriacao = dataCriacao;
        this.saldo = saldo;
        this.idConta = idConta;
        this.senha = senha;
    }
    
    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public String getTipoConta() {
        return tipoConta;
    }

    public void setTipoConta(String tipoConta) {
        this.tipoConta = tipoConta;
    }

    public Data getValidade() {
        return validade;
    }

    public void setValidade(Data validade) {
        this.validade = validade;
    }

    public Data getDataCriacao() {
        return dataCriacao;
    }

    public void setDataCriacao(Data dataCriacao) {
        this.dataCriacao = dataCriacao;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public int getIdConta() {
        return idConta;
    }

    public void setIdConta(int idConta) {
        this.idConta = idConta;
    }

    public int getSenha() {
        return senha;
    }

    public void setSenha(int senha) {
        this.senha = senha;
    }
    
    /**
     * Adição uma valor a conta bancária, deposito
     * @param valorDepositado  - valor a ser depositado
     */
    public void depositar(double valorDepositado){
        this.saldo += valorDepositado;
    }
    /**
     * Retirada um valor da conta bancária, saque
     * @param valorSacado - valora a ser retirado
     * @param senha - senha da conta que será
     */
    public void sacar(double valorSacado, int senha){
        if(senha == this.senha){
            if(valorSacado <= this.saldo){
                this.saldo -= valorSacado;
            }else{
                System.out.println("ERROR: Saldo insuficiente.");
            }
        }else{
            System.out.println("ERROR: Senha inválida.");
        }
    }
    
    /**
     * Transferência de valor de uma conta para outra
     * @param conta1 - Conta que irá transferir o valor
     * @param conta2 - Conta que receberá o valor transferido
     * @param valorTransferido - valor a ser transferido
     */
    public void transferir(ContaBancaria conta1, ContaBancaria conta2, double valorTransferido){
        conta1.sacar(valorTransferido, conta1.senha);
        conta2.depositar(valorTransferido);
    }
    
    /**
     * Impressão dos dados de uma determianda conta;
     * @param conta - conta a ter os dados impressos
     * @return dados da conta
     */
    public String DadosDaConta(ContaBancaria conta){
        return "\nId = "+conta.getIdConta() + "\nConta criada em = "+conta.getDataCriacao().getData()+"\nConta valida até = "+conta.getValidade().getData()+"\nSaldo atual = R$"+conta.getSaldo()+"\nTipo de conta = "+conta.getTipoConta();

    }
    
    /**
     * Efetuar pagamento da fatura do cartão por meio de cobrança em cima da mesma conta
     * @param cartao - cartão com a fatura a ser paga
     * @param senha - senha da conta para liberação do pagamento
     */
    public void pagarCartao(Cartao cartao, int senha){
        sacar(cartao.getFatura(),senha);
    }
}
