#Mateus Filipe
#Algoritmo de ordenação Shellsort

def ordenar(vetor):
    n = len(vetor)
    gap = n // 2
    while gap > 0:
        for i in range(gap,n):
            aux = vetor[i]
            j = i
            while j >= gap and vetor[j-gap] > aux:
                vetor[j] = vetor[j-gap]
                j -= gap
            vetor[j] = aux
        gap //= 2
    print(vetor)
ordenar([5 , 2 , 4 , 6 , 1 , 3])
