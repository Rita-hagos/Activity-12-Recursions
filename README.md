# Activity-12-Recursions

## Question 1: Base Case
The base case is:
 return if low > high

 this stops the recursion when low becomes greater than high

 ## Question 2
 The funcntion skips every other number.
 Factorial (10) = 10 * 8 *6*4 *2 =3840

 so it's not real facotrial

 ##Question 3
 def sum (low,high)
     return low if high ==low
     return high + sum (low, high -1)
  end
  This stops recursions when low equals high

  ## Question 4
  The fucntion checks for
     If its a number = print it
     If it's an array = call recursion again
