#Mateus Filipe
#Algoritmo de ordenação Heapsort

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
    n = len(vetor)
    for i in range(n, -1, -1):
        heapify(vetor, n, i)
    for i in range(n-1, 0, -1):
        vetor[i],vetor[0] = vetor[0],vetor[i]
        heapify(vetor, i, 0)
    print(vetor)

vetor = [5 , 2 , 4 , 6 , 1 , 3]
heapsort(vetor)
