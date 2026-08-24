Here are all 6 programs from Assignment 2 in Python - simple and ready to run:

1. Simple shopping cart system using lists
cart = []

def add_item(item):
    cart.append(item)
    print(f"{item} added to cart.")

def remove_item(item):
    if item in cart:
        cart.remove(item)
        print(f"{item} removed from cart.")
    else:
        print(f"{item} not found in cart.")

def display_cart():
    if cart:
        print("Cart items:", cart)
    else:
        print("Cart is empty.")

Menu driven
while True:
    print("\n1. Add Item 2. Remove Item 3. Display Cart 4. Exit")
    choice = input("Enter choice: ")
    if choice == '1':
        add_item(input("Enter item to add: "))
    elif choice == '2':
        remove_item(input("Enter item to remove: "))
    elif choice == '3':
        display_cart()
    elif choice == '4':
        break
    else:
        print("Invalid choice")
2. Calculate length of multiple lists using a function
def length_of_lists(*lists):
    for i, lst in enumerate(lists, 1):
        print(f"Length of List {i} {lst} is: {len(lst)}")

Example usage
list1 = [1, 2, 3]
list2 = ['a', 'b', 'c', 'd']
list3 = [10, 20]

length_of_lists(list1, list2, list3)

With user input version
def get_list_from_user():
    data = input("Enter list elements separated by space: ").split()
    return data

n = int(input("\nHow many lists? "))
all_lists = [get_list_from_user() for _ in range(n)]
length_of_lists(*all_lists)
3. Contact book using dictionaries + update phone number
contacts = {}

def add_contact(name, phone):
    contacts[name] = phone
    print(f"Contact {name} added.")

def update_contact(name, new_phone):
    if name in contacts:
        contacts[name] = new_phone
        print(f"Contact {name} updated to {new_phone}.")
    else:
        print(f"Contact {name} not found.")

def display_contacts():
    print("\nContact Book:")
    for name, phone in contacts.items():
        print(f"{name}: {phone}")

Demo
add_contact("Ankit", "9876543210")
add_contact("Riya", "9123456789")
display_contacts()

update_contact("Ankit", "9999999999")
display_contacts()
4. Print all keys and values from a dictionary in separate lists
def print_keys_values(d):
    keys = list(d.keys())
    values = list(d.values())
    print("Keys List:", keys)
    print("Values List:", values)

Example
my_dict = {"name": "John", "age": 21, "city": "Shillong"}
print_keys_values(my_dict)
5. Check if day is a weekday using a tuple
weekdays = ("Monday", "Tuesday", "Wednesday", "Thursday", "Friday")
weekends = ("Saturday", "Sunday")

day = input("Enter a day: ").capitalize()

if day in weekdays:
    print(f"{day} is a Weekday.")
elif day in weekends:
    print(f"{day} is a Weekend.")
else:
    print("Invalid day name.")
6. Set operations (union, intersection, difference)
set1 = set(input("Enter elements of set 1 separated by space: ").split())
set2 = set(input("Enter elements of set 2 separated by space: ").split())

print(f"\nSet 1: {set1}")
print(f"Set 2: {set2}")

print("Union:", set1 | set2)
print("Intersection:", set1 & set2)
print("Difference (Set1 - Set2):", set1 - set2)
print("Difference (Set2 - Set1):", set2 - set1)

If you want integer sets:
set1 = {1,2,3,4}
set2 = {3,4,5,6}
Want me to combine all of these into a single PDF /.py file for submission?