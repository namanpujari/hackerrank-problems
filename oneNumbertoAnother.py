# Complete the function below.

def swapdigits(a, m, index):
    a_new = ''
    m_new = ''
    for i in range(len(a)):
        if(i != index):
            a_new = a_new + a[i]
        else: 
            a_new = a_new + m[i]
        
    for i in range(len(m)):
        if(i != index):
            m_new = m_new + m[i]
        else:
            m_new = m_new + a[i]
    return str(a_new), str(m_new)
    
def  minimumMoves(a, m):
    numOfMoves = 0;
    for pair_index in range(len(a)): # could also be len(m), since they have the same amount of numbers
        number_a = str(a[pair_index]);
        number_m = str(m[pair_index]);
        for digit_index in range(len(number_a)): # could also be len(number_b), since they have same digit #.
            if(int(number_a[digit_index]) > int(number_m[digit_index])):
                number_a, number_m = swapdigits(number_a, number_m, digit_index)
        to_add = 0 
        res = str((int(number_m) - int(number_a)))
        for i in range(len(res)):
            to_add = to_add + int(res[i])
            
        numOfMoves = numOfMoves + to_add
    return numOfMoves
            
       

