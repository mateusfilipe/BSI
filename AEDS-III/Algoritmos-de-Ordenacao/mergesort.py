#Mateus Filipe
#Algoritmo de ordenação Insertionsort
from random import randint

def merge(vetor):
    comp = 0
    mov = 0
    if len(vetor) > 1:
        meio = len(vetor) // 2
        L = vetor[:meio]
        R = vetor[meio:]

        merge(L)
        merge(R)

        i = j = k = 0

        while i < len(L) and j < len(R):
            comp+=1
            if L[i] < R[j]:
                comp+=1
                vetor[k] = L[i]
                mov+=1
                i+=1
            else:
                comp+=1
                vetor[k] = R[j]
                mov+=1
                j+=1
            k+=1

        while i < len(L):
            comp+=1
            vetor[k] = L[i]
            mov+=1
            i+=1
            k+=1

        while j < len(R):
            comp+=1
            vetor[k] = R[j]
            mov+=1
            j+=1
            k+=1
    print(comp)
    print(mov)

n = 1000000
vetor = [n]
vetor = []
for i in range(n):
    a = randint(0,399)
    vetor.append(a)

merge(vetor)
#print(vetor)
