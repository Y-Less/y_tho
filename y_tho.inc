//   SetPlayerPos i, 0.0, 0.0, 4.0
#pragma semicolon 0
#if defined __PawnBuild
	#if __PawnBuild >= 4
		#pragma option -(-
	#endif
#endif

// 
//   if [ a -le 5 ]
//   then
//       echo "hello"
//   fi
// 

#define if[%0]%8\10;%9 if(%0)%8
#define then%8\10;%9 {%8
#define else%8\10;%9 }else{%8
#define elif[%0]%8\10;%9 }else if(%0){%8
#define fi%8\10;%9 }%8

#define lt 0<  // -lt
#define le 0<= // -le
#define eq 0== // -eq
#define ne 0!= // -ne
#define ge 0>= // -ge
#define gt 0>  // -gt

// 
//   for ((i = 0; i -ne 10; ++i))
//   do
//       echo "counter: %d", i
//       SetPlayerPos(i, 0.0, 0.0, 4.0)
//   done

stock bool:DONE_FALSE = false;

#define for%8\10;%9 for (new %8)REMOVE_ME:(%8)
#define do%8\10;%9 {%8
#define done%8\10;%9 }%8

// 
//   for i in {0 .. 10}
//   do
//       echo "counter: %d", i
//       SetPlayerPos(i, 0.0, 0.0, 4.0)
//   done
// 

#define new((%0)) new %0
#define in{%0..%1})REMOVE_ME:(%9\32;%2\32;%9) =%0;%2!=%1;++%2)
#define REMOVE_ME:(%9)
#define in_REMOVE_ME

//   echo "hello %s", username
#define echo%0\10;%9 printf(#%0);

// 
//   switch i of
//   case 5)
//       echo "5"
//   case 7)
//       echo "7"
//   esac
// 

#define switch%0\10;%9 switch(%0)
#define of) ){case cellmin:{
#define case%0) }case %0:{
#define default) }default:{
#define esac }}

// 
//   while [ i -ne 10 ]
//   do
//       echo "counter: %d", i
//       SetPlayerPos(i, 0.0, 0.0, 4.0)
//   done
// 
#define while[%0]%8\10;%9 while(%0)%8

// 
//   until [ i -eq 10 ]
//   do
//       echo "counter: %d", i
//       SetPlayerPos(i, 0.0, 0.0, 4.0)
//   done
// 
#define until[%0]%8\10;%9 while(!(%0))%8

