# Import required modules
import datetime

# Define classes
class User:
    def __init__(self, name, address, phone_number):
        self.name = name
        self.address = address
        self.phone_number = phone_number

class Milk:
    def __init__(self, type, price):
        self.type = type
        self.price = price

class Order:
    def __init__(self, user, milk, quantity):
        self.user = user
        self.milk = milk
        self.quantity = quantity
        self.delivery_date = None
        self.status = 'Pending'

    def set_delivery_date(self, date):
        self.delivery_date = date

    def set_status(self, status):
        self.status = status

# Define functions
def place_order():
    user_name = input("Enter your name: ")
    user_address = input("Enter your address: ")
    user_phone_number = input("Enter your phone number: ")
    user = User(user_name, user_address, user_phone_number)

    milk_type = input("Enter milk type: ")
    milk_price = float(input("Enter milk price: "))
    milk = Milk(milk_type, milk_price)

    quantity = int(input("Enter quantity: "))
    order = Order(user, milk, quantity)

    delivery_date = input("Enter delivery date (DD/MM/YYYY): ")
    delivery_date = datetime.datetime.strptime(delivery_date, "%d/%m/%Y").date()
    order.set_delivery_date(delivery_date)

    print("Your order has been placed.")
    return order

# Main program
orders = []
while True:
    print("1. Place order")
    print("2. View orders")
    print("3. Exit")

    choice = input("Enter your choice: ")

    if choice == '1':
        order = place_order()
        orders.append(order)

    elif choice == '2':
        for order in orders:
            print("Name:", order.user.name)
            print("Address:", order.user.address)
            print("Phone Number:", order.user.phone_number)
            print("Milk Type:", order.milk.type)
            print("Milk Price:", order.milk.price)
            print("Quantity:", order.quantity)
            print("Delivery Date:", order.delivery_date)
            print("Status:", order.status)
            print()

    elif choice == '3':
      break    

    else: 
        print("Invalid choice. Please try again.")
