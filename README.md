# Spider-Algos-Inductions-Task-2

Q1:
    I'm using count to check for open and closed brackets, incrementing and decrementing respectively.
    temp is used to count the length of the current bracket sequence.
    If count becomes 0, that means we've reached the end of a complete bracket sequence, so I check the value of temp against max and retain whichever's greater as the length of the longest sequence.
    If count becomes negative or we reach the end of the string, it breaks from the loop.
    The final asnwer is 2*ans as ans only counts closed brackets.
    
Q2:
    
    
