function mul
  params
    _result integer
    a integer
    b integer
  endparams

   %1 = a * b
   _result = %1
   return
endfunction

function main
  vars
    x integer
    y integer
  endvars

   readi x
   readi y
   writes "x*y*2="
   pushparam 
   pushparam x
   pushparam y
   call mul
   popparam 
   popparam 
   popparam %1
   %2 = 2
   %3 = %1 * %2
   writei %3
   writes ".\n"
   return
endfunction


