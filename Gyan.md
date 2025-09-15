**By → Bjarne Stroustrup**  
- Earlier known as **C with Classes**  
- `stream` refers to the **flow of bytes/information**

---

## Data Types
- **User-defined data types**: `struct`, `union`, `enum`  
- **Derived data types**: `array`, `function`, `pointer`

---

## Input/Output
- `cout <<` → **insertion operator**  
- `cin >>` → **extraction operator**

---

## Copy Types
- **Shallow Copy**  
  - Copies all the member values from one object to another (**default behavior**).  
- **Deep Copy**  
  - Copies all the member values from one object to another.  
  - Also makes copies of any **dynamically allocated memory** that the members point to.  

---

## Friend Function
1. Not in the scope of the class and **cannot be called by an object**.  
2. Given permission to **access private members**.  
3. Can be declared in **private** as well as **public** parts of the class.  

---

## `this` Keyword
- Refers to the **current object** of a class.  
- Used to **differentiate between local variables and class members** with the same name.  
- Useful in **returning the current object** in operator overloading.  
- Passed **implicitly** to all non-static member functions.  

---

## Templates
- Enable writing code that works with **different data types**.  
- Avoid the need for **explicit type casting** or **function overloading**.  
- Provides **reusability** and **type safety**.  
