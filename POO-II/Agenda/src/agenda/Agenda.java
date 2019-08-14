/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package agenda;
import java.util.Calendar;
/**
 *
 * @author aluno
 */
public class Agenda {

    /**
     * @param args the command line arguments
     */
    public static class Pessoa{
        private String Nome, Sexo;
        private double altura;
        Data DataDeNascimento;
        

        public Pessoa(String Nome, String Sexo, double altura) {
            this.Nome = Nome;
            this.Sexo = Sexo;
            this.altura = altura;
        }
        
        public Pessoa(String Nome, String Sexo, Data DataDeNascimento, double altura) {
            this.Nome = Nome;
            this.Sexo = Sexo;
            this.DataDeNascimento = DataDeNascimento;
            this.altura = altura;
        }

        public void setNome(String Nome) {
            this.Nome = Nome;
        }

        public void setSexo(String Sexo) {
            this.Sexo = Sexo;
        }

        public void setAltura(double altura) {
            this.altura = altura;
        }

        public void setDataDeNascimento(Data DataDeNascimento) {
            this.DataDeNascimento = DataDeNascimento;
        }

        public String getNome() {
            return Nome;
        }

        public String getSexo() {
            return Sexo;
        }

        public double getAltura() {
            return altura;
        }

        public Data getDataDeNascimento() {
            return DataDeNascimento;
        }
       
        public void imprimirDados() {
            if(this.DataDeNascimento != null)
                System.out.println("Nome: " + this.Nome + ", Sexo: " + Sexo + ", Data De Nascimento: " + DataDeNascimento.getData() + ", Altura: " + altura );

            else
                System.out.println("Nome: " + this.Nome + ", Sexo: " + Sexo + ", Altura: " + altura);
        }
        public int getIdade(){
            Calendar dataAtual = Calendar.getInstance();
            int idade;
            idade = dataAtual.get(Calendar.YEAR) - this.DataDeNascimento.getAno();
            return idade;
        }
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Pessoa[] vetorPessoas;
        vetorPessoas = new Pessoa[5];
        
        vetorPessoas[0] = new Pessoa("Mateus Filipe","Masculino", new Data(9,6,2000), 1.65);
        vetorPessoas[1] = new Pessoa("Maria Das Graças","Feminino", new Data(8,7,1952), 1.68);
        vetorPessoas[2] = new Pessoa("Marcos Pires","Masculino",1.72);
        vetorPessoas[3] = new Pessoa("Leonardo Aguilar","Masculino", new Data(26,7,1998),1.63);
        vetorPessoas[4] = new Pessoa("Joana d'Arc","Feminino",new Data(6,1,1412),1.58);
        
        int mulherAcimaDe160 = 0, somaDasIdades = 0, qtdMasculino = 0;
        double mediaDasIdades;
        for(int i = 0 ; i < 5 ; i++){
            if("Feminino".equals(vetorPessoas[i].getSexo()) && vetorPessoas[i].getAltura() > 1.60){
                mulherAcimaDe160++;
            }if("Masculino".equals(vetorPessoas[i].getSexo()) && vetorPessoas[i].getDataDeNascimento() != null){
                qtdMasculino++;
            }          
        }
        for(int i = 0 ; i < 5 ; i++){
            if("Masculino".equals(vetorPessoas[i].getSexo()) && vetorPessoas[i].getDataDeNascimento() != null){
                somaDasIdades += vetorPessoas[i].getIdade();
            }
        }
        mediaDasIdades = somaDasIdades/qtdMasculino;
        System.out.println("Quantidade de Mulheres acima de 1.60 = "+mulherAcimaDe160);
        System.out.println("Média das Idades = "+mediaDasIdades);
        
    }
    
}
