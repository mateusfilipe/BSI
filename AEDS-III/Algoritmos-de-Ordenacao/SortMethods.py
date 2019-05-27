'''O seguinte código contém diversos métodos de ordenação
BubbleSort, InsertSort, SelectSort, ShellSort, QuickSort,
HeapSort e MergeSort.'''

def BubbleSort(vetor):
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
    #print(vetor)

def InsertSort(vetor):
    n = len(vetor)
    for i in range(n):
        key = vetor[i]
        j = i - 1
        while j >= 0 and vetor[j] > key:
            vetor[j+1] = vetor[j]
            j -= 1
        vetor[j+1] = key
    #print(vetor)

def SelectSort(vetor):
    auxiliar = 0
    menor = 0
    troca = False
    for i in range(6):
        menor = i
        for j in range(i+1, 6):
            if vetor[j] < vetor[menor]:
                menor = j
        aux = vetor[menor]
        vetor[menor] = vetor[i]
        vetor[i] = aux
    #print(vetor)

def ShellSort(vetor):
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
    #print(vetor)

'''QuickSort: '''
def quicksort(V):
    quicksort2(V, 0, len(V) - 1)


def quicksort2(V, menor, maior):
    if menor < maior:
        p = particao(V, menor, maior)
        quicksort2(V, menor, p - 1)
        quicksort2(V, p + 1, maior)


def achapivo(V, menor, maior):
    meio = (maior + menor) // 2
    pivo = maior
    if V[menor] < V[meio]:
        pivo = meio

    elif V[menor] < V[maior]:
        pivo = menor

    return pivo


def particao(V, menor, maior):
    indicepivo = achapivo(V, menor, maior)
    valorpivo = V[indicepivo]
    V[indicepivo], V[menor] = V[menor], V[indicepivo]
    borda = menor

    for i in range(menor, maior + 1):
        if V[i] < valorpivo:
            borda += 1
            V[i], V[borda] = V[borda], V[i];
    V[menor], V[borda] = V[borda], V[menor]

    return borda

'''Fim do QuickSort'''


'''HeapSort: '''
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
    #print(vetor)
'''Fim do HeapSort'''

def MergeSort(vetor):
    if len(vetor) > 1:
        meio = len(vetor) // 2
        L = vetor[:meio]
        R = vetor[meio:]

        MergeSort(L)
        MergeSort(R)

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

def main():
