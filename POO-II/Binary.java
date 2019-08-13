/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package binary;

import javax.swing.JOptionPane;

/**
 *
 * @author Angela
 */
public class Binary {
    
    public static class Binario{
        private int inteiro;
        public Binario(int inteiro){
            this.inteiro = inteiro;
        }

        public int convertToBinary(){
            String response = new String();
            int respBinario = 0;
            while(inteiro > 0){
                response = response + (inteiro%2);
                inteiro/=2;
            }
            respBinario = Integer.parseInt(response);
            return respBinario;
        }
        
    }
    public static void main(String[] args) {
        int aSerConvertido = 0;
        aSerConvertido = Integer.parseInt(JOptionPane.showInputDialog("Digite um Número a ser convertido para binário: "));
        Binario varBinary = new Binario(aSerConvertido);
        
        JOptionPane.showMessageDialog(null, "Seu número em binário: "+varBinary.convertToBinary());
    }
}
