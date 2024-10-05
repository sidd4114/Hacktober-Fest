def calculate_average(lst):
  total = 0
  for num in lst:
   total += num
  return total / len(lst)
def main():
  numbers = []
  try:
    avg = calculate_average(numbers)
    print(f"Average: {avg}")
  except ZeroDivisionError as e:
    print(f"ZeroDivisionError: {e}")
main()
# since we are dividing zero by lst whoch here is an empty list we will get an exception 