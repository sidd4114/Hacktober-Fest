try:
    file = open('file.txt', 'r')
    content = file.read()
except FileNotFoundError as e:
    print(f"error found:{e}")
finally:
    file.close()