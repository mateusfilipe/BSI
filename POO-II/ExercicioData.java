/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exerciciodata;

/**
 *
 * @author aluno
 */
public class ExercicioData {

    public static class Data{
        private int dia;
        private int mes;
        private int ano;
        
        public Data(int dia, int mes){
            this.dia = dia;
            this.mes = mes;
            ano = 2019;

        }                
        public Data(int dia, int mes, int ano){
            this.dia = dia;
            this.mes = mes;
            this.ano = ano;
        }        
        public void getData(){
            if (dia < 10 && mes > 9)
                System.out.println("0"+dia+"/"+mes+"/"+ano); 
            else if (dia < 10 && mes < 10)
                System.out.println("0"+dia+"/0"+mes+"/"+ano);
            else if (dia > 9 && mes < 10)
                System.out.println(dia+"/0"+mes+"/"+ano);
            else if (dia > 9 && mes > 9)
                System.out.println(+dia+"/"+mes+"/"+ano);
        }
        
    }                                                                                  
    public static void main(String[] args) {
        Data dataComAno = new Data(7,8);
        Data dataSemAno = new Data(9,10,2011);
        
        dataComAno.getData();
        dataSemAno.getData();
        
    }
    
}
