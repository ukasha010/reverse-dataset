
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
  (*(code *)PTR_00103f28)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ctype * std::use_facet<std::ctype<char>>(locale *param_1)

{
  ctype *pcVar1;
  
  pcVar1 = (ctype *)(*(code *)PTR_use_facet<std_ctype<char>>_00103f30)();
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00103f38)();
  return sVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_invalid_argument(char *param_1)

{
  (*(code *)PTR___throw_invalid_argument_00103f40)();
  return;
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
          (basic_string<char,std::char_traits<char>,std::allocator<char>> *this)

{
  (*(code *)PTR__basic_string_00103f48)();
  return;
}



void __thiscall std::locale::locale(locale *this,locale *param_1)

{
  (*(code *)PTR_locale_00103f50)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
  (*(code *)PTR___throw_logic_error_00103f58)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00103f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,basic_string *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103f68)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103f70)();
  return pbVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103f78)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103f80)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_00103f88)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (void)

{
  (*(code *)PTR_basic_string_00103f90)();
  return;
}



void __thiscall std::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_00103f98)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fa0)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fa8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::assign
               (ulong param_1,char param_2)

{
  (*(code *)PTR_assign_00103fb0)();
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



/* WARNING: Removing unreachable block (ram,0x001012e3) */
/* WARNING: Removing unreachable block (ram,0x001012ef) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101324) */
/* WARNING: Removing unreachable block (ram,0x00101330) */

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
  basic_ostream *pbVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  bitset<16ul> local_48 [8];
  undefined8 local_40;
  reference local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  pbVar1 = std::operator<<((basic_ostream *)std::cout,"Bitset 1 : ");
  pbVar1 = std::operator<<(pbVar1,(bitset *)&local_58);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  local_50 = 0x11;
  pbVar1 = std::operator<<((basic_ostream *)std::cout,"Bistset 2 : ");
  pbVar1 = std::operator<<(pbVar1,(bitset *)&local_50);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  std::bitset<16ul>::bitset<char>(local_48,"1010",0xffffffff,'0','1');
  pbVar1 = std::operator<<((basic_ostream *)std::cout,"Bitset 3 : ");
  pbVar1 = std::operator<<(pbVar1,(bitset *)local_48);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  local_40 = 0;
  std::bitset<16ul>::operator[]((ulong)local_38);
  std::bitset<16ul>::reference::operator=(local_38,true);
  std::bitset<16ul>::reference::~reference(local_38);
  std::bitset<16ul>::operator[]((ulong)local_38);
  std::bitset<16ul>::reference::operator=(local_38,true);
  std::bitset<16ul>::reference::~reference(local_38);
  pbVar1 = std::operator<<((basic_ostream *)std::cout,"Bitset 4 : ");
  pbVar1 = std::operator<<(pbVar1,(bitset *)&local_40);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  pbVar1 = std::operator<<((basic_ostream *)std::cout,"Binary equivalent of ");
  pbVar1 = (basic_ostream *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar1,0x1e);
  pbVar1 = std::operator<<(pbVar1," : ");
  std::bitset<16ul>::bitset((bitset<16ul> *)local_38,0x1e);
  pbVar1 = std::operator<<(pbVar1,(bitset *)local_38);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
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



/* std::char_traits<char>::assign(char&, char const&) */

void std::char_traits<char>::assign(char *param_1,char *param_2)

{
  *param_1 = *param_2;
  return;
}



/* std::char_traits<char>::eq(char const&, char const&) */

bool std::char_traits<char>::eq(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* WARNING: Removing unreachable block (ram,0x001016b2) */
/* std::char_traits<char>::length(char const*) */

void std::char_traits<char>::length(char *param_1)

{
  strlen(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ios_base::getloc() const */

locale * std::ios_base::getloc(void)

{
  long in_RSI;
  locale *in_RDI;
  
  std::locale::locale(in_RDI,(locale *)(in_RSI + 0xd0));
  return in_RDI;
}



/* std::ctype<char>::widen(char) const */

ulong __thiscall std::ctype<char>::widen(ctype<char> *this,char param_1)

{
  ulong uVar1;
  
  if (this[0x38] == (ctype<char>)0x0) {
    std::ctype<char>::_M_widen_init();
    uVar1 = (**(code **)(*(long *)this + 0x30))(this,(int)param_1);
  }
  else {
    uVar1 = (ulong)(byte)this[(long)(int)(uint)(byte)param_1 + 0x39];
  }
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned long const& std::min<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * std::min<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Base_bitset<1ul>::_Base_bitset() */

void std::_Base_bitset<1ul>::_Base_bitset(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  return;
}



/* std::_Base_bitset<1ul>::_Base_bitset(unsigned long long) */

void __thiscall std::_Base_bitset<1ul>::_Base_bitset(_Base_bitset<1ul> *this,ulonglong param_1)

{
  *(ulonglong *)this = param_1;
  return;
}



/* std::_Base_bitset<1ul>::_S_whichbit(unsigned long) */

uint std::_Base_bitset<1ul>::_S_whichbit(ulong param_1)

{
  return (uint)param_1 & 0x3f;
}



/* std::_Base_bitset<1ul>::_S_maskbit(unsigned long) */

long std::_Base_bitset<1ul>::_S_maskbit(ulong param_1)

{
  byte bVar1;
  
  bVar1 = _S_whichbit(param_1);
  return 1L << (bVar1 & 0x3f);
}



/* std::_Base_bitset<1ul>::_M_getword(unsigned long) */

ulong std::_Base_bitset<1ul>::_M_getword(ulong param_1)

{
  return param_1;
}



/* std::_Base_bitset<1ul>::_M_getword(unsigned long) const */

undefined8 std::_Base_bitset<1ul>::_M_getword(ulong param_1)

{
  return *(undefined8 *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Base_bitset<1ul>::_M_do_reset() */

void std::_Base_bitset<1ul>::_M_do_reset(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  return;
}



/* std::bitset<16ul>::bitset(unsigned long long) */

void __thiscall std::bitset<16ul>::bitset(bitset<16ul> *this,ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = _Sanitize_val<16ul,true>::_S_do_sanitize_val(param_1);
  _Base_bitset<1ul>::_Base_bitset((_Base_bitset<1ul> *)this,uVar1);
  return;
}



/* std::_Sanitize_val<16ul, true>::_S_do_sanitize_val(unsigned long long) */

ulong std::_Sanitize_val<16ul,true>::_S_do_sanitize_val(ulonglong param_1)

{
  return param_1 & 0xffff;
}



/* __gnu_cxx::char_traits<char>::eq(char const&, char const&) */

bool __gnu_cxx::char_traits<char>::eq(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* __gnu_cxx::char_traits<char>::length(char const*) */

long __gnu_cxx::char_traits<char>::length(char *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  char local_19;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  while( true ) {
    local_19 = '\0';
    cVar1 = eq(param_1 + local_18,&local_19);
    if (cVar1 == '\x01') break;
    local_18 = local_18 + 1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::basic_ostream<char, std::char_traits<char> >&
   std::TEMPNAMEPLACEHOLDERVALUE(std::basic_ostream<char, std::char_traits<char> >&,
   std::bitset<16ul> const&) */

basic_ostream * std::operator<<(basic_ostream *param_1,bitset *param_2)

{
  char cVar1;
  char cVar2;
  basic_ostream *pbVar3;
  long in_FS_OFFSET;
  locale local_58 [8];
  ctype *local_50;
  basic_string local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
  ios_base::getloc();
                    /* try { // try from 00101993 to 00101997 has its CatchHandler @ 00101a19 */
  local_50 = std::use_facet<std::ctype<char>>(local_58);
  std::locale::~locale(local_58);
                    /* try { // try from 001019b4 to 001019f4 has its CatchHandler @ 00101a2e */
  cVar1 = ctype<char>::widen((ctype<char> *)local_50,'1');
  cVar2 = ctype<char>::widen((ctype<char> *)local_50,'0');
  bitset<16ul>::_M_copy_to_string<char,std::char_traits<char>,std::allocator<char>>
            ((bitset<16ul> *)param_2,local_48,cVar2,cVar1);
  pbVar3 = std::operator<<(param_1,local_48);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_48);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar3;
}



/* std::bitset<16ul>::bitset<char>(char const*, std::__cxx11::basic_string<char,
   std::char_traits<char>, std::allocator<char> >::size_type, char, char) */

void __thiscall
std::bitset<16ul>::bitset<char>
          (bitset<16ul> *this,char *param_1,size_type param_2,char param_3,char param_4)

{
  undefined4 in_register_00000014;
  ulong local_20;
  
  local_20 = CONCAT44(in_register_00000014,param_2);
  _Base_bitset<1ul>::_Base_bitset();
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("bitset::bitset(const _CharT*, ...)");
  }
  if (local_20 == 0xffffffffffffffff) {
    local_20 = char_traits<char>::length(param_1);
  }
  _M_copy_from_ptr<char,std::char_traits<char>>(this,param_1,local_20,0,local_20,param_3,param_4);
  return;
}



/* std::bitset<16ul>::operator[](unsigned long) */

ulong std::bitset<16ul>::operator[](ulong param_1)

{
  ulong in_RDX;
  bitset *in_RSI;
  
  reference::reference((reference *)param_1,in_RSI,in_RDX);
  return param_1;
}



/* std::bitset<16ul>::reference::~reference() */

void __thiscall std::bitset<16ul>::reference::~reference(reference *this)

{
  return;
}



/* std::bitset<16ul>::reference::TEMPNAMEPLACEHOLDERVALUE(bool) */

reference * __thiscall std::bitset<16ul>::reference::operator=(reference *this,bool param_1)

{
  ulong uVar1;
  
  if (param_1) {
    uVar1 = _Base_bitset<1ul>::_S_maskbit(*(ulong *)(this + 8));
    **(ulong **)this = uVar1 | **(ulong **)this;
  }
  else {
    uVar1 = _Base_bitset<1ul>::_S_maskbit(*(ulong *)(this + 8));
    **(ulong **)this = **(ulong **)this & ~uVar1;
  }
  return this;
}



/* void std::bitset<16ul>::_M_copy_to_string<char, std::char_traits<char>, std::allocator<char>
   >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char, char)
   const */

void __thiscall
std::bitset<16ul>::_M_copy_to_string<char,std::char_traits<char>,std::allocator<char>>
          (bitset<16ul> *this,basic_string *param_1,char param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  char local_30 [4];
  char local_2c;
  basic_string *local_28;
  bitset<16ul> *local_20;
  long local_10;
  
  local_30[0] = param_3;
  local_2c = param_2;
  local_28 = param_1;
  local_20 = this;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::assign
            ((ulong)param_1,'\x10');
  for (local_10 = 0x10; local_10 != 0; local_10 = local_10 + -1) {
    cVar1 = _Unchecked_test((ulong)local_20);
    if (cVar1 != '\0') {
      pcVar2 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::operator[]((ulong)local_28);
      char_traits<char>::assign(pcVar2,local_30);
    }
  }
  return;
}



/* void std::bitset<16ul>::_M_copy_from_ptr<char, std::char_traits<char> >(char const*, unsigned
   long, unsigned long, unsigned long, char, char) */

void __thiscall
std::bitset<16ul>::_M_copy_from_ptr<char,std::char_traits<char>>
          (bitset<16ul> *this,char *param_1,ulong param_2,ulong param_3,ulong param_4,char param_5,
          char param_6)

{
  char cVar1;
  ulong *puVar2;
  long in_FS_OFFSET;
  char local_68 [4];
  char local_64 [4];
  ulong local_60;
  ulong local_58;
  ulong local_50;
  char *local_48;
  bitset<16ul> *local_40;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_68[0] = param_6;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_64[0] = param_5;
  local_60 = param_4;
  local_58 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = this;
  reset();
  local_30 = local_50 - local_58;
  puVar2 = min<unsigned_long>(&local_60,&local_30);
  local_28 = 0x10;
  puVar2 = min<unsigned_long>(&local_28,puVar2);
  local_20 = *puVar2;
  local_18 = local_20;
  for (; local_20 != 0; local_20 = local_20 - 1) {
    local_28 = CONCAT71(local_28._1_7_,local_48[(local_18 + local_58) - local_20]);
    cVar1 = char_traits<char>::eq((char *)&local_28,local_64);
    if (cVar1 == '\0') {
      cVar1 = char_traits<char>::eq((char *)&local_28,local_68);
      if (cVar1 == '\0') {
        std::__throw_invalid_argument("bitset::_M_copy_from_ptr");
      }
      else {
        _Unchecked_set(local_40,local_20 - 1);
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::bitset<16ul>::reference::reference(std::bitset<16ul>&, unsigned long) */

void __thiscall
std::bitset<16ul>::reference::reference(reference *this,bitset *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = _Base_bitset<1ul>::_M_getword((ulong)param_1);
  *(undefined8 *)this = uVar1;
  uVar1 = _Base_bitset<1ul>::_S_whichbit(param_2);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::bitset<16ul>::_Unchecked_test(unsigned long) const */

undefined8 std::bitset<16ul>::_Unchecked_test(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong in_RSI;
  
  uVar1 = _Base_bitset<1ul>::_M_getword(param_1);
  uVar2 = _Base_bitset<1ul>::_S_maskbit(in_RSI);
  return CONCAT71((int7)((uVar2 & uVar1) >> 8),(uVar2 & uVar1) != 0);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::bitset<16ul>::reset() */

undefined8 std::bitset<16ul>::reset(void)

{
  undefined8 in_RDI;
  
  _Base_bitset<1ul>::_M_do_reset();
  return in_RDI;
}



/* std::bitset<16ul>::_Unchecked_set(unsigned long) */

bitset<16ul> * __thiscall std::bitset<16ul>::_Unchecked_set(bitset<16ul> *this,ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = _Base_bitset<1ul>::_S_maskbit(param_1);
  puVar2 = (ulong *)_Base_bitset<1ul>::_M_getword((ulong)this);
  *puVar2 = *puVar2 | uVar1;
  return this;
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ctype * std::use_facet<std::ctype<char>>(locale *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt9use_facetISt5ctypeIcEERKT_RKSt6locale@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* strlen@GLIBC_2.2.5 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_invalid_argument(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt24__throw_invalid_argumentPKc@GLIBCXX_3.4 */
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

void __thiscall std::locale::locale(locale *this,locale *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt6localeC1ERKS_@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt19__throw_logic_errorPKc@GLIBCXX_3.4 */
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

basic_ostream * std::operator<<(basic_ostream *param_1,basic_string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@GLIBCXX_3.4.21
                        */
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

void std::ctype<char>::_M_widen_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt5ctypeIcE13_M_widen_initEv@GLIBCXX_3.4.11 */
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

void __thiscall std::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt6localeD1Ev@GLIBCXX_3.4 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::assign
               (ulong param_1,char param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEmc@GLIBCXX_3.4.21
                        */
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


