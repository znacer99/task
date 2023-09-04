#usr/bin/python3
def filter_even_numbers(input_list):
    # create list for even numbers
    even_numbers = []

    #compare every number in the list
    for number in input_list:
        if number % 2 == 0:
            even_numbers.append(number)
    #return new list
    return even_numbers
#the exemple
input_list = [3, 8, 12, 7, 4, 6, 9, 10]
even_numbers = filter_even_numbers(input_list)
print(even_numbers)
