# AtCoder-One-Quadrillion-and-One-Dalmatians
### Problem
![](capture.png)
### Program Simulation
<pre>
  Sample Input: 2

  n = 2
  string s = ""
  
  n--
  n = 1
  s += (char)('a' + (1 % 26)) // s + 97 + 1 = s + (char) 98 = b
  s += b
  1 /= 26
  n = 0

  reverse s string

  print s

  Final Output:
  b
  <hr>
  Sample Input: 27

  n = 27
  string s = ""

  n--
  n = 26
  s += (char)('a' + (26 % 26)) // s + 97 + 0 + s + 97 = a
  s += a
  26 /= 26
  n = 1

  n--
  n = 0
  s += (char)('a' + (0 % 26)) // s + 97 + 0 = s + 97 = a
  s += a
  0 /= 26
  n = 0

  reverse s string

  print s

  Final Output:
  aa
  <hr>
  Sample Input: 123456789

  n = 123456789
  string s = ""

  n--
  n = 123456788
  s += (char)('a' + (123456788 % 26)) // s + 97 + 0 = a
  s += a
  123456788 /= 26
  n = 4748338

  n--
  n = 4748337
  s += (char)('a' + (4748337 % 26)) // s + 97 + 9 = s + 106 = j
  s += j
  4748337 /= 26
  n = 182628

  n--
  n = 182627
  s += (char)('a' + (182627 % 26)) // s + 97 + 3 = s + 100 = d
  s += d
  182627 /= 26
  n = 7024

  n--
  n = 7023
  s += (char)('a' + (7023 % 26)) // s + 97 + 3 = s + 100 = d
  s += d
  7023 /= 26
  n = 270

  n--
  n = 269
  s += (char)('a' + (269 % 26)) = s + 97 + 9 = s + 106 = j
  s += j
  269 /= 26
  n = 10

  n--
  n = 9
  s += (char)('a' + (9 % 26)) // s + 97 + 9 = s + 106 = j
  s += j
  9 /= 26
  n = 0

  reverse s string

  print s

  Final Output:
  jjddja
</pre>
