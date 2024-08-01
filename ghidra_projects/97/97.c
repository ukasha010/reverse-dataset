
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
  (*(code *)PTR_00103f60)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::basic_ifstream<char,std::char_traits<char>>::close(void)

{
  (*(code *)PTR_close_00103f68)();
  return;
}



void __thiscall
std::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream
          (basic_ifstream<char,std::char_traits<char>> *this)

{
  (*(code *)PTR__basic_ifstream_00103f70)();
  return;
}



void __thiscall
std::basic_ios<char,std::char_traits<char>>::operator!(basic_ios<char,std::char_traits<char>> *this)

{
  (*(code *)PTR_operator__00103f78)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00103f80)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103f88)();
  return pbVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103f90)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103f98)();
  return;
}



bool __thiscall std::basic_ios::operator_cast_to_bool(basic_ios *this)

{
  bool bVar1;
  
  bVar1 = (bool)(*(code *)PTR_operator_cast_to_bool_00103fa0)();
  return bVar1;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fa8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__istream_extract(basic_istream *param_1,char *param_2,long param_3)

{
  (*(code *)PTR___istream_extract_00103fb0)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fb8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::basic_ifstream<char,std::char_traits<char>>::basic_ifstream
               (char *param_1,_Ios_Openmode param_2)

{
  (*(code *)PTR_basic_ifstream_00103fc0)();
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



/* WARNING: Removing unreachable block (ram,0x00101203) */
/* WARNING: Removing unreachable block (ram,0x0010120f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101244) */
/* WARNING: Removing unreachable block (ram,0x00101250) */

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
  bool bVar2;
  basic_ostream *pbVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  basic_istream local_248 [256];
  basic_ios<char,std::char_traits<char>> abStack_148 [272];
  char local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::basic_ifstream<char,std::char_traits<char>>::basic_ifstream((char *)local_248,0x102004);
                    /* try { // try from 001012f6 to 00101396 has its CatchHandler @ 001013be */
  cVar1 = std::basic_ios<char,std::char_traits<char>>::operator!(abStack_148);
  if (cVar1 == '\0') {
    while( true ) {
      bVar2 = std::basic_ios::operator_cast_to_bool((basic_ios *)abStack_148);
      if (!bVar2) break;
      std::operator>>(local_248,local_38);
      pbVar3 = std::operator<<((basic_ostream *)std::cout,local_38);
      std::basic_ostream<char,std::char_traits<char>>::operator<<
                ((basic_ostream<char,std::char_traits<char>> *)pbVar3,
                 (_func_basic_ostream_ptr_basic_ostream_ptr *)
                 PTR_endl<char,std_char_traits<char>>_00103fd0);
    }
    std::basic_ifstream<char,std::char_traits<char>>::close();
    uVar4 = 0;
  }
  else {
    pbVar3 = std::operator<<((basic_ostream *)std::cout,"Cannot open file!!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar3,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00103fd0);
    uVar4 = 1;
  }
  std::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream
            ((basic_ifstream<char,std::char_traits<char>> *)local_248);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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
/* std::basic_istream<char, std::char_traits<char> >&
   std::TEMPNAMEPLACEHOLDERVALUE(std::basic_istream<char, std::char_traits<char> >&, char*) */

basic_istream * std::operator>>(basic_istream *param_1,char *param_2)

{
  std::__istream_extract(param_1,param_2,0x7fffffffffffffff);
  return param_1;
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::basic_ifstream<char,std::char_traits<char>>::close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream
          (basic_ifstream<char,std::char_traits<char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ios<char,std::char_traits<char>>::operator!(basic_ios<char,std::char_traits<char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv@GLIBCXX_3.4 */
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

bool __thiscall std::basic_ios::operator_cast_to_bool(basic_ios *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv@GLIBCXX_3.4.21 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__istream_extract(basic_istream *param_1,char *param_2,long param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt17__istream_extractRSiPcl@GLIBCXX_3.4.29 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::basic_ifstream<char,std::char_traits<char>>::basic_ifstream
               (char *param_1,_Ios_Openmode param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode@GLIBCXX_3.4
                        */
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


