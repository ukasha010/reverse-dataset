
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
  (*(code *)PTR_00103f38)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isspace(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isspace_00103f40)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isxdigit(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isxdigit_00103f48)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isupper(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isupper_00103f50)();
  return iVar1;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00103f58)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isgraph(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isgraph_00103f60)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isblank(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isblank_00103f68)();
  return iVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103f70)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103f78)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int islower(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_islower_00103f80)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_00103f88)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iscntrl(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iscntrl_00103f90)();
  return iVar1;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103f98)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalpha(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isalpha_00103fa0)();
  return iVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fa8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isprint(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isprint_00103fb0)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_toupper_00103fb8)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ispunct(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ispunct_00103fc0)();
  return iVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x001012a3) */
/* WARNING: Removing unreachable block (ram,0x001012af) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001012e4) */
/* WARNING: Removing unreachable block (ram,0x001012f0) */

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
  int iVar1;
  basic_ostream<char,std::char_traits<char>> *pbVar2;
  basic_ostream *pbVar3;
  
  iVar1 = isalpha(0x61);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isalpha(2);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isblank(0x20);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isblank(2);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = iscntrl(9);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = iscntrl(0x20);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,0);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isgraph(0x36);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isgraph(9);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = islower(0x69);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = islower(0x49);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isprint(0x74);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isprint(9);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = ispunct(0x2c);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = ispunct(0x2b);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = ispunct(0x38);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isspace(0x20);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isspace(0x70);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isupper(0x49);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isupper(0x69);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = isxdigit(0x30);
  pbVar2 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar2,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = tolower(0x54);
  pbVar3 = std::operator<<((basic_ostream *)std::cout,(char)iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar3,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  iVar1 = toupper(0x74);
  pbVar3 = std::operator<<((basic_ostream *)std::cout,(char)iVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar3,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
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



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isspace(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* isspace@GLIBC_2.2.5 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isxdigit(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* isxdigit@GLIBC_2.2.5 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isupper(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* isupper@GLIBC_2.2.5 */
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

int isgraph(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* isgraph@GLIBC_2.2.5 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isblank(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* isblank@GLIBC_2.2.5 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int islower(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* islower@GLIBC_2.2.5 */
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

int iscntrl(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* iscntrl@GLIBC_2.2.5 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isalpha(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* isalpha@GLIBC_2.2.5 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isprint(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* isprint@GLIBC_2.2.5 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* toupper@GLIBC_2.2.5 */
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

int ispunct(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* ispunct@GLIBC_2.2.5 */
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


