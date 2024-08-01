
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (basic_string *param_1)

{
  (*(code *)PTR_basic_string_00103f68)();
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

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_00103fa0)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length(void)

{
  (*(code *)PTR_length_00103fa8)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fb0)();
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



/* assign0(int*) */

void assign0(int *param_1)

{
  int local_c;
  
  for (local_c = 0; local_c < 0x1a; local_c = local_c + 1) {
    param_1[local_c] = 0;
  }
  return;
}



/* update(int*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >) */

void update(int *param_1,basic_string param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined4 in_register_00000034;
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    uVar2 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length();
    if (uVar2 <= (ulong)(long)local_1c) break;
    pcVar1 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     operator[](CONCAT44(in_register_00000034,param_2));
    param_1[(long)*pcVar1 + -0x61] = param_1[(long)*pcVar1 + -0x61] + 1;
    local_1c = local_1c + 1;
  }
  return;
}



/* checkAnagram(int*, int*) */

undefined checkAnagram(int *param_1,int *param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0x19 < local_c) {
      return 1;
    }
    if (param_1[local_c] != param_2[local_c]) break;
    local_c = local_c + 1;
  }
  return 0;
}



undefined8 main(void)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  basic_ostream *pbVar6;
  long in_FS_OFFSET;
  int local_160;
  int local_15c;
  basic_string local_158 [8];
  basic_string local_138 [8];
  basic_string local_118 [8];
  int local_f8 [28];
  int local_88 [26];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
                    /* try { // try from 00101434 to 001015af has its CatchHandler @ 001016f7 */
  std::operator<<((basic_ostream *)std::cout,"Enter string 1 : ");
  std::getline<char,std::char_traits<char>,std::allocator<char>>
            ((basic_istream *)std::cin,local_158);
  std::operator<<((basic_ostream *)std::cout,"Enter string 2 : ");
  std::getline<char,std::char_traits<char>,std::allocator<char>>
            ((basic_istream *)std::cin,local_138);
  assign0(local_f8);
  assign0(local_88);
  local_160 = 0;
  while( true ) {
    uVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length();
    if (uVar3 <= (ulong)(long)local_160) break;
    pcVar4 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     operator[]((ulong)local_158);
    iVar2 = tolower((int)*pcVar4);
    puVar5 = (undefined *)
             std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
             operator[]((ulong)local_158);
    *puVar5 = (char)iVar2;
    local_160 = local_160 + 1;
  }
  local_15c = 0;
  while( true ) {
    uVar3 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length();
    if (uVar3 <= (ulong)(long)local_15c) break;
    pcVar4 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                     operator[]((ulong)local_138);
    iVar2 = tolower((int)*pcVar4);
    puVar5 = (undefined *)
             std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
             operator[]((ulong)local_138);
    *puVar5 = (char)iVar2;
    local_15c = local_15c + 1;
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            (local_118);
                    /* try { // try from 001015c4 to 001015c8 has its CatchHandler @ 001016c7 */
  update(local_f8,(basic_string)local_118);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_118);
                    /* try { // try from 001015ec to 001015f0 has its CatchHandler @ 001016f7 */
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            (local_118);
                    /* try { // try from 00101602 to 00101606 has its CatchHandler @ 001016df */
  update(local_88,(basic_string)local_118);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_118);
  cVar1 = checkAnagram(local_f8,local_88);
  if (cVar1 == '\x01') {
                    /* try { // try from 0010164d to 00101690 has its CatchHandler @ 001016f7 */
    pbVar6 = std::operator<<((basic_ostream *)std::cout,"Strings are anagram!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar6,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00103fd0);
  }
  else {
    pbVar6 = std::operator<<((basic_ostream *)std::cout,"Strings are not anagram!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar6,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00103fd0);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_138);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_158);
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* assign0(int*) */

void _GLOBAL__sub_I_assign0(void)

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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@GLIBCXX_3.4.21
                        */
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

int tolower(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* tolower@GLIBC_2.2.5 */
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


