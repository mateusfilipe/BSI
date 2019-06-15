# Python program for implementation of Quicksort Sort

# This function takes last element as pivot, places
# the pivot element at its correct position in sorted
# array, and places all smaller (smaller than pivot)
# to left of pivot and all greater elements to right
# of pivot
from random import randint


def partition(arr,low,high, comp, mov):
    i = ( low-1 )         # index of smaller element
    pivot = arr[high]     # pivot

    for j in range(low , high):
        comp+=1

        # If current element is smaller than or
        # equal to pivot
        if   arr[j] <= pivot:
            comp+=1

            # increment index of smaller element
            i = i+1
            arr[i],arr[j] = arr[j],arr[i]
            mov+=1

    arr[i+1],arr[high] = arr[high],arr[i+1]
    mov+=1
    print(comp)
    print(mov)
    return ( i+1 )

# The main function that implements QuickSort
# arr[] --> Array to be sorted,
# low  --> Starting index,
# high  --> Ending index

# Function to do Quick sort
def quickSort(arr,low,high, comp, mov):
    if low < high:
        comp+=1

        # pi is partitioning index, arr[p] is now
        # at right place
        pi = partition(arr,low,high, comp, mov)

        # Separately sort elements before
        # partition and after partition
        quickSort(arr, low, pi-1, comp, mov)
        quickSort(arr, pi+1, high, comp, mov)


# Driver code to test above
n = 100
vetor = [n]
vetor = []
comp = 0
mov = 0
for i in range(n):
    a = randint(0,399)
    vetor.append(a)

quickSort(vetor,0,n-1, comp, mov)


# This code is contributed by Mohit Kumra
