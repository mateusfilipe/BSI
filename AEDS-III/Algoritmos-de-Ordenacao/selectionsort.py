#Mateus Filipe
#Algoritmo de ordenação Selectionsort
'''Este código é uma adaptação de um Selectionsort
feito em c++, ou seja, não condiz com o Selectionsort
usual feito em Python.'''

def ordenar(vetor):
    auxiliar = 0
    menor = 0
    troca = False
    for i in range(6):
        menor = i
        for j in range(i+1, 6):
            if vetor[j] < vetor[menor]:
                menor = j
        aux = vetor[menor]
        vetor[menor] = vetor[i]
        vetor[i] = aux

    print(vetor)

ordenar([5 , 2 , 4 , 6 , 1 , 3])
