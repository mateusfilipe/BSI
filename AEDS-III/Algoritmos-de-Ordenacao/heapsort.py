#Mateus Filipe
#Algoritmo de ordenação Heapsort
from random import randint

def heapify(vetor, n, i):
    maior = i
    l = 2 * i + 1
    r = 2 * i + 2
    if l < n and vetor[i] < vetor[l]:
        maior = l
    if r < n and vetor[maior] < vetor[r]:
        maior = r
    if maior != i :
        vetor[i], vetor[maior] = vetor[maior],vetor[i]
        heapify(vetor,n, maior)

def heapsort(vetor):
    comp = 0
    mov = 0
    n = len(vetor)
    for i in range(n, -1, -1):
        comp+=1
        heapify(vetor, n, i)
        mov+=3
        comp+=3
    for i in range(n-1, 0, -1):
        comp+=1
        vetor[i],vetor[0] = vetor[0],vetor[i]
        heapify(vetor, i, 0)
        mov+=3
        comp+=3
    #print(vetor)
    print(mov)
    print(comp)

n = 1000000
vetor = [n]
vetor = []
for i in range(n):
    a = randint(0,399)
    vetor.append(a)
heapsort(vetor)
