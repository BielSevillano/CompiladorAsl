function f
  params
    _result boolean
    a integer
    f float
  endparams

  vars
    x integer
    b boolean
    z integer 10
  endvars

     %1 = 5
     readi %2
     z[%1] = %2
     %3 = 5
     %4 = z[%3]
     %5 = 88
     %7 = float %5
     %6 = %7 *. f
     %10 = float %4
     %9 = %10 -. %6
     writef %9
     readi b
     readf f
     ifFalse b goto endif1
     writes "h\n\tl\\a"
     %12 = -. f
     %13 = -. %12
     %14 = -. %13
     writef %14
     writes "\n"
  label endif1 :
     %15 = 1
     _result = %15
     return
endfunction

function fz
  params
    _result float
    r integer
    u float
  endparams

  label while1 :
     %1 = 0.01
     %2 = float r
     %4 = %2 <= %1
     %3 = not %4
     ifFalse %3 goto endwhile1
     %5 = 1
     %6 = r - %5
     r = %6
     goto while1
  label endwhile1 :
     %9 = 0
     %10 = r == %9
     ifFalse %10 goto endif1
     pushparam 
     %11 = 55555
     pushparam %11
     %12 = 5
     %13 = - %12
     %14 = 4
     %15 = %13 / %14
     %18 = float %15
     pushparam %18
     call f
     popparam 
     popparam 
     popparam 
  label endif1 :
     %19 = 3
     %20 = r + %19
     %24 = float %20
     %23 = %24 *. u
     _result = %23
     return
endfunction

function main
  vars
    a integer
    q float
  endvars

   %1 = 1
   %2 = - %1
   %3 = float %2
   q = %3
   pushparam 
   %4 = 3
   %5 = 4
   %6 = %4 + %5
   pushparam %6
   pushparam 
   %9 = 4444
   pushparam %9
   %10 = 3
   %13 = float %10
   %11 = q +. %13
   pushparam %11
   call fz
   popparam 
   popparam 
   popparam %14
   pushparam %14
   call fz
   popparam 
   popparam 
   popparam %15
   q = %15
   %16 = 3.7
   %17 = q +. %16
   %20 = 4
   %23 = float %20
   %21 = %17 +. %23
   writef %21
   writes "\n"
   return
endfunction


