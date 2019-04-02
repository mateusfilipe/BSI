
/**
 * Maquina de bilhete que vende um tipo de blhete.
 * 
 * @author Mateus 
 * @version 0.1
 */
public class MaquinaDeBilhete2
{
    // determina o preço do bilhete individual.
    private int preço[];
    //determina a quantidade de dinheiro inserida pelo usuário.
    private int saldo;
    //quantidade total de dinheiro que a máquina possui.
    private int total;
    //Quantos bilhetes tem na mquina
    private int nBilhetes;

    /**
     * Constroi uma maquina de bilhetes com o preço especificado.
     */
    public MaquinaDeBilhete2(int qtdBilhetes)
    {
        nBilhetes = qtdBilhetes;
        preço = new int [nBilhetes];
        for(int i = 0 ; i < nBilhetes; i++){
            preço[i]=0;
        }
        saldo = 0;
        total = 0;
    }
    
    /**
     * Define o preço do bilhete na posição de "qualBilhete";
     * @return     
     */
    public void definePreço(int qualBilhete, int PreçoBilhete)
    {
        preço[qualBilhete] = PreçoBilhete;
    }
    
    /**
     * Retorna o preço do bilhete vendido por essa máquina.
     * @return     o preço do bilhete.
     */
    public int getPreço(int qualPreço)
    {
        // ponha seu código aqui
        return preço[qualPreço];
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
     * Imprime todos os bilhetes diponíveis
     *
     * 
     * @return 
     */
    public void listarBilhetes()
    {
        // cobrar do slado o preço do bilhete
        for(int i = 0 ; i < nBilhetes ; i++){
            System.out.println("Bilhete: "+i+", Preço: "+preço[i]);
        }
    }
    
    /**
     * Imprime um bilhete especifico comprado
     *
     * 
     * @return 
     */
    public void imprimirBilhete(int qualBilhete)
    {
        // cobrar do slado o preço do bilhete
        int troco = saldo - preço[qualBilhete];
        if( saldo < preço[qualBilhete])
        {
            System.out.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            System.out.println("INSIRA MAIS DINHEIRO PARA COMPRAR UMA PASSAGEM");
            System.out.println("Dinheiro faltante: "+(saldo-preço[qualBilhete])*-1+" centavos");
            System.out.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        }
        else
        {
            //acumular o saldo no total
            total += preço[qualBilhete];
            //imprimir o bilhete
            System.out.println("###########################");
            System.out.println("Sabará - BH");
            System.out.println("Passagem");
            System.out.println("Valor: " + preço[qualBilhete]);
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
     * Altera o valor do preço unitário de um determinado bilhete
     *
     * 
     * @return 
     */
    public void alterarPreço(int novoPreço, int qualBilhete)
    {
        //confere se o novo preço é igual ao antigo
        if(novoPreço == preço[qualBilhete])
        {
            System.out.println("O novo preço é o mesmo do preço antigo, Preço: "+preço[qualBilhete]);
        }
        else
        {
            System.out.println("Preço antigo: "+preço[qualBilhete]);
            preço[qualBilhete] = novoPreço;
            System.out.println("Novo Preço: "+preço[qualBilhete]);
        }
    }
    
}
