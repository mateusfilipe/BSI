
/**
 * Escreva a descrição da classe Pessoa aqui.
 * 
 * @author Mateus
 * @version 0.1
 */
public class Pessoa
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String nome;
    private int idade;
    private String codigo;
    private int creditos;
    
    /**
     * Construtor para objetos da classe Pessoa
     */
    public Pessoa(String meuNome, int minhaIdade)
    {
        nome = meuNome;
        idade = minhaIdade;
        codigo = "0";
        creditos = 0;
    }

    /**
     * getNome() - Método no qual imprime o nome cadastrado;
     * 
     * @return     nome 
     */
    public String getNome()
    {
        return nome;
    }
    
    /**
     * setIdade() - Método no qual altera a atual idade;
     * 
     * @return    
     */
    public void setIdade(int NovaIdade)
    {
        idade = NovaIdade;
    }
    
    /**
     * setIdade() - Método no qual altera a atual idade;
     * 
     * @return    
     */
    public void imprimirDetalhes()
    {
        System.out.println("Nome: "+nome+", "+idade+" anos");
    }
}
