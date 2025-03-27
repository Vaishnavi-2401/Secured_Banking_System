# 🔐 Secured Banking System

## 📌 Overview
This is a simple secured banking system implemented in C.
This C program simulates a secured system where a user must provide valid credentials (username & password) to access their bank details.
It demonstrates authentication, structured data storage, and security concepts using fundamental C programming techniques.

## ✨ Features & Functionality
- ✅ **User Authentication** – Only authorized users can access banking details.
- ✅ **3 Login Attempts** – The user has only 3 chances to enter the correct credentials (Username & Password) before being locked out.
- ✅ **Display Bank Details** – After successful login, the system displays the Account Holder's Name, Account Number, and Balance.

## 🛠️ Technologies Used
- C Programming Language

## 🚀 How It Works
1. The user is prompted to enter the credentials (Username & Password).
2. If the credentials match the hardcoded values, the system grants access and displays bank details.
3. If incorrect credentials are entered, the user is notified of the remaining attempts.
4. After 3 failed attempts, the system denies access.

## 📌 Code Structure
1️⃣ **Predefined Username & Password:**
   - Stored using `#define` macros.

2️⃣ **BankDetails Structure:**
   - Holds account information:
     - `accountHolder` (string)
     - `accountNumber` (string)
     - `balance` (double)

3️⃣ **Authentication System:**
   - Asks user for Username & Password.
   - Compares input using `strcmp()`.
   - Allows 3 attempts before locking access.

4️⃣ **Bank Details Display:**
   - Displays user’s account details only if authentication is successful.

## 🖥️ Installation
### 🔹 Prerequisites:
Ensure you have a C compiler installed, such as GCC.

## 🚀 How to Run the Program
### 🔹 Compilation:
```sh
gcc password_protected.c -o banking_system
```

### 🔹 Execution:
```sh
./banking_system
```

### 🔹 Login Credentials (For Testing):
- **Username:** `vaishnavi_chirmade`
- **Password:** `Project@123`

### 🔹 Expected Behavior:
- ✅ If the correct credentials are entered, the user gains access and is able to see the bank details.
- ❌ If incorrect credentials are entered, the user gets 3 attempts before access is denied.

## 🎯 Future Improvements
- 📌 Implement hashed passwords instead of plain text storage.
- 📌 Integrate dynamic user registration and login system.
- 📌 Use file handling to store account details securely.
- 📌 Improve the UI for a better user experience.

---

**📢 Contributions, Issues, and Feedback are welcome!**

