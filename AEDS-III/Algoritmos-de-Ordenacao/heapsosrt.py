#Mateus Filipe
#Algoritmo de ordenação Shellsort

def heapify(vetor, n, i):
    maior = i
    l = 2 * i + 1
    r = 2 * 1 + 2

    if l < n and vetor[i] < vetor[l]:
        maior = l
    if r < n and vetor[maior] < vetor[r]:
        maior = r
    if maior != i :
        vetor[i], vetor[maior] = vetor[maior],vetor[i]
        heapify(vetor,n, maior)
        
def heapSort(vetor):
    n = len(vetor)
    for i in range(n, -1, -1):
        heapify(vetor, n, i)
    for i in range(n-1, 0, -1):
        heapify(vetor, i, 0)
    print(vetor)
heapSort([5 , 2 , 4 , 6 , 1 , 3])
