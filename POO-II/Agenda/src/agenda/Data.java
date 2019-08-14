/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package agenda;

/**
 *
 * @author aluno
 */
public class Data {
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

        public int getDia() {
            return dia;
        }
        public int getMes() {
            return mes;
        }

        public int getAno() {
            return ano;
        }
            
    Data() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
        public String getData(){
            if (dia < 10 && mes > 9)
                return "0"+dia+"/"+mes+"/"+ano; 
            else if (dia < 10 && mes < 10)
                return "0"+dia+"/0"+mes+"/"+ano;
            else if (dia > 9 && mes < 10)
                return dia+"/0"+mes+"/"+ano;
            else if (dia > 9 && mes > 9)
                return +dia+"/"+mes+"/"+ano;
            return null;
        }
        
} 
