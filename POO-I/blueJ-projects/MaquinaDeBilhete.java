
/**
 * Maquina de bilhete que vende um tipo de blhete.
 * 
 * @author Marcos 
 * @version 0.1
 */
public class MaquinaDeBilhete
{
    // determina o preço do bilhete individual.
    private int preço;
    //determina a quantidade de dinheiro inserida pelo usuário.
    private int saldo;
    //quantidade total de dinheiro que a máquina possui.
    private int total;

    /**
     * Constroi uma maquina de bilhetes com o preço especificado.
     */
    public MaquinaDeBilhete(int PreçoDoBilhete)
    {
        preço = PreçoDoBilhete;
        saldo = 0;
        total = 0;
    }
    
    /**
     * Constroi uma maquina de bilhetes com o preço padrão de 200.
     */
    public MaquinaDeBilhete()
    {
        preço = 200;
        saldo = 0;
        total = 0;
    }
    
    
    /**
     * Retorna o preço do bilhete vendido por essa máquina.
     * @return     o preço do bilhete.
     */
    public int getPreço()
    {
        // ponha seu código aqui
        return preço;
    }

    /**
     * Coleta o dinheiro do usuário.
     *
     * @param  quantia   recebe o dinheiro do usuário
     * @return     
     */
    public void inserirDinheiro(int quantia)
    {
        saldo += quantia;
    }

    /**
     * Imprime o bilhete comprado
     *
     * 
     * @return 
     */
    public void imprimirBilhete()
    {
        // cobrar do slado o preço do bilhete
        int troco = saldo - preço;
        if( saldo < preço)
        {
            System.out.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            System.out.println("INSIRA MAIS DINHEIRO PARA COMPRAR UMA PASSAGEM");
            System.out.println("Dinheiro faltante: "+(saldo-preço)*-1+" centavos");
            System.out.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        }
        else
        {
                //acumular o saldo no total
            total += preço;
            //imprimir o bilhete
            System.out.println("###########################");
            System.out.println("Sabará - BH");
            System.out.println("Passagem");
            System.out.println("Valor: " + preço);
            System.out.println("Troco: " + troco);
            System.out.println("###########################");
            
            saldo = 0;
        }
    }

    /**
     * Retira todo o dinheiro
     *
     * 
     * @return 
     */
    public void retirarTotal()
    {
        //confere se a dinheiro na maquina
        if(total > 0)
        {
            System.out.println("Total retirado: "+total);
            total = 0;
        }
        else
        {
            System.out.println("!!!!!!!!!!!!!!!!!!");
            System.out.println("SALDO NULO!");
            System.out.println("!!!!!!!!!!!!!!!!!!");
        
        }
    }
    
    /**
     * Altera o valor do preço unitário
     *
     * 
     * @return 
     */
    public void alterarPreço(int novoPreço)
    {
        //confere se o novo preço é igual ao antigo
        if(novoPreço == preço)
        {
            System.out.println("O novo preço é o mesmo do preço antigo, Preço: "+preço);
        }
        else
        {
            System.out.println("Preço antigo: "+preço);
            preço = novoPreço;
            System.out.println("Novo Preço: "+preço);
        }
    }
    
}
