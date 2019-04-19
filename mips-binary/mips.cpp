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
    string conteudo;
    ler.open(nomeArquivo);
    char linhas[255];
    char *ch;
    while(!ler.eof()){
        ler.getline(linhas, 255);
        ch = strtok(linhas," ");
        cout<<ch;
        ch = strtok(NULL," ");
        cout<<ch;
        ch = strtok(NULL," ");
        cout<<ch;
        //getOperation(ch);
        cout<<endl;
    }
}
int getOperation(char *dados){
    int op;
    cout<<dados<<endl;
    //COMANDOS QUE COMEÇAM COM 'L'
    if(dados[0] == 'l'){ //L
            if(dados[1] == 'b'){ //LB
                if(dados[2] == 'u'){ //LBU
                    return 36;
                }else if(dados[2] == NULL){ //LB
                    return 32;
                }
            }else if(dados[1] == 'h'){ //LH
                if(dados[2] == 'u'){ //LHU
                    return 37;
                }else if(dados[2] == NULL){ //LHU
                    return 33;
                }
            }else if(dados[1] == 'w'){ //LW
                if(dados[2] == 'l'){ //LWL
                    return 34;
                }else if(dados[2] == 'r'){ //LWR
                    return 38;
                }else if(dados[2] == NULL){ //LW
                    return 35;
                }
            }else if(dados[1] == 'u'){ //LUI
                return 15;
            }
    //COMANDOS QUE COMEÇAM COM 'S'
    }else if(dados[0] == 's'){ //S começa | L termina
        if(dados[1] == 'b'){ //SB
            return 40;
        }else if(dados[1] == 'h'){ //SH
            return 41;
        }else if(dados[1] == 'w'){ //SW
            if(dados[2] == 'l'){ //SWL
                return 42;
            }else if(dados[2] == 'r'){ //SWR
                return 46;
            }else if(dados[2] == NULL){ //SW
                return 43;
            }
        }else if(dados[1] == 'u'){ //SU
            if(dados[2] == 'b'){ //SUB
                if(dados[3] == 'u'){ //SUBU
                    return 0;
                }else if(dados[3] == NULL){ // SUB
                    return 0;
                }
            }
        }else if(dados[1] == 'l'){ //SL
            if(dados[2] == 't'){ //SLT
                if(dados[3] == 'u'){ //SLTU
                    return 0;
                }else if(dados[3] == 'i'){ //SLTI
                    if(dados[4] == 'u'){ //SLTIU
                        return 11;
                    }else if(dados[4] == NULL){ //SLTI
                        return 10;
                    }
                }
            }else if(dados[2] == 'l'){ //SLL
                if(dados[3] == 'v'){ //SLLV
                    return 0;
                }else if(dados[3] == NULL){ //SLL
                    return 0;
                }
            }
        }else if(dados[1] == 'r'){ //SR
            if(dados[2] == 'l'){ //SRL
                if(dados[3] == 'v'){ //SRLV
                    return 0;
                }
            }else if(dados[2] == 'a'){ //SRA
                if(dados[3] == 'v'){ //SRAV
                    return 0;
                }else if(dados[3] == NULL){ //SRA
                    return 0;
                }
            }
        }
    //COMANDOS QUE COMEÇAM COM 'A':
    }else if(dados[0] == 'a'){ //A
        if(dados[1] == 'n'){ //AN
            if(dados[2] == 'd'){ //AND
                if(dados[3] == 'i'){ //ANDI
                    return 12;
                }else if(dados[3] == NULL){ //AND
                    return 0;
                }
            }
        }else if(dados[1] == 'd'){ //AD
            if(dados[2] == 'd'){ //ADD
                if(dados[3] == 'i'){ //ADDI+
                    if(dados[4] == 'u'){ //ADDIU
                        return 9;
                    }else if(dados[4] == NULL){ //ADDI
                        return 8;
                    }
                }else if(dados[3] == 'u'){ //ADDU
                    return 0;
                }
            }
        }
    //COMANDOS QUE COMEÇAM COM 'M':
    }else if(dados[0] == 'm'){ //M
        if(dados[1] == 'f'){ //MF
            if(dados[2] == 'h'){ //MFHI
                return 0;
            }else if(dados[2] == 'l'){ //MFLO
                return 0;
            }
        }else if(dados[1] == 't'){
            if(dados[2] == 'h'){ //MTHI
                return 0;
            }else if(dados[2] == 'l'){ //MTLO
                return 0;
            }
        }else if(dados[1] == 'u'){ //MU
            if(dados[2] == 'l'){ //MUL
                if(dados[3] == 't'){ //MULT+
                    if(dados[4] == 'u'){ //MULTU
                        return 0;
                    }else if(dados[4] == NULL){ //MULT
                        return 0;
                    }
                }
            }
        }
    //COMANDOS QUE COMEÇAM COM 'B':
    }else if(dados[0] == 'b'){
        if(dados[1] == 'e'){ //BEQ
            return 4;
        }else if(dados[1] == 'n'){ //BNE
            return 5;
        }else if(dados[1] == 'l'){ //BL
            if(dados[2] == 'e'){ //BLEZ
                return 6;
            }else if(dados[2] == 't'){ //BLT
                if(dados[4] == 'a'){ //BLTZAL
                    return 1;
                }else if(dados[4] == NULL){ //BLTZ
                    return 1;
                }
            }
        }else if(dados[1] == 'g'){
            if(dados[2] == 'e'){
                if(dados[4] == 'a'){ //BGEZAL
                    return 1;
                }else if(dados[4] == NULL){ //BGEZ
                    return 1;
                }
            }else if(dados[2] == 't'){ //BGTZ
                return 7;
            }
        }
    //COMANDOS QUE COMEÇAM COM 'O':
    }else if(dados[0] == 'o'){
        if(dados[2] == 'i'){ //ORI
            return 13;
        }else if(dados[2] == NULL){ //OR
            return 0;
        }
    //COMANDOS QUE COMEÇAM COM 'X':
    }else if(dados[0] == 'x'){ //X
        if(dados[3] == 'i'){ //XORI
            return 14;
        }else if(dados[3] == NULL){ //XOR
            return 0;
        }
    //COMANDOS QUE COMEÇAM COM 'D':
    }else if(dados[0] == 'd'){
        if(dados[3] == 'u'){ //DIVU
            return 0;
        }else if(dados[3] == NULL){ //DIV
            return 0;
        }
    //COMANDOS QUE COMEÇAM COM 'J':
    }else if(dados[0] == 'j'){
        if(dados[1] == 'r'){ //JR
            return 0;
        }else if(dados[1] == 'a'){ //JA
            if(dados[3] == 'r'){ //JALR
                return 0;
            }else if(dados[3] == NULL){ //JAL
                return 3;
            }
        }else if(dados[1] == NULL){ //J
            return 2;
        }
    //COMANDOS QUE COMEÇAM COM 'N'
    }else if(dados[0] == 'n'){ //NOR
        return 0;
    }

}
