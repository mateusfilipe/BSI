/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package data;

/**
 *
 * @author Angela
 */
public class main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Data data = new Data(9,6,2000);
        System.out.println(data.toString());
        data.avancarData();
        System.out.println(data.toString());
        
        Data dataVazia = new Data();
        System.out.println(dataVazia.toString());
        
    }
    
}
