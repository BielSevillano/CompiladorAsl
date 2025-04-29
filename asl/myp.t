function main
  vars
    n integer
    f integer
    aux integer
    end boolean
  endvars

     readi n
     aux = n
     %1 = 0
     %2 = n < %1
     ifFalse %2 goto endif1
     writes "n >= 0!\n"
     %3 = 1
     end = %3
  label endif1 :
     %4 = 1
     f = %4
  label while1 :
     %5 = not end
     %6 = 1
     %8 = n <= %6
     %7 = not %8
     %9 = %5 and %7
     ifFalse %9 goto endwhile1
     %10 = f * n
     f = %10
     %13 = 1
     %14 = n - %13
     n = %14
     goto while1
  label endwhile1 :
     %17 = 0
     %18 = end == %17
     ifFalse %18 goto endif2
     writei aux
     writes "!="
     writei f
     writes "\n"
  label endif2 :
     return
endfunction


