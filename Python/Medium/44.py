
def calculate_sum():
    sum=0
    numbers = [1, 2, 3, 4]
    for x in range (len(numbers)):
        sum+=numbers[x]
    print("The sum of the numbers is:",sum)
    more_numbers = [10, 20, 30]
    for y in range (len(more_numbers)):
     sum+=more_numbers[y]
    result =sum
    print("The result is:", result)
calculate_sum()
