#Mateus Filipe
#Algoritmo de ordenação Insertionsort

def merge(vetor):
    if len(vetor) > 1:
        meio = len(vetor) // 2
        L = vetor[:meio]
        R = vetor[meio:]

        merge(L)
        merge(R)

        i = j = k = 0

        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                vetor[k] = L[i]
                i+=1
            else:
                vetor[k] = R[j]
                j+=1
            k+=1

        while i < len(L):
            vetor[k] = L[i]
            i+=1
            k+=1

        while j < len(R):
            vetor[k] = R[j]
            j+=1
            k+=1

vetor = [5, 2, 4, 6, 1, 3]
merge(vetor)
print(vetor)
