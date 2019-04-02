
/**
 * Escreva a descrição da classe Aquecedor aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Aquecedor
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private int temperatura;
    private int minimo;
    private int maximo;
    private int incremento;
    
    /**
     * COnstrutor para objetos da classe Aquecedor
     */
    public Aquecedor()
    {
        temperatura = 15;
        incremento = 5;
        minimo = -10;
        maximo = 30;
        
    }

    /**
     * Altera o valor da temperatura em mais 5 deixando mais quente
     *
     */
    public void maisQuente()
    {
        if(temperatura >= maximo){
            System.out.println("Valor limite superior alcançado.");
        }else{
            temperatura = temperatura + incremento;
        }
    }
    
    /**
     * Altera o valor da temperatura em mais 5 deixando mais frio
     * 
     */
    public void maisFrio()
    {
        if(temperatura <= minimo){
            System.out.println("Valor limite inferior alcançado.");
        }else{
            temperatura = temperatura - incremento;
        }
    }
    
    /**
     * Retorna o valor da temperatura
     * return@ temperatura
     * 
     */
    public int getTemperatura()
    {
        return temperatura;
    }
    
    /**
     * Altera o valor do incremento
     * 
     * 
     */
    public void setIncremento(int novoIncremento)
    {
        if(novoIncremento < 0){
            System.out.println("Valor inválido para incremento.");
        }else{
            incremento = novoIncremento;
        }
    }
}
