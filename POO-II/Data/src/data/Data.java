/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package data;

import java.util.Calendar;

/**
 *
 * @author Angela
 */
public class Data {
    private int dia;
    private int mes;
    private int ano;

    public Data(int dia, int mes, int ano) {
        if(dia <= 30)
            this.dia = dia;
        else
            this.dia = 1;
        if(mes <= 12)
            this.mes = mes;
        else
            this.mes = 1;
        this.ano = ano;
    }
    
    public Data(){
        Calendar c = Calendar.getInstance();
        this.dia = c.get(Calendar.DATE);
        this.mes = c.get(Calendar.MONTH);
        this.ano = c.get(Calendar.YEAR);
    }

    public int getDia() {
        return dia;
    }

    public void setDia(int dia) {
        this.dia = dia;
    }

    public int getMes() {
        return mes;
    }

    public void setMes(int mes) {
        this.mes = mes;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    @Override
    public String toString() {
        return dia + "/" + mes + "/" + ano;
    }
    
    public void avancarData(){
        if(dia <= 30){
            dia++;
        }else{
            if(mes <= 11){
                mes++;
            }else{
                ano++;
            }
        }
    }
    
    
    
}
