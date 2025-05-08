function one
  params
    _result float
  endparams

   %1 = 1
   %3 = float %1
   _result = %3
   return
endfunction

function sort
  params
    v float array
  endparams

  vars
    i integer
    j integer
    jmin integer
    aux float
  endvars

     %1 = 0
     i = %1
  label while1 :
     %2 = 20
     %3 = 1
     %4 = %2 - %3
     %7 = i < %4
     ifFalse %7 goto endwhile1
     jmin = i
     %8 = 1
     %9 = i + %8
     j = %9
  label while2 :
     %12 = 20
     %13 = j < %12
     ifFalse %13 goto endwhile2
     %14 = v
     %15 = %14[j]
     %16 = v
     %17 = %16[jmin]
     %18 = %15 <. %17
     ifFalse %18 goto endif1
     jmin = j
  label endif1 :
     %19 = 1
     %20 = j + %19
     j = %20
     goto while2
  label endwhile2 :
     %24 = jmin == i
     %23 = not %24
     ifFalse %23 goto endif2
     %25 = v
     %26 = %25[i]
     aux = %26
     %27 = v
     %28 = v
     %29 = %28[jmin]
     %27[i] = %29
     %30 = v
     %30[jmin] = aux
  label endif2 :
     %31 = 1
     %32 = i + %31
     i = %32
     goto while1
  label endwhile1 :
     return
endfunction

function evenPositivesAndSort
  params
    v float array
  endparams

  vars
    i integer
  endvars

     %1 = 0
     i = %1
  label while1 :
     %2 = 20
     %3 = i < %2
     ifFalse %3 goto endwhile1
     %4 = v
     %5 = %4[i]
     %6 = 0
     %7 = float %6
     %9 = %5 <=. %7
     %8 = not %9
     ifFalse %8 goto endif1
     %10 = v
     pushparam 
     call one
     popparam %11
     %10[i] = %11
  label endif1 :
     %12 = 1
     %13 = i + %12
     i = %13
     goto while1
  label endwhile1 :
     pushparam v
     call sort
     popparam 
     return
endfunction

function main
  vars
    af float 20
    i integer
  endvars

     %1 = 0
     i = %1
  label while1 :
     %2 = 20
     %3 = i < %2
     ifFalse %3 goto endwhile1
     readf %4
     af[i] = %4
     %5 = 1
     %6 = i + %5
     i = %6
     goto while1
  label endwhile1 :
     %9 = &af
     pushparam %9
     call evenPositivesAndSort
     popparam 
     %10 = 0
     i = %10
  label while2 :
     %11 = 20
     %12 = i < %11
     ifFalse %12 goto endwhile2
     %13 = af[i]
     pushparam 
     call one
     popparam %14
     %16 = %13 ==. %14
     %15 = not %16
     ifFalse %15 goto else1
     %17 = af[i]
     writef %17
     %18 = ' '
     writec %18
     %19 = 1
     %20 = i + %19
     i = %20
     goto endif1
  label else1 :
     %23 = '\n'
     writec %23
     return
  label endif1 :
     goto while2
  label endwhile2 :
     %24 = '\n'
     writec %24
     return
endfunction


