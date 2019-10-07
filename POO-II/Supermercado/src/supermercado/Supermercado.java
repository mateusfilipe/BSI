/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package supermercado;

import java.util.ArrayList;
import java.util.Random;
import javax.swing.JOptionPane;

/**
 *
 * @author aluno
 */
public class Supermercado {

    /**
     * @param args the command line arguments
     */
    
    private ArrayList<Produto> listaDeProdutos;
    private ArrayList<Cliente> listaDeClientes;



    public Supermercado() {
        this.listaDeProdutos = new ArrayList<>();
        this.listaDeClientes = new ArrayList<>();
        criarProduto();
        criarCliente();
    }
    
    public void escolherProduto(){
        String impressao = "Escolha o indice do produto = \n";
        for (int i = 0; i < this.listaDeProdutos.size(); i++) {
            impressao = impressao +i+" - "+this.listaDeProdutos.get(i) + 
                    this.listaDeProdutos.get(i).getNome()+" - Preço = "+
                    this.listaDeProdutos.get(i).getPreco()+"\n";
           
        }
        String indiceEscolhido = JOptionPane.showInputDialog(impressao);
        JOptionPane.showMessageDialog(null, "Produto Escolhido foi = "+indiceEscolhido);
        
    }
    
    private void criarProduto(){
        Produto p;
        for (int i = 0; i < 5; i++){ 
            Random r = new Random();
            double q = r.nextDouble();
            p = new Produto(q,"Produto"+i, (int) q);
        }
    }
    private void criarCliente(){
        Cliente c;
        for (int i = 0; i < 5; i++){
            Random r = new Random();
            c = new Cliente("Cliente"+i, r.nextInt());
            this.listaDeClientes.add(c);
        }
    }
    
    public ArrayList<Produto> getListaDeProdutos() {
        return listaDeProdutos;
    }

    public void setListaDeProdutos(ArrayList<Produto> listaDeProdutos) {
        this.listaDeProdutos = listaDeProdutos;
    }

    public ArrayList<Cliente> getListaDeClientes() {
        return listaDeClientes;
    }

    public void setListaDeClientes(ArrayList<Cliente> listaDeClientes) {
        this.listaDeClientes = listaDeClientes;
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Supermercado mercadao = new Supermercado();
        mercadao.escolherProduto();
    }
    
}
