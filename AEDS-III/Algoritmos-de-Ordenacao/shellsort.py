#Mateus Filipe
#Algoritmo de ordenação Shellsort
from random import randint

def ordenar(vetor):
    comp = 0
    mov = 0
    n = len(vetor)
    gap = n // 2
    while gap > 0:
        comp+=1
        for i in range(gap,n):
            comp+=1
            aux = vetor[i]
            mov+=1
            j = i
            while j >= gap and vetor[j-gap] > aux:
                comp+=1
                vetor[j] = vetor[j-gap]
                mov+=1
                j -= gap
            vetor[j] = aux
            mov+=1
        gap //= 2
        mov+=1
    print(comp)
    print(mov)

n = 1000000
vetor = [n]
vetor = []
for i in range(n):
    a = randint(0,399)
    vetor.append(a)

ordenar(vetor)
