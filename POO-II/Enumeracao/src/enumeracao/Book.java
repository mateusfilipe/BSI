/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package enumeracao;

/**
 *
 * @author aluno
 */
public enum Book {
    JHTP("Java how to program","2010"),
    CHTP("C how to program","2017");
    private final String titulo;
    private final String ano;
    Book(String t, String a){
        titulo = t;
        ano = a;
    }
    public String getTitulo(){
        return titulo;
    }
}
