def recursive_sum(n):
 if n == 0:
  return 0
 else:
  return n + recursive_sum(n - 1)
def main():
  try:
   result = recursive_sum(5)
   print(f"Sum: {result}")
  except RecursionError as e:
   print(f"RecursionError: {e}")
main()
# since inpput is -5, we will get an error. changing it to 5.