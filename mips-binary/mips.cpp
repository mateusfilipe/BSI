//Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iomanip>
#include <math.h>

int TAM;

using namespace std;

/*
    Formatos de comandos: R, I , J
    >>>R:
    *-----------------------------------------------------*
    | op(6) | rs(5) | rt(5) | rd(5) | shamt(5) | funct(6) |
    |       |       |       |       |          |          |
    *-----------------------------------------------------*
    >>>I:
    *-----------------------------------------------------*
    | op(6) | rs(5) | rt(5) |        imeddiante(16)       |
    |       |       |       |                             |
    *-----------------------------------------------------*
    >>>J:
    *-----------------------------------------------------*
    | op(6) |                   address(26)               |
    |       |                                             |
    *-----------------------------------------------------*
*/


void lerArquivo(char *nomeArquivo); //Executa a leitura do arquivo;
void getOperation(char *dados); //Descobre o valor da função op;
int getRegister(char *dados); //Descobre o valor do registrador, seja, rs, rt, rd;
void tipoI(char *dados, int op); //Exexuta a conversão e gravação em funções do tipo I;
void tipoII(char *dados, int op); //Exexuta a conversão e gravação em funções do tipo I diferenciadas;
void tipoR(char *dados); //Exexuta a conversão e gravação em funções do tipo R;
void tipoJ(char *dados); //Exexuta a conversão e gravação em funções do tipo J;


long long int bin(long long int k) //Converter número em binário;
{
    if ( k < 2 )
        return k;

    return ( 10 * bin( k / 2 ) ) + k % 2;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    lerArquivo("programa3.txt");
    cout<<endl;
    system("PAUSE");
    return 0;
}

void lerArquivo(char *nomeArquivo)
{
    ifstream ler;
    ofstream saida;

    saida.open("saida.txt",fstream::app);

    ler.open(nomeArquivo);
    char linhas[255];
    char *ch;
    while(!ler.eof())
    {
        ler.getline(linhas, 255);
        ch = strtok(linhas," ");
        getOperation(ch);
        //cout<<ch<<endl;
        //ch = strtok(NULL," ");
        //cout<<ch;
        //cout<<" rs: "<<getRegister(ch)<<endl;

    }
    ler.close();
}

void tipoR(char *dados, int op, int funct)
{
    int rs, rt, rd, shamt, funct1;
    ofstream saida;
    saida.open("saida.txt",fstream::app);

    //saida  /*<<"op: "*/<<bin(op) <<" ";
    saida  << setw(6)<<setfill('0') << bin(op) <<""; //GRAVA OP

    dados = strtok(NULL,",");
    cout<<dados<<endl;
    //saida /*<<"r: "*/<<bin(getRegister(dados))<<" ";
    //saida  << setw(5)<<setfill('0') << bin(getRegister(dados))<<" "; //GRAVA R
    rt = bin(getRegister(dados));



    dados = strtok(NULL,", ,");
    cout<<dados<<endl;
    //saida /*<<"r: "*/<<bin(getRegister(dados))<<" ";

    //saida  << setw(5)<<setfill('0') << bin(getRegister(dados))<<" "; //GRAVA R
    rs = bin(getRegister(dados));


    dados = strtok(NULL,", , ,");
    cout<<dados<<endl;
    //saida /*<<"r: "*/<<bin(getRegister(dados))<<" ";

    //saida  << setw(5)<<setfill('0') << bin(getRegister(dados))<<" "; //GRAVA R
    rd = bin(getRegister(dados));

    //saida /*<<"shamt: "*/<<bin(0)<<" ";
    //saida  << setw(5)<<setfill('0') << bin(0)<<" "; //GRAVA SHAMT
    shamt = bin(0);

    //saida /*<<"funct: "*/<<bin(funct)<<" ";
   // saida  << setw(6)<<setfill('0') << bin(funct)<<" ";
    funct1 = bin(funct);

    saida  << setw(5)<<setfill('0') << rs <<"";
    saida  << setw(5)<<setfill('0') << rt <<"";
    saida  << setw(5)<<setfill('0') << rd <<"";
    saida  << setw(5)<<setfill('0') << shamt <<"";
    saida  << setw(6)<<setfill('0') << funct1 <<"";


    saida<<endl;
}

void tipoI(char *dados, int op)
{
    int rs, rt;
    long long n;

    ofstream saida;

    saida.open("saida.txt",fstream::app);

    saida  << setw(6)<<setfill('0')/*<<"op: "*/<<bin(op)<< "";
    //Escrevendo OP:

    dados = strtok(NULL, ",");
    rt = bin(getRegister(dados));
   //saida  << setw(5)<<setfill('0') << bin(getRegister(dados))<<" ";

    //cout<<dados<<endl;
    //saida /*<<"r: "*/<<bin(getRegister(dados))<<" ";

    dados = strtok(NULL," (");
    cout<<dados<<endl;
    n = bin(atoi(dados));

    dados = strtok(NULL,")");
    cout<<dados<<endl;
    rs = bin(getRegister(dados));

    //saida /*<< "rt: "*/<<r<<" ";
    //saida /*<< "num: "*/<<n<<" ";

    saida  <</*"rs:" <<*/setw(5)<<setfill('0') << rs <<"";
    saida  <</*"rt:" <<*/setw(5)<<setfill('0') << rt <<"";
    saida  <</*"n:"<<*/ setw(16)<<setfill('0') << n <<"";

    saida<<endl;
}

void tipoII(char *dados, int op)
{
    int rs, rt;
    long long n;

    ofstream saida;

    saida.open("saida.txt",fstream::app);
    //Escrevendo OP:
    saida  << setw(6)<<setfill('0')/*<<"op: "*/<<bin(op)<< "";

    dados = strtok(NULL, ",");
    rt = bin(getRegister(dados));
    //saida  << setw(5)<<setfill('0') << bin(getRegister(dados))<<" ";

    //cout<<dados<<endl;
    //saida /*<<"r: "*/<<bin(getRegister(dados))<<" ";

    dados = strtok(NULL,", ");
    cout<<dados<<endl;
    rs = bin(getRegister(dados));

    dados = strtok(NULL," ");
    cout<<dados<<endl;
    n = bin(atoi(dados));



    //saida /*<< "rt: "*/<<r<<" ";
    //saida /*<< "num: "*/<<n<<" ";

    saida  <</*"rs:" <<*/setw(5)<<setfill('0') << rs <<"";
    saida  <</*"rt:" <<*/setw(5)<<setfill('0') << rt <<"";
    saida  <</*"n:"<<*/ setw(16)<<setfill('0') << n <<"";

    saida<<endl;
}

void tipoJ(char *dados, int op){

    ofstream saida;
    saida.open("saida.txt",fstream::app);

    //saida  /*<<"op: "*/<<bin(op) <<" ";
    saida  << setw(6)<<setfill('0') << bin(op) <<""; //GRAVA OP

    dados = strtok(NULL, " ");

    saida << setw(26)<<setfill('0') << bin(atoi(dados)) <<"";
    saida << endl;
}

void getOperation(char *dados)
{
    cout<<dados<<endl;
    /*
        *********************************************************************************
        *******************COMEÇANDO PROCURA POR COMANDOS DO TIPO 'I'********************
        *********************************************************************************
    */
    if(dados[0] == 'l' && dados[1] == 'b')  //LB
    {
        tipoI(dados, 32);
        //return 32;   op(LB);
    }
    else if(dados[0] == 'l' && dados[1] == 'h' )  //LH
    {
        tipoI(dados, 33);
        //return 33;   op(LH);
    }
    else if(dados[0] == 'l' && dados[1] == 'w' && dados[2] == 'l')  //LWL
    {
        tipoI(dados, 34);
        //return 34;   op(LWL);
    }
    else if(dados[0] == 'l' && dados[1] == 'w')  //LW
    {
        tipoI(dados, 35);
        //return 35;   op(LW);
    }
    else if(dados[0] == 'l' && dados[1] == 'b' && dados[2] == 'u')  //LBU
    {
        tipoI(dados, 36);
        //return 36;   op(LBU);
    }
    else if(dados[0] == 'l' && dados[1] == 'h' && dados[2] == 'u')  //LHU
    {
        tipoI(dados, 37);
        //return 37;   op(LHU);
    }
    else if(dados[0] == 'l' && dados[1] == 'w' && dados[2] == 'r')  //LWR
    {
        tipoI(dados, 38);
        //return 38;   op(LWR);
    }
    else if(dados[0] == 's' && dados[1] == 'b')  //SB
    {
        tipoI(dados, 40);
        //return 40;   op(SB);
    }
    else if(dados[0] == 's' && dados[1] == 'h')  //SH
    {
        tipoI(dados, 41);
        //return 41;   op(SH);
    }
    else if(dados[0] == 's' && dados[1] == 'w' && dados[2] == 'l')  //SWL
    {
        tipoI(dados, 42);
        //return 42;   op(SWL);
    }
    else if(dados[0] == 's' && dados[1] == 'w')  //SW
    {
        tipoI(dados, 43);
        //return 43;   op(SW);
    }
    else if(dados[0] == 's' && dados[1] == 'w' && dados[2] == 'r')  //SWR
    {
        tipoI(dados, 46);
        //return 46;   op(SWR);
    }
    else if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd' && dados[3] == 'i')  //ADDI
    {
        tipoII(dados, 8);
        //return 8;   op(ADDI);
    }
    else if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd' && dados[3] == 'i' && dados[4] == 'u')  //ADDIU
    {
        tipoII(dados, 9);
        //return 9;   op(ADDIU);
    }
    else if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'i')  //SLTI
    {
        tipoII(dados, 10);
        //return 10;   op(SLTI);
    }
    else if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'i' && dados[4] == 'u')  //SLTIU
    {
        tipoII(dados, 11);
        //return 11;   op(SLTIU);
    }
    else if(dados[0] == 'a' && dados[1] == 'n' && dados[2] == 'd' && dados[3] == 'i')  //ANDI
    {
        tipoII(dados, 12);
        //return 12;   op(ANDI);
    }
    else if(dados[0] == 'o' && dados[1] == 'r' && dados[2] == 'i')  //ORI
    {
        tipoII(dados, 13);
        //return 13;   op(ORI);
    }
    else if(dados[0] == 'x' && dados[1] == 'o' && dados[2] == 'r' && dados[3] == 'i')  //XORI
    {
        tipoII(dados, 14);
        //return 14;   op(XORI);
    }
    else if(dados[0] == 'l' && dados[1] == 'u' && dados[2] == 'i')  //LUI
    {
        tipoII(dados, 15);
        //return 15;   op(LUI);
    }
    else if(dados[0] == 'b' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'z')  //BLTZ
    {
        tipoI(dados, 1);
        //return 1;   op(BLTZ);
    }
    else if(dados[0] == 'b' && dados[1] == 'g' && dados[2] == 'e' && dados[3] == 'z')  //BGEZ
    {
        tipoI(dados, 1);
        //return 1;   op(BGEZ);
    }
    else if(dados[0] == 'b' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'z' && dados[4] == 'a' && dados[5] == 'l')  //BLTZAL
    {
        tipoI(dados, 1);
        //return 1;   op(BLTZAL);
    }
    else if(dados[0] == 'b' && dados[1] == 'g' && dados[2] == 'e' && dados[3] == 'z' && dados[4] == 'a' && dados[5] == 'l')  //BGEZAL
    {
        tipoI(dados, 1);
        //return 1;   op(BGEZAL);
    }
    else if(dados[0] == 'b' && dados[1] == 'e' && dados[2] == 'q')  //BEQ
    {
        tipoI(dados, 4);
        //return 4;   op(BEQ);
    }
    else if(dados[0] == 'b' && dados[1] == 'n' && dados[2] == 'e')  //BNE
    {
        tipoI(dados, 5);
        //return 5;   op(BNE);
    }
    else if(dados[0] == 'b' && dados[1] == 'l' && dados[2] == 'e' && dados[3] == 'z')  //BLEZ
    {
        tipoI(dados, 6);
        //return 6;   op(BLEZ);
    }
    else if(dados[0] == 'b' && dados[1] == 'g' && dados[2] == 't' && dados[3] == 'z')  //BGTZ
    {
        tipoI(dados, 7);
        //return 7;   op(BGTZ);
    }
    /*
        *********************************************************************************
        *******************ENCERRANDO PROCURA POR COMANDOS DO TIPO 'I'*******************
        *********************************************************************************
    */
    //======================================================================================//
    /*
       *********************************************************************************
       *******************COMEÇANDO PROCURA POR COMANDOS DO TIPO 'R'********************
       *********************************************************************************
    */
    else if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd')  //ADD
    {
        tipoR(dados, 0, 32);
        //return 0;   op(ADD);
    }
    else if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd' && dados[2] == 'u')  //ADDU
    {
        tipoR(dados, 0, 33);
        //return 0;   op(ADDU);
    }
    else if(dados[0] == 's' && dados[1] == 'u' && dados[2] == 'b')  //SUB
    {
        tipoR(dados, 0, 34);
        //return 0;   op(SUB);
    }
    else if(dados[0] == 's' && dados[1] == 'u' && dados[2] == 'b' && dados[3] == 'u')  //SUBU
    {
        tipoR(dados, 0, 35);
        //return 0;   op(SUBU);
    }
    else if(dados[0] == 'a' && dados[1] == 'n' && dados[2] == 'd')  //AND
    {
        tipoR(dados, 0, 36);
        //return 0;   op(AND);
    }
    else if(dados[0] == 'o' && dados[1] == 'r')  //OR
    {
        tipoR(dados, 0, 37);
        //return 0;   op(OR);
    }
    else if(dados[0] == 'x' && dados[1] == 'o' && dados[2] == 'r')  //XOR
    {
        tipoR(dados, 0, 38);
        //return 0;   op(XOR);
    }
    else if(dados[0] == 'n' && dados[1] == 'o' && dados[2] == 'r')  //NOR
    {
        tipoR(dados, 0, 39);
        //return 0;   op(NOR);
    }
    else if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't')  //SLT
    {
        tipoR(dados, 0, 42);
        //return 0;   op(SLT);
    }
    else if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'u')  //SLTU
    {
        tipoR(dados, 0, 43);
        //return 0;   op(SLTU);
    }
    else if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 'l')  //SLL
    {
        tipoR(dados, 0, 0);
        //return 0;   op(SLL);
    }
    else if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'l')  //SRL
    {
        tipoR(dados, 0, 2);
        //return 0;   op(SRL);
    }
    else if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'a')  //SRA
    {
        tipoR(dados, 0, 3);
        //return 0;   op(SRA);
    }
    else if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 'l' && dados[3] == 'v')  //SLLV
    {
        tipoR(dados, 0, 4);
        //return 0;   op(SLLW);
    }
    else if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'l' && dados[3] == 'v')  //SRLV
    {
        tipoR(dados, 0, 6);
        //return 0;   op(SRLV);
    }
    else if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'a' && dados[3] == 'v')  //SRAV
    {
        tipoR(dados, 0, 7);
        //return 0;   op(SRAV);
    }
    else if(dados[0] == 'm' && dados[1] == 'f' && dados[2] == 'h' && dados[3] == 'i')  //MFHI
    {
        tipoR(dados, 0, 16);
        //return 0;   op(MFHI);
    }
    else if(dados[0] == 'm' && dados[1] == 't' && dados[2] == 'h' && dados[3] == 'i')  //MTHI
    {
        tipoR(dados, 0, 17);
        //return 0;   op(MTHI);
    }
    else if(dados[0] == 'm' && dados[1] == 'f' && dados[2] == 'l' && dados[3] == 'o')  //MFLO
    {
        tipoR(dados, 0, 18);
        //return 0;   op(MFLO);
    }
    else if(dados[0] == 'm' && dados[1] == 't' && dados[2] == 'l' && dados[2] == 'o')  //MTLO
    {
        tipoR(dados, 0, 19);
        //return 0;   op(MTLO);
    }
    else if(dados[0] == 'm' && dados[1] == 'u' && dados[2] == 'l' && dados[3] == 't')  //MULT
    {
        tipoR(dados, 0, 24);
        //return 0;   op(MULT);
    }
    else if(dados[0] == 'm' && dados[1] == 'u' && dados[2] == 'l' && dados[3] == 't' && dados[4] == 'u')  //MULTU
    {
        tipoR(dados, 0, 25);
        //return 0;   op(MULTU);
    }
    else if(dados[0] == 'd' && dados[1] == 'i' && dados[2] == 'v')  //DIV
    {
        tipoR(dados, 0, 26);
        //return 0;   op(DIV);
    }
    else if(dados[0] == 'd' && dados[1] == 'i' && dados[2] == 'v' && dados[3] == 'u')  //DIVU
    {
        tipoR(dados, 0, 27);
        //return 0;   op(DIVU);
    }
    else if(dados[0] == 'j' && dados[1] == 'r')  //JR
    {
        tipoR(dados, 0, 8);
        //return 0;   op(JR);
    }
    else if(dados[0] == 'j' && dados[1] == 'a' && dados[2] == 'l' && dados[3] == 'r')  //JALR
    {
        tipoR(dados, 0, 9);
        //return 0;   op(JALR);
    }
    /*
        *********************************************************************************
        *******************ENCERRANDO PROCURA POR COMANDOS DO TIPO 'R'*******************
        *********************************************************************************
    */
    //======================================================================================//
    /*
       *********************************************************************************
       *******************COMEÇANDO PROCURA POR COMANDOS DO TIPO 'J'********************
       *********************************************************************************
    */
    else if(dados[0] == 'j' && dados[1] == NULL)  //J
    {
        tipoJ(dados, 2);
        //return 2;   op(J);
    }
    else if(dados[0] == 'j' && dados[1] == 'a' && dados[2] == 'l')  //JAL
    {
        tipoJ(dados, 3);
        //return 3;   op(JAL);
    }
    /*
        *********************************************************************************
        *******************ENCERRANDO PROCURA POR COMANDOS DO TIPO 'J'*******************
        *********************************************************************************
    */
}

int getRegister(char *dados)
{
    if(dados[1] == 't')  //$t+
    {
        if(dados[2] == '0')  //$t0
        {
            return 8;
        }
        else if(dados[2] == '1')   //$t1
        {
            return 9;
        }
        else if(dados[2] == '2')   //$t2
        {
            return 10;
        }
        else if(dados[2] == '3')   //$t3
        {
            return 11;
        }
        else if(dados[2] == '4')   //$t4
        {
            return 12;
        }
        else if(dados[2] == '5')   //$t5
        {
            return 13;
        }
        else if(dados[2] == '6')   //$t6
        {
            return 14;
        }
        else if(dados[2] == '7')   //$t7
        {
            return 15;
        }
    }
    else if(dados[1] == 's')   //$s+
    {
        if(dados[2] == '0')  //$s0
        {
            return 16;
        }
        else if(dados[2] == '1')   //$s1
        {
            return 17;
        }
        else if(dados[2] == '2')   //$s2
        {
            return 18;
        }
        else if(dados[2] == '3')   //$s3
        {
            return 19;
        }
        else if(dados[2] == '4')   //$s4
        {
            return 20;
        }
        else if(dados[2] == '5')   //$s5
        {
            return 21;
        }
        else if(dados[2] == '6')   //$s6
        {
            return 22;
        }
        else if(dados[2] == '7')   //$s7
        {
            return 23;
        }

        else if(dados[2] == 'z')   //$szero
        {
            return 0;
        }
    }
}
