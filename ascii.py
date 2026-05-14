
def To_binary(x):
    print('BINARY OF INPUT IS:' ,bin(x))
def To_ascii(x):
    for c in x:
        print(f"ASCII OF {c} IS:  {ord(c)}")

    

def To_decimal(x):
    print('INTEGER OF BINARY INPUT IS:',int(x,2))
while True:
    print("Choose whether to :")
    print("1.convert integer  binary  or")
    print("2.binary to integer ")
    print("3.stop ")
    choice= input("ENTER YOUR CHOICE 1 OR 2 or 3: ")
    if choice=='1':
        user_input=input("enter integer to be converted to binary: ")
        To_ascii(user_input)
        To_binary(int(user_input))

    elif choice=='2':
          user_input=input("enter binary to be converted to decimal: ")
          To_ascii(user_input)
          To_decimal(user_input)
    elif choice=='3':
        break
    else:
        print("Invalid choice ,try again")
        

    
