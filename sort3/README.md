# Heapsort
getting array and inputting to the heapsort function<br>
the heapsort function requires an arranged form of nodes to sort the values<br>
thus array is made to the form of an n-ary tree in the heapify function ie the array is taken in the form of the heap<br>
the heap is in irregular arrangement<br>
the function  makes the tree a max heap(the tree is arranged from max to min value nodes in a particular map) <br>
in the heapify function the first element in the array is taken as the parent element and the last element a child element<br>
then initializing largest as root value then checking foreach element in the array and then swapped to get the max value in the last element in the array<br>
then leaving the last element and then using rest of the elements in the recursive loop for heapifying<br>
after the loop the final element is placed in the first place automatically which is the smallest number




