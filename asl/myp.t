function x2
  params
    _result integer
    a integer array
  endparams

  vars
    i integer
    n integer
  endvars

     %1 = 0
     n = %1
     %2 = 0
     i = %2
  label while1 :
     %3 = 10
     %4 = i < %3
     ifFalse %4 goto endwhile1
     %5 = a
     %6 = %5[i]
     %7 = 80
     %8 = %6 < %7
     ifFalse %8 goto endif1
     %9 = 1
     %10 = n + %9
     n = %10
  label endif1 :
     %13 = a
     %14 = a
     %15 = %14[i]
     %16 = 2
     %17 = %15 * %16
     %13[i] = %17
     %20 = a
     %21 = %20[i]
     writei %21
     writes "\n"
     %22 = 1
     %23 = i + %22
     i = %23
     goto while1
  label endwhile1 :
     _result = n
     return
endfunction

function main
  vars
    x integer 10
    i integer
    z integer
  endvars

     %1 = 0
     i = %1
  label while1 :
     %2 = 10
     %3 = i < %2
     ifFalse %3 goto endwhile1
     %4 = 77
     %5 = %4 + i
     x[i] = %5
     %8 = 1
     %9 = i + %8
     i = %9
     goto while1
  label endwhile1 :
     %12 = 0
     i = %12
  label while2 :
     %13 = 10
     %14 = i < %13
     ifFalse %14 goto endwhile2
     %15 = x[i]
     writei %15
     writes "\n"
     %16 = 1
     %17 = i + %16
     i = %17
     goto while2
  label endwhile2 :
     pushparam 
     %20 = &x
     pushparam %20
     call x2
     popparam 
     popparam %21
     z = %21
     writes "z:"
     writei z
     writes "\n"
     %22 = 0
     i = %22
  label while3 :
     %23 = 10
     %24 = i < %23
     ifFalse %24 goto endwhile3
     writes "x["
     writei i
     writes "]="
     %25 = x[i]
     writei %25
     writes "\n"
     %26 = 1
     %27 = i + %26
     i = %27
     goto while3
  label endwhile3 :
     return
endfunction


