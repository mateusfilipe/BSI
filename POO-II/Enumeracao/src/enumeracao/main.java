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
public class main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Todos os livros:\n");
        for(Book book: Book.values())
            System.out.println(book.getTitulo() + "\n");
    }
    
}

