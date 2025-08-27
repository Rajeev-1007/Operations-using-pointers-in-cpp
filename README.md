# Operations-using-pointers-in-cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

Aim: Operations using pointers in C++.

Software Used: VS Code.

Theory: In C++, call by value passes a copy of the variable to a function, so changes inside the function don’t affect the original. In contrast, call by reference using pointers passes the variable’s address, allowing direct modification of the original value. This is useful for memory efficiency and in-place updates. Pointers enable dynamic interaction with data and are essential for building flexible, low-level logic.

Call by value syntax:

    void update(int x) {
    x = x + 10;  // modifies local copy only
    }

    int main() {
    int a = 5;
    update(a);   // original 'a' remains unchanged
    cout << a;   // Output: 5
    }


Call by reference syntax:

    void update(int *x) {
    *x = *x + 10;  // modifies original value via pointer
    }

    int main() {
    int a = 5;
    update(&a);    // original 'a' is updated
    cout << a;     // Output: 15
    }



Algorithm:

1) Call by value algorithm.
  
   a. Start

   b. Declare a global integer variable `temp` for temporary storage

   c. Define a function `swap(int *x, int *y)`:
      - Store value pointed by `x` in `temp`
      - Assign value pointed by `y` to location pointed by `x`
      - Assign value in `temp` to location pointed by `y`

   d. In `main()`:
      - Declare two integer variables `a = 12`, `b = 6`
      - Display values before swapping

   e. Call `swap(&a, &b)` to exchange values using pointers

   f. Display values after swapping

   g. End

2) Call by reference algorithm.

   a. Start

   b. Declare a global integer variable `temp` for temporary storage

   c. Define a function `swap(int &x, int &y)`:
      - Store value of `x` in `temp`
      - Assign value of `y` to `x`
      - Assign value in `temp` to `y`

   d. In `main()`:
      - Declare two integer variables `a = 12`, `b = 6`
      - Display values before swapping

   e. Call `swap(a, b)` to exchange values using reference variables

   f. Display values after swapping

   g. End

3) Salary increment algorithm

   a. Start

   b. Define function `ref(float &profit)`:
      - Increase `profit` by 20% → profit = profit + (profit * 0.20)

   c. In `main()`:
      - Declare variables:
        - id → Employee ID
        - projects → Number of completed projects
        - publications → Number of publications
        - new_proj_in_pipeline → Upcoming projects
        - profit → Profit earned
        - salary → Current salary

   d. Prompt user to enter:
      - Employee ID
      - Projects done
      - Publications done
      - Profit (Rs)
      - Salary (Rs)
      - New projects in pipeline

   e. Check eligibility condition:
      - If `projects > 0` AND `publications > 0` AND `profit >= 100000` AND `new_proj_in_pipeline > 0`:
         - Display Employee ID
         - Call `ref(salary)` to increment salary by 20%
         - Display updated salary
      - Else:
         - Display message: "Salary will not increase for: ID"

   f. End


Conclusion:
Call by reference and call by value using pointers in C++ offer powerful ways to manage data. While call by value preserves original variables, call by reference allows direct modification. Understanding these concepts enhances control over memory, improves efficiency, and is vital for writing flexible, optimized code.
