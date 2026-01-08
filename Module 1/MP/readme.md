
## **Problem 1: Hotel Room Booking System**

### **Objective**
Design a program for a hotel room booking system that allows users to:
1. Check room availability.
2. Book a room.
3. Calculate the total cost of the stay.
4. View booking details.
5. Exit the program.

The program uses **functions** to modularize operations and enforce reusability.

---

### **Menu Options**
1. **Check Availability**: Check if a specific room type is available.
2. **Book Room**: Book a room by specifying the room type and number of nights.
3. **Calculate Cost**: Calculate the total cost of the stay based on the room type and duration.
4. **View Booking Details**: Display the booking details, including room type, duration, and total cost.
5. **Exit**: Exit the program.

---

### **Input/Output Behavior**
- **Inputs**:
  - Room type (`Single`, `Double`, `Suite`).
  - Number of nights (integer).
- **Outputs**:
  - Availability status
  - Booking confirmation with cost.
  - Total cost calculation.
  - Detailed booking information.

---

### **Functionality**
1. **Check Availability**:
   - The program checks if the specified room type is valid (`Single`, `Double`, `Suite`) and assumes all rooms are available.
   - If invalid, it displays an error message.

2. **Book Room**:
   - The user specifies the room type and number of nights.
   - The program calculates the cost based on predefined rates:
     - Single: $100 per night.
     - Double: $150 per night.
     - Suite: $250 per night.
   - It updates the total cost and stores the booking details.

3. **Calculate Cost**:
   - Displays the total cost of the stay so far.

4. **View Booking Details**:
   - Displays the room type, number of nights, and total cost.

5. **Exit**:
   - Terminates the program.

---

### **Code Implementation**
Refer to the code provided earlier in the response.

---

### **Test Cases**
#### **Case 1: Check Availability**
- **Input**: Room type = "Single"
- **Expected Output**: 
  ```
  Room type Single is available.
  ```

#### **Case 2: Book a Room**
- **Input**: Room type = "Double", Nights = 3
- **Expected Output**:
  ```
  Booked Double room for 3 nights. Cost: $450.00
  ```

#### **Case 3: Calculate Cost**
- **Input**: Total cost after booking = $450.00
- **Expected Output**:
  ```
  Total cost so far: $450.00
  ```

#### **Case 4: View Booking Details**
- **Input**: Room type = "Double", Nights = 3, Total cost = $450.00
- **Expected Output**:
  ```
  === Booking Details ===
  Room Type: Double
  Number of Nights: 3
  Total Cost: $450.00
  ```

#### **Case 5: Invalid Room Type**
- **Input**: Room type = "Penthouse"
- **Expected Output**:
  ```
  Room type Penthouse is not available.
  ```

#### **Case 6: Exit**
- **Input**: Choice = 5
- **Expected Output**:
  ```
  Exiting program...
  ```

---

## **Problem 2: Banking System**

### **Objective**
Design a simple banking system that allows users to:
1. Deposit money into their account.
2. Withdraw money from their account.
3. Check their account balance.
4. Apply interest to their account balance.
5. Exit the program.

The program uses **functions** to handle each operation and ensures proper validation.

---

### **Menu Options**
1. **Deposit Money**: Add money to the account balance.
2. **Withdraw Money**: Subtract money from the account balance.
3. **Check Balance**: Display the current account balance.
4. **Apply Interest**: Apply a fixed interest rate to the account balance.
5. **Exit**: Exit the program.

---

### **Input/Output Behavior**
- **Inputs**:
  - Amount to deposit or withdraw (double).
  - Interest rate (default = 5%).
- **Outputs**:
  - Updated balance after deposit/withdrawal.
  - Current balance.
  - New balance after applying interest.

---

### **Functionality**
1. **Deposit Money**:
   - Adds the specified amount to the account balance.
   - Displays the new balance.

2. **Withdraw Money**:
   - Subtracts the specified amount from the account balance.
   - Ensures the withdrawal does not exceed the available balance (error handling).

3. **Check Balance**:
   - Displays the current account balance.

4. **Apply Interest**:
   - Applies a default interest rate of 5% to the account balance.
   - Calculates and adds the interest to the balance.

5. **Exit**:
   - Terminates the program.

---

### **Code Implementation**
Refer to the code provided earlier in the response.

---

### **Test Cases**
#### **Case 1: Deposit Money**
- **Input**: Amount to deposit = $200.00, Initial balance = $0.00
- **Expected Output**:
  ```
  Deposited $200.00. New balance: $200.00
  ```

#### **Case 2: Withdraw Money**
- **Input**: Amount to withdraw = $50.00, Current balance = $200.00
- **Expected Output**:
  ```
  Withdrew $50.00. New balance: $150.00
  ```

#### **Case 3: Insufficient Funds**
- **Input**: Amount to withdraw = $300.00, Current balance = $150.00
- **Expected Output**:
  ```
  Insufficient funds! Cannot withdraw $300.00
  ```

#### **Case 4: Check Balance**
- **Input**: Current balance = $150.00
- **Expected Output**:
  ```
  Current balance: $150.00
  ```

#### **Case 5: Apply Interest**
- **Input**: Current balance = $150.00, Default interest rate = 5%
- **Expected Output**:
  ```
  Applied 5.00% interest. Interest added: $7.50
  Interest applied! New balance: $157.50
  ```

#### **Case 6: Exit**
- **Input**: Choice = 5
- **Expected Output**:
  ```
  Exiting program...
  ```

---

## **Problem 3: Hotel-Banking Hybrid System**

### **Objective**
Combine the hotel booking system and banking system into a hybrid system where users can:
1. Book a hotel room and pay using their bank account.
2. Check their remaining balance after payment.
3. View booking and payment details.
4. Exit the program.

---

### **Menu Options**
1. **Book Room and Pay**: Book a room and deduct the cost from the user's bank account.
2. **Check Balance**: Display the remaining balance in the bank account.
3. **View Booking and Payment Details**: Display booking details and payment information.
4. **Exit**: Exit the program.

---

### **Input/Output Behavior**
- **Inputs**:
  - Room type (`Single`, `Double`, `Suite`).
  - Number of nights (integer).
  - Bank account balance (initially $1000.00).
- **Outputs**:
  - Booking confirmation with cost deduction.
  - Remaining balance after payment.
  - Detailed booking and payment information.

---

### **Functionality**
1. **Book Room and Pay**:
   - The user specifies the room type and number of nights.
   - The program calculates the cost based on predefined rates:
     - Single: $100 per night.
     - Double: $150 per night.
     - Suite: $250 per night.
   - Deducts the cost from the bank account balance.
   - Ensures sufficient funds before booking (error handling).

2. **Check Balance**:
   - Displays the remaining balance in the bank account.

3. **View Booking and Payment Details**:
   - Displays the room type, number of nights, total cost, and remaining balance.

4. **Exit**:
   - Terminates the program.

---

### **Test Cases**
#### **Case 1: Book Room and Pay**
- **Input**: Room type = "Suite", Nights = 2, Initial balance = $1000.00
- **Expected Output**:
  ```
  Booked Suite room for 2 nights. Cost: $500.00
  Remaining balance: $500.00
  ```

#### **Case 2: Insufficient Funds for Booking**
- **Input**: Room type = "Suite", Nights = 2, Initial balance = $400.00
- **Expected Output**:
  ```
  Insufficient funds! Cannot book the room.
  ```

#### **Case 3: Check Balance**
- **Input**: Current balance = $500.00
- **Expected Output**:
  ```
  Current balance: $500.00
  ```

#### **Case 4: View Booking and Payment Details**
- **Input**: Room type = "Suite", Nights = 2, Total cost = $500.00, Remaining balance = $500.00
- **Expected Output**:
  ```
  === Booking and Payment Details ===
  Room Type: Suite
  Number of Nights: 2
  Total Cost: $500.00
  Remaining Balance: $500.00
  ```

#### **Case 5: Invalid Room Type**
- **Input**: Room type = "Penthouse", Nights = 2, Initial balance = $1000.00
- **Expected Output**:
  ```
  Invalid room type!
  ```

#### **Case 6: Exit**
- **Input**: Choice = 4
- **Expected Output**:
  ```
  Exiting program...
  ```

---
