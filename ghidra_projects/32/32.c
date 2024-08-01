
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
  (*(code *)PTR_00103f58)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_istream *
std::getline<char,std::char_traits<char>,std::allocator<char>>
          (basic_istream *param_1,basic_string *param_2)

{
  basic_istream *pbVar1;
  
  pbVar1 = (basic_istream *)
           (*(code *)PTR_getline<char,std_char_traits<char>,std_allocator<char>>_00103f60)();
  return pbVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
  (*(code *)PTR_operator<<_00103f68)();
  return;
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
          (basic_string<char,std::char_traits<char>,std::allocator<char>> *this)

{
  (*(code *)PTR__basic_string_00103f70)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00103f78)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103f80)();
  return pbVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103f88)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103f90)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (void)

{
  (*(code *)PTR_basic_string_00103f98)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length(void)

{
  (*(code *)PTR_length_00103fa0)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fa8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fb0)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fb8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator[]
               (ulong param_1)

{
  (*(code *)PTR_operator___00103fc0)();
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



/* WARNING: Removing unreachable block (ram,0x00101223) */
/* WARNING: Removing unreachable block (ram,0x0010122f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101264) */
/* WARNING: Removing unreachable block (ram,0x00101270) */

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
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  basic_ostream *pbVar4;
  basic_ostream<char,std::char_traits<char>> *pbVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  basic_string local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
                    /* try { // try from 0010130c to 0010151f has its CatchHandler @ 00101544 */
  std::operator<<((basic_ostream *)std::cout,"Enter the string : ");
  std::getline<char,std::char_traits<char>,std::allocator<char>>((basic_istream *)std::cin,local_48)
  ;
  local_4c = 0;
  do {
    uVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length();
    if (uVar3 <= (ulong)(long)local_4c) {
      pbVar4 = std::operator<<((basic_ostream *)std::cout,"Number of vowels : ");
      pbVar5 = (basic_ostream<char,std::char_traits<char>> *)
               std::basic_ostream<char,std::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::char_traits<char>> *)pbVar4,local_50);
      std::basic_ostream<char,std::char_traits<char>>::operator<<
                (pbVar5,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                        PTR_endl<char,std_char_traits<char>>_00103fd0);
      pbVar4 = std::operator<<((basic_ostream *)std::cout,"Number of consonants : ");
      lVar6 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length()
      ;
      pbVar5 = (basic_ostream<char,std::char_traits<char>> *)
               std::basic_ostream<char,std::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::char_traits<char>> *)pbVar4,lVar6 - local_50);
      std::basic_ostream<char,std::char_traits<char>>::operator<<
                (pbVar5,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                        PTR_endl<char,std_char_traits<char>>_00103fd0);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_48);
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     operator[]((ulong)local_48);
    if (*pcVar2 == 'A') {
LAB_0010145f:
      bVar1 = true;
    }
    else {
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'a') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'E') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'e') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'I') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'i') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'O') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'o') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'U') goto LAB_0010145f;
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_48);
      if (*pcVar2 == 'u') goto LAB_0010145f;
      bVar1 = false;
    }
    if (bVar1) {
      local_50 = local_50 + 1;
    }
    local_4c = local_4c + 1;
  } while( true );
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



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_istream *
std::getline<char,std::char_traits<char>,std::allocator<char>>
          (basic_istream *param_1,basic_string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE@GLIBCXX_3.4.21
                        */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEm@GLIBCXX_3.4 */
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

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
          (basic_string<char,std::char_traits<char>,std::allocator<char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GLIBCXX_3.4.21 */
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

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@GLIBCXX_3.4.21 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv@GLIBCXX_3.4.21
                        */
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

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __gxx_personality_v0@CXXABI_1.3 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEi@GLIBCXX_3.4 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator[]
               (ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@GLIBCXX_3.4.21 */
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


