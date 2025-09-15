# History of Programming Languages

- **Machine Language** → Works in **binary digits**, extremely error-prone.  
- **Assembly Language** → Uses **mnemonics** for readability.  
- **Procedural Programming** → Introduced **functions, loops, if-else blocks**.  
- **Object-Oriented Programming (OOP)**  
  - Real-world modeling  
  - Data security and access specifiers  
  - Scalable and reusable  

---

## Key OOP Concepts

- **Object** → A real-world “thing” with **attributes** and **behaviors**.  
- **Class** → Blueprint defining attributes (fields) and behaviors (methods).  
- **Instance** → Concrete object in memory, created from a class.  

---

## Pillars of OOP

### 🌿 Abstraction (Data Hiding)
- Hides **unnecessary details** from the client and shows only what is required.  
- Cannot directly create objects of an abstract class. Must **inherit** and provide implementation for all abstract (virtual) methods.  

**Advantages:**  
- Simplified interfaces  
- Internal changes don’t affect client code  
- Multiple concrete classes can implement the same abstract interface  

---

### 🌿 Encapsulation (Data Security)
- Bundles an object’s **data** and its **methods** into a single unit.  
- Restricts **direct external access** to sensitive fields.  

**Access Modifiers:**  
- `public` → Accessible everywhere  
- `private` → Accessible only within the class  
- `protected` → Accessible within the class and its subclasses  

**Getters & Setters (with validation):**  
- Allow controlled modification of fields.  
- Prevent invalid or unsafe operations.  

---

### 🌿 Inheritance
- Allows one class (child) to derive from another (parent).  

**Disadvantages:**  
1. **Tight Coupling** → Child depends heavily on parent; parent changes may break child.  
2. **Less Flexibility** → Subclass cannot easily change inherited behavior.  
3. **Misuse** → Often used where **composition** would be better.  
4. **Poor Encapsulation** → Child may access internal details of parent, violating data hiding.  

---

### 🌿 Polymorphism
- Objects can take **more than one form** depending on context.  

**Types of Polymorphism:**  
1. **Compile-time / Static / Early Binding**  
   - Example: **Method Overloading**  
   - Behavior determined **before execution**.  
   - Same method name adapts based on different arguments.  

2. **Run-time / Dynamic / Late Binding**  
   - Example: **Method Overriding**  
   - Behavior determined **at runtime**.  
   - Same method signature redefined in child class.  
   - Achieved using **virtual functions** in C++.  

---

## Operator Overloading

**Definition:**  
- Allows developers to **redefine the meaning of operators** (`+`, `-`, `*`, etc.) for **user-defined types**.  

**Why not supported in Java?**  
- Simplicity and readability  
- Debugging and maintaining code becomes harder  

**Python Approach:**  
- Uses **special methods** (also called "dunder methods") like:  
  - `__add__()` → for `+`  
  - `__sub__()` → for `-`  
  - `__mul__()` → for `*`  

