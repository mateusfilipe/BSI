#include <iostream>
#include <locale.h>
#include <windows.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iomanip>
#include <math.h>

//Trabalho de Arquitetura Pipeline / Guilherme e Rodrigo.

using namespace std;

void verificaErro(string comando[],int i, int nLinhas ,char *register1,char*register2, char*register3, char *register1B,char*register2B, char*register3B, char *register1C, char *register2C, char *register3C, string buffer[]);

int op=-1;

int contaLinhas()
{
    ifstream lerContaLinhas;

    lerContaLinhas.open("programa2.txt");

    char linhas1[255];

    int TAM = 0;

    while(!lerContaLinhas.eof())
    {
        lerContaLinhas.getline(linhas1, 255);
        TAM++;
    }
    return TAM;
}

void lerArquivo()
{
    char linhas1[255], linhas2[255], linhas3[255];
    char *bufferLinha, *bufferLinha2, *bufferLinha3, *segundaLinha ;
    char *register1,*register2, *register3, *register1B,*register2B, *register3B, *register1C,*register2C, *register3C;

    int nLinhas = contaLinhas();

    string buffer[nLinhas];
    string comando[nLinhas];

    ifstream primeiraLinha, proximasLinhas;

    primeiraLinha.open("programa2.txt");

    int i=0;

    while(i < nLinhas-2)//
    {
        primeiraLinha.getline(linhas1, 255);
        buffer[i] = linhas1;
        bufferLinha = strtok(linhas1," ");
        comando[i] = bufferLinha;

        bufferLinha = strtok(NULL,",");
        register1 = bufferLinha;

        bufferLinha = strtok(NULL," ,(");
        register2 = bufferLinha;

        bufferLinha = strtok(NULL," )");
        register3 = bufferLinha;

        proximasLinhas.open("programa2.txt");

        int k=0;

        bool stop = false;

        while(!stop)
        {
             if(i+1==k) //Armazena a segunda linha
            {
                *linhas2 = *linhas3;

                proximasLinhas.getline(linhas2, 255);
                segundaLinha = linhas2;

                 if(i == nLinhas-3)
                {
                    buffer[i+1] = linhas2;
                }
                bufferLinha2 = strtok(segundaLinha," ");

                bufferLinha2 = strtok(NULL,",");
                register1B = bufferLinha2;

                bufferLinha2 = strtok(NULL," ,(");
                register2B = bufferLinha2;

                bufferLinha2 = strtok(NULL," )");
                register3B = bufferLinha2;

            }
            proximasLinhas.getline(linhas3, 255); //terceiraLinha

            if(i+1==k)//i+2
            {
               stop = true;
            }
            k++;
        }

        if(i == nLinhas-3)
        {

             buffer[i+2] = linhas3;

        }

        bufferLinha3 = strtok(linhas3," "); //depois quebrar esse buffer e salvar os registradores

        if(i == nLinhas-3)
        {
             comando[i+1] = linhas2;
             comando[i+2] = linhas3;
        }

        bufferLinha3 = strtok(NULL,",");

        register1C = bufferLinha3;
        bufferLinha3 = strtok(NULL," ,(");
        register2C = bufferLinha3;

        bufferLinha3 = strtok(NULL," )");
        register3C = bufferLinha3;

        proximasLinhas.close();
        verificaErro(comando,i,nLinhas,register1,register2,register3,register1B,register2B,register3B, register1C, register2C, register3C, buffer);

        i++;
    }
    primeiraLinha.close();
}

int main()
{
    setlocale(LC_ALL,"");

    while(op!=0)
    {
        cout <<setw(32) <<setfill('=') <<"\n";
        cout <<setw(9) <<setfill(' ') <<"OPCIONES\n" ;
        cout <<"1  -" <<setw(2) <<"" <<"Bolha\n";
        cout <<"2  -" <<setw(2) <<"" <<"Adiantamento com bolha\n";
        cout <<"3  -" <<setw(2) <<"" <<"Reordenamento\n";
        cout <<"0  -" <<setw(2) <<"" <<"Sair\n";

        cout <<"Digite o operador: ";
        cin >>op;
        cout <<endl;

        if(op == 1 || op == 2)
        {
            lerArquivo();
        }
        cout <<setw(35) <<setfill('=') <<"\n";
        cout<<"O arquivo de saída gerado com sucesso."<<endl;
    }


}

void verificaErro(string comando[],int i, int nLinhas ,char *register1,char*register2, char*register3, char *register1B,char*register2B, char*register3B, char *register1C, char *register2C, char *register3C, string buffer[]){

    bool verifica = false, wrLine2 = false, wrLine3 = false;

    if(register1[0] == ' ')        //Tira os espaços dos registradores
    {
        register1 = strtok(register1," ");
    }
    if(register2[0] == ' ')
    {
        register2 = strtok(register2," ");
    }
    if(register3[0] == ' ')
    {
        register3 = strtok(register3," ");
    }
    if(register1B[0] == ' ')
    {
        register1B = strtok(register1B," ");
    }
    if(register2B[0] == ' ')
    {
        register2B = strtok(register2B," ");
    }
    if(register3B[0] == ' ')
    {
        register3B = strtok(register3B," ");
    }
    if(register1C[0] == ' ')
    {
        register1C = strtok(register1C," ");
    }
    if(register2C[0] == ' ')
    {
        register2C = strtok(register2C," ");
    }
    if(register3C[0] == ' ')
    {
        register3C = strtok(register3C," ");
    }

    ofstream saida;
    saida.open("repostas.txt",fstream::app);

        if(comando[i] == "swl"||
            comando[i] == "sw" ||
            comando[i] == "swr")
        {
             if((register3[1] == register2B[1] and register3[2] == register2B[2]) || (register3[1] == register3B[1] and register3[2] == register3B[2]))
             {
                 verifica = true;
                 if(op == 1)
                    {
                        saida << buffer[i] <<endl;
                        saida << "NOP" << endl;
                        saida << "NOP" << endl;
                        //saida << buffer[i+1] <<endl;

                    }
                    else if(op == 2)
                    {
                        saida << buffer[i] <<endl;
                        saida << "NOP" << endl;
                        //saida << buffer[i+1] <<endl;
                    }
                    else if(op == 3)
                    {
                        //REORDENAMENTO
                    }
            }
            else
            {
                //saida << buffer[i] <<endl;
            }
        }
        else if(comando[i+1] == "swl"||
            comando[i+1] == "sw" ||
            comando[i+1] == "swr")
        {
                if((register3B[1] == register2[1] and register3B[2] == register2[2]) || (register3B[1] == register3[1] and register3B[2] == register3[2]))
                {
                 verifica = true;
                 if(op == 1)
                    {
                        saida << buffer[i] <<endl;
                        saida << "NOP" << endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+1] <<endl;

                    }
                    else if(op == 2)
                    {
                        saida << buffer[i] <<endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+1] <<endl;
                    }
                    else if(op == 3)
                    {
                        //REORDENAMENTO
                    }
                }
                else
                {
                    //saida << buffer[i] <<endl;

                }
        }
        else
        {
            if((register1[1] == register2B[1] and register1[2] == register2B[2]) || (register1[1] == register3B[1] and register1[2] == register3B[2]))
                {
                    verifica = true;

                    if(op == 1)
                    {
                        saida << buffer[i] <<endl;
                        saida << "NOP" << endl;
                        saida << "NOP" << endl;
                        //saida << buffer[i+1] <<endl;
                    }
                    else if(op == 2)
                    {
                        saida << buffer[i] <<endl;
                        saida << "NOP" << endl;
                        //saida << buffer[i+1] <<endl;
                    }
                    else if(op == 3)
                    {
                        //REORDENAMENTO
                    }
                }
            else
            {
                saida << buffer[i] <<endl;
            }
        }


    if(!verifica) //A primira com a terceira
    {

         if(comando[i] == "swl"||
        comando[i] == "sw" ||
        comando[i] == "swr")
        {

             if((register3[1] == register2C[1] and register3[2] == register2C[2]) || (register3[1] == register3C[1] and register3[2] == register3C[2]))
             {
                 wrLine2 = true;
                 if(op == 1)
                {
                    saida << buffer[i] <<endl;
                    saida << buffer[i+1] <<endl;
                    saida << "NOP" << endl;
                    //saida << buffer[i+2] <<endl;
                }
                else if(op == 2)
                {
                    saida << buffer[i] <<endl;
                    saida << buffer[i+1] <<endl;
                    //saida << buffer[i+2] <<endl;
                }
                else if(op == 3)
                {
                    //REORDENAMENTO
                }
            }
            else
            {
                //saida << buffer[i] <<endl;
                //saida << buffer[i+1] <<endl;
            }

        }
        else if (comando[i+2] == "swl"||
                comando[i+2] == "sw" ||
                comando[i+2] == "swr")
        {
            if((register3C[1] == register2[1] and register3C[2] == register2[2]) || (register3C[1] == register3[1] and register3C[2] == register3[2]))
            {
                 if(op == 1)
                {
                    wrLine2 = true;
                    //saida << buffer[i] <<endl;
                    saida << buffer[i+1] <<endl;
                    saida << "NOP" << endl;
                    //saida << buffer[i+2] <<endl;
                }
                else if(op == 2)
                {
                    //saida << buffer[i] <<endl;
                    saida << buffer[i+1] <<endl;
                    //saida << buffer[i+2] <<endl;
                }
                else if(op == 3)
                {
                    //REORDENAMENTO
                }
            }
            else
            {
                //saida << buffer[i] <<endl;
                //saida << buffer[i+1] <<endl;
            }

        }
        else
        {
            if((register1[1] == register2C[1] and register1[2] == register2C[2]) || (register1[1] == register3C[1] and register1[2] == register3C[2]))
             {
                 wrLine2 = true;
                 if(op == 1)
                {
                    //saida << buffer[i] <<endl;
                    saida << buffer[i+1] <<endl;
                    saida << "NOP" << endl;
                    //saida << buffer[i+2] <<endl;
                }
                else if(op == 2)
                {
                    //saida << buffer[i] <<endl;
                    saida << buffer[i+1] <<endl;
                    //saida << buffer[i+2] <<endl;
                }
                else if(op == 3)
                {
                    //REORDENAMENTO
                }
             }
             else
            {
                //saida << buffer[i] <<endl;
                //saida << buffer[i+1] <<endl;
            }

        }
    }

     if(i== nLinhas-3) //Ultimas duas linhas
    {

        if(comando[i+1] == "swl"||
        comando[i+1] == "sw" ||
        comando[i+1] == "swr")
        {
            if((register3B[1] == register2C[1] and register3B[2] == register2C[2]) || (register3B[1] == register3C[1] and register3B[2] == register3C[2]))
            {
                    wrLine3 = true;

                    if(op == 1)
                    {
                        saida  << buffer[i+1] <<endl;
                        saida << "NOP" << endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+2] <<endl;
                    }
                    else if(op == 2)
                    {
                        saida << buffer[i+1] <<endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+2] <<endl;
                    }
                    else if(op == 3)
                    {
                        //REORDENAMENTO
                    }
            }
            else
            {
                saida << buffer[i+1] <<endl;
                saida << buffer[i+2] <<endl;
            }

        }
        else if (comando[i+2] == "swl"||
        comando[i+2] == "sw" ||
        comando[i+2] == "swr")
        {

            if((register3C[1] == register2B[1] and register3C[2] == register2B[2]) || (register3C[1]  == register3B[1] and register3C[2]  == register3B[2]))
            {
                     cout <<"Comando 3 " <<comando[i+2] <<endl;
                    wrLine3 = true;

                    if(op == 1)
                    {
                        saida  << buffer[i+1] <<endl;
                        saida << "NOP" << endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+2] <<endl;
                    }
                    else if(op == 2)
                    {
                        saida << buffer[i+1] <<endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+2] <<endl;
                    }
                    else if(op == 3)
                    {
                        //REORDENAMENTO
                    }
            }
            else
            {
                saida << buffer[i+1] <<endl;
                saida << buffer[i+2] <<endl;
            }

        }
        else
        {
            if((register1B[1] == register2C[1] and register1B[2] == register2C[2])  || (register1B[1] == register3C[1] and register1B[2] == register3C[2]))
             {
                 wrLine3 = true;

                if(op == 1)
                    {
                        saida << buffer[i+1] <<endl;
                        saida << "NOP" << endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+2] <<endl;
                    }
                    else if(op == 2)
                    {
                        saida << buffer[i+1] <<endl;
                        saida << "NOP" << endl;
                        saida << buffer[i+2] <<endl;
                    }
                    else if(op == 3)
                    {
                        //REORDENAMENTO
                    }
            }
            else
            {
                saida << buffer[i+1] <<endl;
                saida << buffer[i+2] <<endl;
            }
        }
    }
}
