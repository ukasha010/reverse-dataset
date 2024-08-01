
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
  (*(code *)PTR_00103f78)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00103f80)();
  return;
}



void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00103f88)();
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



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fa8)();
  return;
}



void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00103fb0)();
  return;
}



void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00103fb8)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fc0)();
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



/* WARNING: Removing unreachable block (ram,0x001011a3) */
/* WARNING: Removing unreachable block (ram,0x001011af) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001011e4) */
/* WARNING: Removing unreachable block (ram,0x001011f0) */

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
  ExceptHandler<int>(1);
  ExceptHandler<double>(DAT_001020b0);
  ExceptHandler<char>('A');
  ExceptHandler<char_const*>("Hello");
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



/* void ExceptHandler<int>(int) */

void ExceptHandler<int>(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)__cxa_allocate_exception(4);
  *piVar1 = param_1;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0010132c to 00101330 has its CatchHandler @ 00101331 */
  __cxa_throw(piVar1,int::typeinfo,0);
}



/* void ExceptHandler<double>(double) */

void ExceptHandler<double>(double param_1)

{
  double *pdVar1;
  
  pdVar1 = (double *)__cxa_allocate_exception(8);
  *pdVar1 = param_1;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0010150b to 0010150f has its CatchHandler @ 00101510 */
  __cxa_throw(pdVar1,double::typeinfo,0);
}



/* void ExceptHandler<char>(char) */

void ExceptHandler<char>(char param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)__cxa_allocate_exception(1);
  *pcVar1 = param_1;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001016e7 to 001016eb has its CatchHandler @ 001016ec */
  __cxa_throw(pcVar1,char::typeinfo,0);
}



/* void ExceptHandler<char const*>(char const*) */

void ExceptHandler<char_const*>(char *param_1)

{
  char **ppcVar1;
  
  ppcVar1 = (char **)__cxa_allocate_exception(8);
  *ppcVar1 = param_1;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001018c3 to 001018c7 has its CatchHandler @ 001018c8 */
  __cxa_throw(ppcVar1,char_const*::typeinfo,0);
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_begin_catch@CXXABI_1.3 */
  halt_baddata();
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

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_allocate_exception@CXXABI_1.3 */
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

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_end_catch@CXXABI_1.3 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __gxx_personality_v0@CXXABI_1.3 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_throw@CXXABI_1.3 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void _Unwind_Resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _Unwind_Resume@GCC_3.0 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __gmon_start__(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
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


