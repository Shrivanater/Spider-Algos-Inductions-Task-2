# Spider-Algos-Inductions-Task-2
//The raw is better formatted//

Q1:
    I'm using count to check for open and closed brackets, incrementing and decrementing respectively.
    temp is used to count the length of the current bracket sequence.
    If count becomes 0, that means we've reached the end of a complete bracket sequence, so I check the value of temp against max and retain whichever's greater as the length of the longest sequence.
    If count becomes negative or we reach the end of the string, it breaks from the loop.
    The final asnwer is 2*ans as ans only counts closed brackets.
    
Q2:
    A: a b c d ...
    B: w x y z ...
    
    Maximum Values of A[i]:
    A[i] = the lesser of B[i] and B[i-1]
    a = the lesser of w and nothing = w
    b = the lesser of w and x
    c = the lesser of x and y
    ...
    
    So I define A[i]'s maximum value based on this and update the sum.
    
Q3:   
    I loop thru each stair and check if that stair is in the list of broken stairs by using a binary_search.
    If the stair is good, then I start counting the number of consecutive good stairs.
   
    It turns out that the no. of possible ways to climb n stairs according to the given conditions = nth term of the Fibonacci Sequence.
    So i calculate the no. of possible routes for each cluster of good stairs and multiply the each cluster's numbers together.
   
    broken is used to check the number of consecutive broken stairs and if it's ever greater than 1 then the program exits as it wont be possible to get past 2 broken stairs in a row. 
   
Q4:
    I initialize tha array with its values
    Gather all the inputs and update the array according to the range of the input
    Use max_element to find the answer.
    
Q5:
    Since the no. of inputs is extremely large I used a prefix sum array method to update the array as inputs are given and then sum the values. 
    After this I added their initial values of vec[i] = i and checked for the maximum element while doing so.
    This method allows me to avoid a nested for loop and acheive a time complexity of O(q + 2n) instead of O(n + q*(r-l)).
    
