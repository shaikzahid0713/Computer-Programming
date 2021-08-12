/* Algorithm 
   for j = 2 to n(length)
      key = a[j]
      // Insert a[j] into the sorted sequence a[1 ... j - 1]
      i = j - 1
      while (i >= 0 and a[i] > key) 
         a[i + 1] = a[i]
         i = i - 1
      a[i + 1] = key
*/