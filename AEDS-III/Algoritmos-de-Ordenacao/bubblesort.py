#Mateus Filipe
#Algoritmo de ordenação Bubblesort
'''Este código é uma adaptação de um Bubblesort
feito em c++, ou seja, não condiz com o Bubblesort
usual feito em Python.'''

def ordenar(vetor):
    auxiliar = 0
    troca = False
    for i in range(6):
        troca = False
        for j in range(1, 6-i):
            if vetor[j-1] > vetor[j]:
                auxiliar = vetor[j]
                vetor[j] = vetor[j-1]
                vetor[j-1] = auxiliar
                troca = True
        if not troca:
            break
    print(vetor)

ordenar([5 , 2 , 4 , 6 , 1 , 3])
