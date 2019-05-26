#Mateus Filipe
#Algoritmo de ordenação Insertionsort

def ordenar(vetor):
    n = len(vetor)
    for i in range(n):
        key = vetor[i]
        j = i - 1
        while j >= 0 and vetor[j] > key:
            vetor[j+1] = vetor[j]
            j -= 1
        vetor[j+1] = key
    print(vetor)
ordenar([5 , 2 , 4 , 6 , 1 , 3])
