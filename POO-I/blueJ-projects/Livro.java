/**
 * uma classe que mantém as informações sobre um livro.
 * Isso talvez faça parte de uma aplicação maior
 * como um sistema de biblioteca, por exemplo.
 *
 * @author (Insira seu nome aqui.)
 * @version (Insira a data de hoje aqui.)
 */
public class Livro {

    // os campos
    private String autor;
    private String titulo;
    private int paginas;
    private String numeroReferencia;
    private int emprestado;

    /**
     * configura os campos de autor e titulo
     * quando este objeto é construido.
     */
    public Livro(String autorDoLivro, String tituloDoLivro, int paginasDoLivro) {
        autor = autorDoLivro;
        titulo = tituloDoLivro;
        paginas = paginasDoLivro;
        numeroReferencia = "";
    }
    
    /**
    * Imprime o autor
    *
    */
    
    public void imprimirAutor(){
        System.out.println("Autor: "+autor);
    }
    
    /**
    * Imprime o título
    *
    */
    
    public void imprimirTitulo(){
        System.out.println("Título: "+titulo);
    }
    
    /**
    * Imprime o número de páginas
    * return@ paginas
    */ 
    
    public int getPaginas(){
        return paginas;
    }
    
    /**
    * Imprime os detalhes dos livros
    *
    */
    
    public void imprimirDetalhes(){
        if(numeroReferencia.length() == 0){
            System.out.println("Título: "+titulo+", Autor: "+autor+", Páginas: "+paginas+", ZZZ, Emprestado: "+emprestado+" vezes.");
        }else{
            System.out.println("Título: "+titulo+", Autor: "+autor+", Páginas: "+paginas+", "+numeroReferencia+", Emprestado: "+emprestado+" vezes.");
        }
    }
    
    /**
    * Adiciona um valor para referencia caso ela seja maior ou igual a 3
    *
    */
    public void setNumeroReferencia(String referencia){
        if(referencia.length() >= 3){
            numeroReferencia = referencia;
        }else{
            System.out.println("Erro: Menos que 3 caracteres.");
        }
    }
    
    /**
    * Imprime as referencias
    * return@ numeroReferencia
    */ 
    public String getNumeroReferencia(){
        return numeroReferencia;
    }
    
    /**
    * Contabiliza os livros emprestados
    * return@ paginas
    */ 
    public void emprestar(){
        emprestado++;
    }
    
    /**
    * Retorna o numero de vezes que foi emprestado
    * return@ emprestado
    */ 
    public int getEmprestado(){
        return emprestado;
    }
}
