
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00103fe8;
  if (PTR___gmon_start___00103fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00103fe8)();
  }
  return (int)puVar1;
}



void FUN_00101020(void)

{
  (*(code *)PTR_00103f88)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00103f90)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103f98)();
  return pbVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103fa0)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fa8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103fb0)();
  return pbVar1;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fb8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,double param_1)

{
  (*(code *)PTR_operator<<_00103fc0)();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00101163) */
/* WARNING: Removing unreachable block (ram,0x0010116f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001011a4) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00103fc8 != (undefined *)0x0) {
      __cxa_finalize(__dso_handle);
    }
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 main(void)

{
  char cVar1;
  basic_ostream *pbVar2;
  basic_ostream<char,std::char_traits<char>> *this;
  long in_FS_OFFSET;
  double dVar3;
  Stack<char> local_88 [16];
  Stack<double> local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Stack<char>::Stack();
  Stack<char>::push(local_88,'S');
  Stack<char>::push(local_88,'K');
  Stack<char>::push(local_88,'I');
  Stack<char>::push(local_88,'I');
  Stack<char>::push(local_88,'P');
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Top element of the stack s1 : ");
  cVar1 = Stack<char>::pop();
  pbVar2 = std::operator<<(pbVar2,cVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar2,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  Stack<double>::Stack();
  Stack<double>::push(local_78,DAT_00102070);
  Stack<double>::push(local_78,DAT_00102078);
  Stack<double>::push(local_78,DAT_00102080);
  Stack<double>::push(local_78,DAT_00102088);
  Stack<double>::push(local_78,DAT_00102090);
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Top element of the stack s2 : ");
  dVar3 = (double)Stack<double>::pop();
  this = (basic_ostream<char,std::char_traits<char>> *)
         std::basic_ostream<char,std::char_traits<char>>::operator<<
                   ((basic_ostream<char,std::char_traits<char>> *)pbVar2,dVar3);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (this,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                  PTR_endl<char,std_char_traits<char>>_00103fd0);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* __static_initialization_and_destruction_0(int, int) */

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(PTR__Init_00103ff8,&std::__ioinit,&__dso_handle);
  }
  return;
}



void _GLOBAL__sub_I_main(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Stack<char>::Stack() */

void Stack<char>::Stack(void)

{
  long in_RDI;
  
  *(undefined4 *)(in_RDI + 0xc) = 0;
  return;
}



/* Stack<char>::push(char) */

void __thiscall Stack<char>::push(Stack<char> *this,char param_1)

{
  basic_ostream *this_00;
  
  if (*(int *)(this + 0xc) == 10) {
    this_00 = std::operator<<((basic_ostream *)std::cout,"Stack is full");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)this_00,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00103fd0);
  }
  else {
    this[*(int *)(this + 0xc)] = (Stack<char>)param_1;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Stack<char>::pop() */

undefined Stack<char>::pop(void)

{
  undefined uVar1;
  basic_ostream *this;
  long in_RDI;
  
  if (*(int *)(in_RDI + 0xc) == 0) {
    this = std::operator<<((basic_ostream *)std::cout,"Stack is empty");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)this,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00103fd0);
    uVar1 = 0;
  }
  else {
    *(int *)(in_RDI + 0xc) = *(int *)(in_RDI + 0xc) + -1;
    uVar1 = *(undefined *)(in_RDI + *(int *)(in_RDI + 0xc));
  }
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Stack<double>::Stack() */

void Stack<double>::Stack(void)

{
  long in_RDI;
  
  *(undefined4 *)(in_RDI + 0x50) = 0;
  return;
}



/* Stack<double>::push(double) */

void __thiscall Stack<double>::push(Stack<double> *this,double param_1)

{
  basic_ostream *this_00;
  
  if (*(int *)(this + 0x50) == 10) {
    this_00 = std::operator<<((basic_ostream *)std::cout,"Stack is full");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)this_00,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00103fd0);
  }
  else {
    *(double *)(this + (long)*(int *)(this + 0x50) * 8) = param_1;
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Stack<double>::pop() */

undefined8 Stack<double>::pop(void)

{
  basic_ostream *this;
  long in_RDI;
  undefined8 uVar1;
  
  if (*(int *)(in_RDI + 0x50) == 0) {
    this = std::operator<<((basic_ostream *)std::cout,"Stack is empty");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)this,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00103fd0);
    uVar1 = 0;
  }
  else {
    *(int *)(in_RDI + 0x50) = *(int *)(in_RDI + 0x50) + -1;
    uVar1 = *(undefined8 *)(in_RDI + (long)*(int *)(in_RDI + 0x50) * 8);
  }
  return uVar1;
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::endl<char,std::char_traits<char>>(basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __libc_start_main@GLIBC_2.34 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_atexit@GLIBC_2.2.5 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEPFRSoS_E@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __stack_chk_fail@GLIBC_2.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __gmon_start__(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,double param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEd@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_finalize@GLIBC_2.2.5 */
  halt_baddata();
}


