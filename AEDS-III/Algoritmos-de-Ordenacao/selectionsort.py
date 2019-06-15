#Mateus Filipe
#Algoritmo de ordenação Selectionsort
'''Este código é uma adaptação de um Selectionsort
feito em c++, ou seja, não condiz com o Selectionsort
usual feito em Python.'''
from random import randint

def SelectSort(vetor, n):
    auxiliar = 0
    menor = 0
    troca = False
    mov = 0
    comp = 0
    for i in range(n):
        comp+=1
        menor = i
        for j in range(i+1, n):
            comp+=1
            if vetor[j] < vetor[menor]:
                comp+=1
                menor = j
        aux = vetor[menor]
        vetor[menor] = vetor[i]
        vetor[i] = aux
    #print(vetor)
    print(comp)
    #print(mov)

n = 1000000
vetor = [n]
vetor = []
for i in range(n):
    a = randint(0,399)
    vetor.append(a)

SelectSort(vetor, n)
