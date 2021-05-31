Set i to i
loop: Start from fingerprint i
   j = i+1

   loop 2: while (j < number_fingerprints)
      compare fingerprint i to fingerprint j
      if fingerprints don't match
         j++
      else
         delete fingerprint j
      goto loop 2:
   if (i < number_fingerprints)
      i++
      goto loop:
   else
   
