 //Mateus Filipe De Lima Souza - BSI

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <string.h>

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


void lerArquivo(char *nomeArquivo);
int getOperation(char *dados);
int getRegister(char *dados);
int getShamt(char *dados);
int getFunct(char *dados);
int getImmediate(char *dados);
int getAddres(char *dados);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    lerArquivo("programa1.txt");
    cout<<endl;
    system("PAUSE");
    return 0;
}

void lerArquivo(char *nomeArquivo)
{
//    FILE * arqLinhas = fopen(nomeArquivo, "r");
//    int linhas = 1;
//    char *aux;
//    while(fread (aux, sizeof(char), 1 , arqLinhas)){
//        if(*aux == '\n'){
//            linhas++;
//        }
//    }
//
//    FILE * arq = fopen(nomeArquivo, "r");
//    char texto[linhas][255];
//    int pL = 0;
//
//    char comando[7];
//    cout<<"\n*Conteúdo do arquivo: "<<endl;
//    while(!feof(arq))
//    {
//        fgets(texto[pL], 255,arq);
//        cout<<texto[pL];
//        pL++;
//    }
//
//    cout<<"\n\n*Número de linhas: "<<pL<<endl;

    ifstream ler;
    ler.open(nomeArquivo);
    char linhas[255];
    char *ch;
    while(!ler.eof()){
        ler.getline(linhas, 255);
        ch = strtok(linhas," ");
        cout<<linhas<<endl;
        //cout<<"rs: "<<getRegister(ch);
        cout<<ch;
        ch = strtok(NULL," ");
        //cout<<"op: "<<getOperation(ch);
        cout<<ch;

        ch = strtok(NULL," ");
        cout<<ch;

        ch = strtok(NULL," ");
        cout<<ch;

        cout<<endl;
    }
}
int getOperation(char *dados){
    int op;
    cout<<dados<<endl;
    /*
        *********************************************************************************
        *******************COMEÇANDO PROCURA POR COMANDOS DO TIPO 'I'********************
        *********************************************************************************
    */
    if(dados[0] == 'l' && dados[1] == 'b'){ //LB
        return 32; //return op(LB);
    }
    if(dados[0] == 'l' && dados[1] == 'h' ){ //LH
        return 33; //return op(LH);
    }
    if(dados[0] == 'l' && dados[1] == 'w' && dados[2] == 'l'){ //LWL
        return 34; //return op(LWL);
    }
    if(dados[0] == 'l' && dados[1] == 'w'){ //LW
        return 35; //return op(LW);
    }
    if(dados[0] == 'l' && dados[1] == 'b' && dados[2] == 'u'){ //LBU
        return 36; //return op(LBU);
    }
    if(dados[0] == 'l' && dados[1] == 'h' && dados[2] == 'u'){ //LHU
        return 37; //return op(LHU);
    }
    if(dados[0] == 'l' && dados[1] == 'w' && dados[2] == 'r'){ //LWR
        return 38; //return op(LWR);
    }
    if(dados[0] == 's' && dados[1] == 'b'){ //SB
        return 40; //return op(SB);
    }
    if(dados[0] == 's' && dados[1] == 'h'){ //SH
        return 41; //return op(SH);
    }
    if(dados[0] == 's' && dados[1] == 'w' && dados[2] == 'l'){ //SWL
        return 42; //return op(SWL);
    }
    if(dados[0] == 's' && dados[1] == 'w'){ //SW
        return 43; //return op(SW);
    }
    if(dados[0] == 's' && dados[1] == 'w' && dados[2] == 'r'){ //SWR
        return 46; //return op(SWR);
    }
    if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd' && dados[3] == 'i'){ //ADDI
        return 8; //return op(ADDI);
    }
    if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd' && dados[3] == 'i' && dados[4] == 'u'){ //ADDIU
        return 9; //return op(ADDIU);
    }
    if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'i'){ //SLTI
        return 10; //return op(SLTI);
    }
    if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'i' && dados[4] == 'u'){ //SLTIU
        return 11; //return op(SLTIU);
    }
    if(dados[0] == 'a' && dados[1] == 'n' && dados[2] == 'd' && dados[3] == 'i'){ //ANDI
        return 12; //return op(ANDI);
    }
    if(dados[0] == 'o' && dados[1] == 'r' && dados[2] == 'i'){ //ORI
        return 13; //return op(ORI);
    }
    if(dados[0] == 'x' && dados[1] == 'o' && dados[2] == 'r' && dados[3] == 'i'){ //XORI
        return 14; //return op(XORI);
    }
    if(dados[0] == 'l' && dados[1] == 'u' && dados[2] == 'i'){ //LUI
        return 15; //return op(LUI);
    }
    if(dados[0] == 'b' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'z'){ //BLTZ
        return 1; //return op(BLTZ);
    }
    if(dados[0] == 'b' && dados[1] == 'g' && dados[2] == 'e' && dados[3] == 'z'){ //BGEZ
        return 1; //return op(BGEZ);
    }
    if(dados[0] == 'b' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'z' && dados[4] == 'a' && dados[5] == 'l'){ //BLTZAL
        return 1; //return op(BLTZAL);
    }
    if(dados[0] == 'b' && dados[1] == 'g' && dados[2] == 'e' && dados[3] == 'z' && dados[4] == 'a' && dados[5] == 'l'){ //BGEZAL
        return 1; //return op(BGEZAL);
    }
    if(dados[0] == 'b' && dados[1] == 'e' && dados[2] == 'q'){ //BEQ
        return 4; //return op(BEQ);
    }
    if(dados[0] == 'b' && dados[1] == 'n' && dados[2] == 'e'){ //BNE
        return 5; //return op(BNE);
    }
    if(dados[0] == 'b' && dados[1] == 'l' && dados[2] == 'e' && dados[3] == 'z'){ //BLEZ
        return 6; //return op(BLEZ);
    }
    if(dados[0] == 'b' && dados[1] == 'g' && dados[2] == 't' && dados[3] == 'z'){ //BGTZ
        return 7; //return op(BGTZ);
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
    if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd'){ //ADD
        return 0; //return op(ADD);
    }
    if(dados[0] == 'a' && dados[1] == 'd' && dados[2] == 'd' && dados[2] == 'u'){ //ADDU
        return 0; //return op(ADDU);
    }
    if(dados[0] == 's' && dados[1] == 'u' && dados[2] == 'b'){ //SUB
        return 0; //return op(SUB);
    }
    if(dados[0] == 's' && dados[1] == 'u' && dados[2] == 'b' && dados[3] == 'u'){ //SUBU
        return 0; //return op(SUBU);
    }
    if(dados[0] == 'a' && dados[1] == 'n' && dados[2] == 'd'){ //AND
        return 0; //return op(AND);
    }
    if(dados[0] == 'o' && dados[1] == 'r'){ //OR
        return 0; //return op(OR);
    }
    if(dados[0] == 'x' && dados[1] == 'o' && dados[2] == 'r'){ //XOR
        return 0; //return op(XOR);
    }
    if(dados[0] == 'n' && dados[1] == 'o' && dados[2] == 'r'){ //NOR
        return 0; //return op(NOR);
    }
    if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't'){ //SLT
        return 0; //return op(SLT);
    }
    if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 't' && dados[3] == 'u'){ //SLTU
        return 0; //return op(SLTU);
    }
    if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 'l'){ //SLL
        return 0; //return op(SLL);
    }
    if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'l'){ //SRL
        return 0; //return op(SRL);
    }
    if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'a'){ //SRA
        return 0; //return op(SRA);
    }
    if(dados[0] == 's' && dados[1] == 'l' && dados[2] == 'l' && dados[3] == 'v'){ //SLLV
        return 0; //return op(SLLW);
    }
    if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'l' && dados[3] == 'v'){ //SRLV
        return 0; //return op(SRLV);
    }
    if(dados[0] == 's' && dados[1] == 'r' && dados[2] == 'a' && dados[3] == 'v'){ //SRAV
        return 0; //return op(SRAV);
    }
    if(dados[0] == 'm' && dados[1] == 'f' && dados[2] == 'h' && dados[3] == 'i'){ //MFHI
        return 0; //return op(MFHI);
    }
    if(dados[0] == 'm' && dados[1] == 't' && dados[2] == 'h' && dados[3] == 'i'){ //MTHI
        return 0; //return op(MTHI);
    }
    if(dados[0] == 'm' && dados[1] == 'f' && dados[2] == 'l' && dados[3] == 'o'){ //MFLO
        return 0; //return op(MFLO);
    }
    if(dados[0] == 'm' && dados[1] == 't' && dados[2] == 'l' && dados[2] == 'o'){ //MTLO
        return 0; //return op(MTLO);
    }
    if(dados[0] == 'm' && dados[1] == 'u' && dados[2] == 'l' && dados[3] == 't'){ //MULT
        return 0; //return op(MULT);
    }
    if(dados[0] == 'm' && dados[1] == 'u' && dados[2] == 'l' && dados[3] == 't' && dados[4] == 'u'){ //MULTU
        return 0; //return op(MULTU);
    }
    if(dados[0] == 'd' && dados[1] == 'i' && dados[2] == 'v'){ //DIV
        return 0; //return op(DIV);
    }
    if(dados[0] == 'd' && dados[1] == 'i' && dados[2] == 'v' && dados[3] == 'u'){ //DIVU
        return 0; //return op(DIVU);
    }
    if(dados[0] == 'j' && dados[1] == 'r'){ //JR
        return 0; //return op(JR);
    }
    if(dados[0] == 'j' && dados[1] == 'a' && dados[2] == 'l' && dados[3] == 'r'){ //JALR
        return 0; //return op(JALR);
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
    if(dados[0] == 'j' ){ //J
        return 2; //return op(J);
    }
    if(dados[0] == 'j' && dados[1] == 'a' && dados[2] == 'l'){ //JAL
        return 3; //return op(JAL);
    }
    /*
        *********************************************************************************
        *******************ENCERRANDO PROCURA POR COMANDOS DO TIPO 'J'*******************
        *********************************************************************************
    */
}

int getRegister(char *dados){
    if(dados[1] == 't'){ //$t+
        if(dados[2] == '0'){ //$t0
            return 4;
        }else if(dados[2] == '1'){ //$t1
            return 5;
        }else if(dados[2] == '2'){ //$t2
            return 6;
        }else if(dados[2] == '3'){ //$t3
            return 7;
        }else if(dados[2] == '4'){ //$t4
            return 8;
        }else if(dados[2] == '5'){ //$t5
            return 9;
        }else if(dados[2] == '6'){ //$t6
            return 10;
        }else if(dados[2] == '7'){ //$t7
            return 11;
        }else if(dados[2] == '8'){ //$t8
            return 12;
        }else if(dados[2] == '9'){ //$t9
            return 13;
        }
    }else if(dados[1] == 's'){ //$s+
        if(dados[2] == '0'){ //$s0
            return 16;
        }else if(dados[2] == '1'){ //$s1
            return 17;
        }else if(dados[2] == '2'){ //$s2
            return 18;
        }else if(dados[2] == '3'){ //$s3
            return 19;
        }else if(dados[2] == '4'){ //$s4
            return 20;
        }else if(dados[2] == '5'){ //$s5
            return 21;
        }else if(dados[2] == '6'){ //$s6
            return 22;
        }else if(dados[2] == '7'){ //$s7
            return 23;
        }else if(dados[2] == '8'){ //$s8
            return 24;
        }else if(dados[2] == '9'){ //$s9
            return 25;
        }else if(dados[2] == 'z'){ //$szero
            return 0;
        }
    }
}
