Here’s an **updated and polished version** of your `README.md` with a few improvements for clarity, consistency, and formatting. I also added a section for the new `data/` folder and minor fixes to grammar and headings:

---

# Hospital_Management_System_Cpp

A modular **Hospital Management System** project in C++ designed for collaborative development, allowing multiple developers to contribute efficiently.

---

## **Project Structure**

```
Hospital_Management_System_Cpp/
├─ include/        # Header files (.h/.hpp)
├─ src/            # Source files (.cpp)
├─ data/           # Data files (e.g., databases, CSVs)
├─ build/          # Compiled objects (ignored in Git)
├─ CMakeLists.txt  # Build configuration
└─ README.md       # Project documentation
```

**Notes:**

* `include/` → contains all header files
* `src/` → contains all implementation files
* `data/` → contains project data files such as CSV or JSON
* `build/` → contains compiled files (ignored in Git)
* `tests/` → contains unit tests (Google Test recommended)

---

## **Getting Started**

### **Prerequisites**

* C++ compiler (C++17 or above)
* CMake >= 3.10
* Git

### **Clone the project**

```bash
git clone https://github.com/Abdelrahman-Mahmoud-Elsaeed/Hospital_Management_System_Cpp.git
cd Hospital_Management_System_Cpp
```

### **Build the project**

```bash
mkdir build
cd build
cmake ..
make
```

### **Run the program**

```bash
./Hospital_Management_System_Cpp
```

---

## **Contribution Guide**

We welcome contributions! Follow these steps:

1. **Fork the repository** and clone it.
2. **Create a branch** for your feature/fix:

```bash
git checkout -b feature/my-feature
```

3. **Make changes** in a modular way:

   * Keep related functions in separate `.cpp` files
   * Update or add header files in `include/`
   * Write tests in `tests/` if possible

4. **Commit changes** with descriptive messages:

```bash
git add .
git commit -m "Add feature X"
```

5. **Push branch** to your fork and open a Pull Request.

---

## **Code Architecture Rules**

To keep the project organized:

1. **Modular Design**

   * Each `.cpp` file should implement **one module or feature**
   * Corresponding `.h` header file must define the interface

2. **Single Responsibility**

   * Each function should do **one thing only**

3. **Naming Conventions**

   * Functions: `camelCase`
   * Classes/Structs: `PascalCase`
   * Constants: `ALL_CAPS`

4. **Testing**

   * Write tests for all new features in `tests/`

5. **No Global Variables**

   * Use parameters or class members

6. **Code Review**

   * Always create Pull Requests
   * Review code for readability, modularity, and correctness

---
