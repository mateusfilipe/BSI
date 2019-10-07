/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package supermercado;

import java.util.ArrayList;

/**
 *
 * @author aluno
 */
public class Pedido {
    private Cliente cliente;
    private ArrayList<ItemPedido> itens;

    public Pedido(Cliente cliente, ArrayList<ItemPedido> itens) {
        this.cliente = cliente;
        this.itens = itens;
    }
    
    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public ArrayList<ItemPedido> getItens() {
        return itens;
    }

    public void setItens(ArrayList<ItemPedido> itens) {
        this.itens = itens;
    }
    
    
    
}
