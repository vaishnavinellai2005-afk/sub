# Python program to calculate electricity bill

# Taking input from user
units = float(input("Enter number of units consumed: "))

# Initialize bill amount
bill = 0

# Electricity tariff calculation
if units <= 100:
    bill = units * 1.5
elif units <= 200:
    bill = (100 * 1.5) + (units - 100) * 2.5
elif units <= 300:
    bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4
else:
    bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (units - 300) * 6

# Adding fixed charge
fixed_charge = 50
total_bill = bill + fixed_charge

# Display result
print("Electricity Bill = ₹", total_bill)
