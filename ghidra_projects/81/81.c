
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



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fb0)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fb8)();
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
  long in_FS_OFFSET;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 3;
  local_74 = 2;
  local_70 = 1;
  local_6c = 4;
  local_68 = 5;
  local_64 = 5;
  local_60 = 8;
  local_5c = 0xb;
  local_58 = 6;
  local_54 = 0xc;
  local_50 = 4;
  local_48 = DAT_00102078;
  local_40 = DAT_00102080;
  local_38 = DAT_00102088;
  local_30 = DAT_00102090;
  local_28 = DAT_00102098;
  local_20 = DAT_001020a0;
  std::operator<<((basic_ostream *)std::cout,"\nUnsorted Integer values : ");
  print<int>(&local_78,0xb);
  std::operator<<((basic_ostream *)std::cout,"Unsorted Double values : ");
  print<double>(&local_48,6);
  bubblesort<int>(&local_78,0xb);
  bubblesort<double>(&local_48,6);
  std::operator<<((basic_ostream *)std::cout,"\nSorted Integer values : ");
  print<int>(&local_78,0xb);
  std::operator<<((basic_ostream *)std::cout,"Sorted Double values : ");
  print<double>(&local_48,6);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* void print<int>(int*, int) */

void print<int>(int *param_1,int param_2)

{
  basic_ostream *pbVar1;
  int local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    pbVar1 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,param_1[local_c]);
    std::operator<<(pbVar1," ");
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  return;
}



/* void print<double>(double*, int) */

void print<double>(double *param_1,int param_2)

{
  basic_ostream *pbVar1;
  int local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    pbVar1 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,param_1[local_c]);
    std::operator<<(pbVar1," ");
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  return;
}



/* void bubblesort<int>(int*, int) */

void bubblesort<int>(int *param_1,int param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  
  for (local_14 = 1; local_14 < param_2; local_14 = local_14 + 1) {
    for (local_10 = param_2 + -1; local_14 <= local_10; local_10 = local_10 + -1) {
      if (param_1[local_10] < param_1[(long)local_10 + -1]) {
        iVar1 = param_1[(long)local_10 + -1];
        param_1[(long)local_10 + -1] = param_1[local_10];
        param_1[local_10] = iVar1;
      }
    }
  }
  return;
}



/* void bubblesort<double>(double*, int) */

void bubblesort<double>(double *param_1,int param_2)

{
  double dVar1;
  int local_18;
  int local_14;
  
  for (local_18 = 1; local_18 < param_2; local_18 = local_18 + 1) {
    for (local_14 = param_2 + -1; local_18 <= local_14; local_14 = local_14 + -1) {
      if (param_1[local_14] < param_1[(long)local_14 + -1]) {
        dVar1 = param_1[(long)local_14 + -1];
        param_1[(long)local_14 + -1] = param_1[local_14];
        param_1[local_14] = dVar1;
      }
    }
  }
  return;
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

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4 */
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


