
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00105fe8;
  if (PTR___gmon_start___00105fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00105fe8)();
  }
  return (int)puVar1;
}



void FUN_00101020(void)

{
  (*(code *)PTR_00105f30)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fc8)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00105f38)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00105f40)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00105f48)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00105f50)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00105f58)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00105f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00105f68)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00105f70)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00105f78)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00105f80)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00105f88)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105f90)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00105f98)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00105fa0)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00105fa8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00105fb0)();
  return pvVar1;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00105fb8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00105fc0)();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00105fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x001012c3) */
/* WARNING: Removing unreachable block (ram,0x001012cf) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101304) */
/* WARNING: Removing unreachable block (ram,0x00101310) */

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00105fc8 != (undefined *)0x0) {
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
  __normal_iterator _Var2;
  __normal_iterator _Var3;
  __normal_iterator _Var4;
  ulong uVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  char *pcVar6;
  basic_ostream *pbVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  allocator local_c1;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  vector<char,std::allocator<char>> local_a8 [32];
  vector<char,std::allocator<char>> local_88 [32];
  allocator<char> local_68 [32];
  allocator local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (allocator)0x61;
  local_47 = 0x62;
  local_46 = 0x62;
  local_45 = 0x62;
  local_44 = 100;
  local_43 = 99;
  local_42 = 99;
  local_41 = 0x65;
  std::allocator<char>::allocator();
                    /* try { // try from 001013ec to 001013f0 has its CatchHandler @ 0010182a */
  std::vector<char,std::allocator<char>>::vector((initializer_list)local_a8,&local_48);
  std::allocator<char>::~allocator(local_68);
                    /* try { // try from 00101411 to 001015a9 has its CatchHandler @ 00101896 */
  std::operator<<((basic_ostream *)std::cout,"Vector c : ");
  local_c0 = 0;
  while( true ) {
    uVar8 = (ulong)local_c0;
    uVar5 = std::vector<char,std::allocator<char>>::size();
    if (uVar5 <= uVar8) break;
    pcVar6 = (char *)std::vector<char,std::allocator<char>>::operator[](local_a8,(long)local_c0);
    pbVar7 = std::operator<<((basic_ostream *)std::cout,*pcVar6);
    std::operator<<(pbVar7," ");
    local_c0 = local_c0 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  local_b8 = 0;
  local_b0 = 0;
  _Var2 = std::vector<char,std::allocator<char>>::end();
  _Var3 = std::vector<char,std::allocator<char>>::begin();
  _Var2 = std::unique<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (_Var3,_Var2);
  local_b0 = CONCAT44(extraout_var,_Var2);
  std::operator<<((basic_ostream *)std::cout,"Updated vector c : ");
  local_b8 = std::vector<char,std::allocator<char>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
    if (!bVar1) break;
    pcVar6 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_b8);
    pbVar7 = std::operator<<((basic_ostream *)std::cout,*pcVar6);
    std::operator<<(pbVar7," ");
    __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
              ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_b8,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  local_48 = (allocator)0x61;
  local_47 = 0x62;
  local_46 = 0x62;
  local_45 = 0x62;
  local_44 = 100;
  local_43 = 99;
  local_42 = 99;
  local_41 = 0x65;
  std::allocator<char>::allocator();
                    /* try { // try from 00101603 to 00101607 has its CatchHandler @ 00101848 */
  std::vector<char,std::allocator<char>>::vector((initializer_list)local_88,&local_48);
  std::allocator<char>::~allocator(local_68);
  std::allocator<char>::allocator();
                    /* try { // try from 00101636 to 0010163a has its CatchHandler @ 0010185d */
  std::vector<char,std::allocator<char>>::vector
            ((vector<char,std::allocator<char>> *)local_68,8,&local_c1);
  std::allocator<char>::~allocator((allocator<char> *)&local_c1);
                    /* try { // try from 0010165e to 001017e3 has its CatchHandler @ 00101875 */
  std::operator<<((basic_ostream *)std::cout,"\nVector c2 : ");
  local_bc = 0;
  while( true ) {
    uVar8 = (ulong)local_bc;
    uVar5 = std::vector<char,std::allocator<char>>::size();
    if (uVar5 <= uVar8) break;
    pcVar6 = (char *)std::vector<char,std::allocator<char>>::operator[](local_88,(long)local_bc);
    pbVar7 = std::operator<<((basic_ostream *)std::cout,*pcVar6);
    std::operator<<(pbVar7," ");
    local_bc = local_bc + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  _Var2 = std::vector<char,std::allocator<char>>::begin();
  _Var3 = std::vector<char,std::allocator<char>>::end();
  _Var4 = std::vector<char,std::allocator<char>>::begin();
  _Var2 = std::
          unique_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (_Var4,_Var3,_Var2);
  local_b0 = CONCAT44(extraout_var_00,_Var2);
  std::operator<<((basic_ostream *)std::cout,"Updated vector c3 : ");
  local_b8 = std::vector<char,std::allocator<char>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
    if (!bVar1) break;
    pcVar6 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_b8);
    pbVar7 = std::operator<<((basic_ostream *)std::cout,*pcVar6);
    std::operator<<(pbVar7," ");
    __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
              ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_b8,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  std::vector<char,std::allocator<char>>::~vector((vector<char,std::allocator<char>> *)local_68);
  std::vector<char,std::allocator<char>>::~vector(local_88);
  std::vector<char,std::allocator<char>>::~vector(local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
    __cxa_atexit(PTR__Init_00105ff8,&std::__ioinit,&__dso_handle);
  }
  return;
}



void _GLOBAL__sub_I_main(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__ops::__iter_equal_to_iter() */

void __gnu_cxx::__ops::__iter_equal_to_iter(void)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__size_to_integer(unsigned long) */

ulong std::__size_to_integer(ulong param_1)

{
  return param_1;
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



/* std::vector<char, std::allocator<char> >::vector(std::initializer_list<char>,
   std::allocator<char> const&) */

void std::vector<char,std::allocator<char>>::vector(initializer_list param_1,allocator *param_2)

{
  long lVar1;
  forward_iterator_tag fVar2;
  char *pcVar3;
  allocator *in_RCX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Vector_base<char,std::allocator<char>>::_Vector_base
            ((_Vector_base<char,std::allocator<char>> *)CONCAT44(in_register_0000003c,param_1),
             in_RCX);
  fVar2 = initializer_list<char>::end();
  pcVar3 = (char *)initializer_list<char>::begin();
                    /* try { // try from 00101a13 to 00101a17 has its CatchHandler @ 00101a1a */
  _M_range_initialize<char_const*>
            ((char *)(_Vector_base<char,std::allocator<char>> *)
                     CONCAT44(in_register_0000003c,param_1),pcVar3,fVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::vector<char, std::allocator<char> >::~vector() */

void __thiscall
std::vector<char,std::allocator<char>>::~vector(vector<char,std::allocator<char>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  _Destroy<char*,char>(*(char **)this,*(char **)(this + 8),paVar1);
  _Vector_base<char,std::allocator<char>>::~_Vector_base
            ((_Vector_base<char,std::allocator<char>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::size() const */

long std::vector<char,std::allocator<char>>::size(void)

{
  long *in_RDI;
  
  return in_RDI[1] - *in_RDI;
}



/* std::vector<char, std::allocator<char> >::operator[](unsigned long) */

long __thiscall
std::vector<char,std::allocator<char>>::operator[]
          (vector<char,std::allocator<char>> *this,ulong param_1)

{
  return param_1 + *(long *)this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::begin() */

undefined8 std::vector<char,std::allocator<char>>::begin(void)

{
  char **in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18,in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::end() */

undefined8 std::vector<char,std::allocator<char>>::end(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18,
             (char **)(in_RDI + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::unique<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >) */

__normal_iterator
std::unique<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
          (__normal_iterator param_1,__normal_iterator param_2)

{
  __normal_iterator _Var1;
  
  __gnu_cxx::__ops::__iter_equal_to_iter();
  _Var1 = __unique<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
                    (param_1,param_2,param_2);
  return _Var1;
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&) */

bool __gnu_cxx::operator!=(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  return lVar1 != *plVar2;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,int param_1)

{
  long in_FS_OFFSET;
  char *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(char **)this;
  *(char **)this = local_20 + 1;
  __normal_iterator((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this)

{
  return *(undefined8 *)this;
}



/* std::vector<char, std::allocator<char> >::vector(unsigned long, std::allocator<char> const&) */

void __thiscall
std::vector<char,std::allocator<char>>::vector
          (vector<char,std::allocator<char>> *this,ulong param_1,allocator *param_2)

{
  ulong uVar1;
  
  uVar1 = _S_check_init_len(param_1,param_2);
  _Vector_base<char,std::allocator<char>>::_Vector_base
            ((_Vector_base<char,std::allocator<char>> *)this,uVar1,param_2);
                    /* try { // try from 00101cb7 to 00101cbb has its CatchHandler @ 00101cbe */
  _M_default_initialize(this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::unique_copy<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >) */

__normal_iterator
std::
unique_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  bool bVar1;
  __normal_iterator _Var2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  input_iterator_tag in_R8D;
  forward_iterator_tag in_R9D;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
  if (bVar1) {
    _Var2 = (__normal_iterator)local_30;
  }
  else {
    __iterator_category<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
              ((__normal_iterator *)&local_30);
    __iterator_category<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
              ((__normal_iterator *)local_20);
    __gnu_cxx::__ops::__iter_equal_to_iter();
    _Var2 = __unique_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
                      ((__normal_iterator)local_20[0],(__normal_iterator)local_28,
                       (__normal_iterator)local_30,(__normal_iterator)local_28,in_R8D,in_R9D);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var2;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  std::allocator<char>::~allocator((allocator<char> *)this);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_base(std::allocator<char> const&) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_base
          (_Vector_base<char,std::allocator<char>> *this,allocator *param_1)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_1);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::~_Vector_base() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::~_Vector_base
          (_Vector_base<char,std::allocator<char>> *this)

{
  _M_deallocate(this,*(char **)this,*(long *)(this + 0x10) - *(long *)this);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::initializer_list<char>::begin() const */

undefined8 std::initializer_list<char>::begin(void)

{
  undefined8 *in_RDI;
  
  return *in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::initializer_list<char>::end() const */

long std::initializer_list<char>::end(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = begin();
  lVar2 = size();
  return lVar2 + lVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<char const*>::difference_type std::distance<char const*>(char const*, char
   const*) */

difference_type std::distance<char_const*>(char *param_1,char *param_2)

{
  difference_type dVar1;
  char *local_10;
  
  local_10 = param_1;
  __iterator_category<char_const*>(&local_10);
  dVar1 = __distance<char_const*>(local_10,param_2,(random_access_iterator_tag)param_2);
  return dVar1;
}



/* void std::vector<char, std::allocator<char> >::_M_range_initialize<char const*>(char const*, char
   const*, std::forward_iterator_tag) */

void std::vector<char,std::allocator<char>>::_M_range_initialize<char_const*>
               (char *param_1,char *param_2,forward_iterator_tag param_3)

{
  difference_type dVar1;
  undefined4 extraout_var;
  allocator *paVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 in_register_00000014;
  
  dVar1 = distance<char_const*>(param_2,(char *)CONCAT44(in_register_00000014,param_3));
  paVar2 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  uVar3 = _S_check_init_len(CONCAT44(extraout_var,dVar1),paVar2);
  uVar4 = _Vector_base<char,std::allocator<char>>::_M_allocate
                    ((_Vector_base<char,std::allocator<char>> *)param_1,uVar3);
  *(undefined8 *)param_1 = uVar4;
  *(ulong *)(param_1 + 0x10) = *(long *)param_1 + CONCAT44(extraout_var,dVar1);
  paVar2 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  pcVar5 = __uninitialized_copy_a<char_const*,char*,char>
                     (param_2,(char *)CONCAT44(in_register_00000014,param_3),*(char **)param_1,
                      paVar2);
  *(char **)(param_1 + 8) = pcVar5;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Vector_base<char, std::allocator<char> >::_M_get_Tp_allocator() */

undefined8 std::_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<char*, char>(char*, char*, std::allocator<char>&) */

void std::_Destroy<char*,char>(char *param_1,char *param_2,allocator *param_3)

{
  _Destroy<char*>(param_1,param_2);
  return;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::__normal_iterator(char* const&) */

void __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,char **param_1)

{
  *(char **)this = *param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::__unique<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__ops::_Iter_equal_to_iter>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__ops::_Iter_equal_to_iter) */

__normal_iterator
std::
__unique<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_equal_to_iter param_3)

{
  type tVar1;
  bool bVar2;
  __normal_iterator _Var3;
  undefined4 extraout_var;
  char *pcVar4;
  type *ptVar5;
  __normal_iterator<char*,std::vector<char,std::allocator<char>>> *this;
  __normal_iterator *p_Var6;
  undefined8 *puVar7;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Iter_equal_to_iter local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Var3 = __adjacent_find<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
                    (param_1,param_2,param_2);
  local_30 = CONCAT44(extraout_var,_Var3);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
  if (bVar2) {
    _Var3 = (__normal_iterator)local_38;
  }
  else {
    local_28 = local_30;
    __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
              ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_30);
    while( true ) {
      p_Var6 = (__normal_iterator *)
               __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
               operator++((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          &local_30);
      bVar2 = __gnu_cxx::operator!=(p_Var6,(__normal_iterator *)&local_38);
      if (!bVar2) break;
      bVar2 = __gnu_cxx::__ops::_Iter_equal_to_iter::operator()
                        (&local_39,(__normal_iterator)local_28,(__normal_iterator)local_30);
      if (!bVar2) {
        pcVar4 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                         ::operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                                      *)&local_30);
        ptVar5 = move<char&>(pcVar4);
        tVar1 = *ptVar5;
        this = (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
               __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
               operator++((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          &local_28);
        ptVar5 = (type *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                         ::operator*(this);
        *ptVar5 = tVar1;
      }
    }
    puVar7 = (undefined8 *)
             __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
                       ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_28
                       );
    _Var3 = (__normal_iterator)*puVar7;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::vector<char, std::allocator<char> >::_S_check_init_len(unsigned long, std::allocator<char>
   const&) */

ulong std::vector<char,std::allocator<char>>::_S_check_init_len(ulong param_1,allocator *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator(&local_21);
  uVar1 = _S_max_size(&local_21);
  std::allocator<char>::~allocator((allocator<char> *)&local_21);
  if (uVar1 < param_1) {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_base(unsigned long, std::allocator<char>
   const&) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_base
          (_Vector_base<char,std::allocator<char>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00102176 to 0010217a has its CatchHandler @ 0010217d */
  _M_create_storage(this,param_1);
  return;
}



/* std::vector<char, std::allocator<char> >::_M_default_initialize(unsigned long) */

void __thiscall
std::vector<char,std::allocator<char>>::_M_default_initialize
          (vector<char,std::allocator<char>> *this,ulong param_1)

{
  allocator *paVar1;
  char *pcVar2;
  
  paVar1 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  pcVar2 = __uninitialized_default_n_a<char*,unsigned_long,char>(*(char **)this,param_1,paVar1);
  *(char **)(this + 8) = pcVar2;
  return;
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&) */

bool __gnu_cxx::operator==(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  return lVar1 == *plVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   > >::iterator_category std::__iterator_category<__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > > const&) */

iterator_category
std::__iterator_category<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
          (__normal_iterator *param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::__unique_copy<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__ops::_Iter_equal_to_iter>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__ops::_Iter_equal_to_iter, std::input_iterator_tag,
   std::forward_iterator_tag) */

__normal_iterator
std::
__unique_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          _Iter_equal_to_iter param_4,input_iterator_tag param_5,forward_iterator_tag param_6)

{
  undefined uVar1;
  bool bVar2;
  undefined *puVar3;
  __normal_iterator<char*,std::vector<char,std::allocator<char>>> *this;
  __normal_iterator *p_Var4;
  undefined8 *puVar5;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_equal_to_iter local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  puVar3 = (undefined *)
           __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                     ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)local_20);
  uVar1 = *puVar3;
  puVar3 = (undefined *)
           __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                     ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_30);
  *puVar3 = uVar1;
  while( true ) {
    p_Var4 = (__normal_iterator *)
             __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
                       ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)local_20)
    ;
    bVar2 = __gnu_cxx::operator!=(p_Var4,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    bVar2 = __gnu_cxx::__ops::_Iter_equal_to_iter::operator()
                      (&local_31,(__normal_iterator)local_30,(__normal_iterator)local_20[0]);
    if (!bVar2) {
      puVar3 = (undefined *)
               __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          local_20);
      uVar1 = *puVar3;
      this = (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
             __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
                       ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_30
                       );
      puVar3 = (undefined *)
               __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                         (this);
      *puVar3 = uVar1;
    }
  }
  puVar5 = (undefined8 *)
           __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
                     ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_30);
  return (__normal_iterator)*puVar5;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl::_Vector_impl(std::allocator<char>
   const&) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  std::allocator<char>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_M_deallocate(char*, unsigned long) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_M_deallocate
          (_Vector_base<char,std::allocator<char>> *this,char *param_1,ulong param_2)

{
  if (param_1 != (char *)0x0) {
    allocator_traits<std::allocator<char>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::initializer_list<char>::size() const */

undefined8 std::initializer_list<char>::size(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 8);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<char const*>::iterator_category std::__iterator_category<char const*>(char
   const* const&) */

iterator_category std::__iterator_category<char_const*>(char **param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<char const*>::difference_type std::__distance<char const*>(char const*, char
   const*, std::random_access_iterator_tag) */

difference_type
std::__distance<char_const*>(char *param_1,char *param_2,random_access_iterator_tag param_3)

{
  return (int)param_2 - (int)param_1;
}



/* std::_Vector_base<char, std::allocator<char> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<char,std::allocator<char>>::_M_allocate
          (_Vector_base<char,std::allocator<char>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<char>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_copy_a<char const*, char*, char>(char const*, char const*, char*,
   std::allocator<char>&) */

char * std::__uninitialized_copy_a<char_const*,char*,char>
                 (char *param_1,char *param_2,char *param_3,allocator *param_4)

{
  char *pcVar1;
  
  pcVar1 = uninitialized_copy<char_const*,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<char*>(char*, char*) */

void std::_Destroy<char*>(char *param_1,char *param_2)

{
  _Destroy_aux<true>::__destroy<char*>(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::__adjacent_find<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, __gnu_cxx::__ops::_Iter_equal_to_iter>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__ops::_Iter_equal_to_iter) */

__normal_iterator
std::
__adjacent_find<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_equal_to_iter param_3)

{
  bool bVar1;
  __normal_iterator _Var2;
  __normal_iterator *p_Var3;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Iter_equal_to_iter local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_28);
  if (bVar1) {
    _Var2 = (__normal_iterator)local_28;
  }
  else {
    local_18 = local_20;
    do {
      local_20 = local_18;
      p_Var3 = (__normal_iterator *)
               __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
               operator++((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          &local_18);
      bVar1 = __gnu_cxx::operator!=(p_Var3,(__normal_iterator *)&local_28);
      if (!bVar1) {
        _Var2 = (__normal_iterator)local_28;
        goto LAB_001024c3;
      }
      bVar1 = __gnu_cxx::__ops::_Iter_equal_to_iter::operator()
                        (&local_29,(__normal_iterator)local_20,(__normal_iterator)local_18);
    } while (!bVar1);
    _Var2 = (__normal_iterator)local_20;
  }
LAB_001024c3:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<char*,std::vector<char,std::allocator<char>>> * __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this)

{
  *(long *)this = *(long *)this + 1;
  return this;
}



/* bool 
   __gnu_cxx::__ops::_Iter_equal_to_iter::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) const */

bool __thiscall
__gnu_cxx::__ops::_Iter_equal_to_iter::operator()
          (_Iter_equal_to_iter *this,__normal_iterator param_1,__normal_iterator param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined8 local_30;
  undefined8 local_28;
  _Iter_equal_to_iter *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  local_30 = CONCAT44(in_register_00000014,param_2);
  local_20 = this;
  pcVar2 = (char *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                             ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                              &local_28);
  cVar1 = *pcVar2;
  pcVar2 = (char *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                             ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                              &local_30);
  return cVar1 == *pcVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<char&>::type&& std::move<char&>(char&) */

type * std::move<char&>(char *param_1)

{
  return (type *)param_1;
}



/* std::vector<char, std::allocator<char> >::_S_max_size(std::allocator<char> const&) */

ulong std::vector<char,std::allocator<char>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x7fffffffffffffff;
  local_18 = allocator_traits<std::allocator<char>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}



/* std::_Vector_base<char, std::allocator<char> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_M_create_storage
          (_Vector_base<char,std::allocator<char>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = *(long *)this + param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_default_n_a<char*, unsigned long, char>(char*, unsigned long,
   std::allocator<char>&) */

char * std::__uninitialized_default_n_a<char*,unsigned_long,char>
                 (char *param_1,ulong param_2,allocator *param_3)

{
  char *pcVar1;
  
  pcVar1 = __uninitialized_default_n<char*,unsigned_long>(param_1,param_2);
  return pcVar1;
}



/* std::allocator_traits<std::allocator<char> >::deallocate(std::allocator<char>&, char*, unsigned
   long) */

void std::allocator_traits<std::allocator<char>>::deallocate
               (allocator *param_1,char *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<char>::deallocate((new_allocator<char> *)param_1,param_2,param_3);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* std::allocator_traits<std::allocator<char> >::allocate(std::allocator<char>&, unsigned long) */

void std::allocator_traits<std::allocator<char>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<char>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::uninitialized_copy<char const*, char*>(char const*, char const*, char*) */

char * std::uninitialized_copy<char_const*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __uninitialized_copy<true>::__uninit_copy<char_const*,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* void std::_Destroy_aux<true>::__destroy<char*>(char*, char*) */

void std::_Destroy_aux<true>::__destroy<char*>(char *param_1,char *param_2)

{
  return;
}



/* std::allocator_traits<std::allocator<char> >::max_size(std::allocator<char> const&) */

void std::allocator_traits<std::allocator<char>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<char>::max_size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_default_n<char*, unsigned long>(char*, unsigned long) */

char * std::__uninitialized_default_n<char*,unsigned_long>(char *param_1,ulong param_2)

{
  char *pcVar1;
  
  pcVar1 = __uninitialized_default_n_1<true>::__uninit_default_n<char*,unsigned_long>
                     (param_1,param_2);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__addressof<char>(char&) */

char * std::__addressof<char>(char *param_1)

{
  return param_1;
}



/* __gnu_cxx::new_allocator<char>::deallocate(char*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<char>::deallocate(new_allocator<char> *this,char *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char>::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<char>::_M_max_size(void)

{
  return 0x7fffffffffffffff;
}



/* __gnu_cxx::new_allocator<char>::allocate(unsigned long, void const*) */

void __gnu_cxx::new_allocator<char>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((ulong)param_2);
  return;
}



/* char* std::__uninitialized_copy<true>::__uninit_copy<char const*, char*>(char const*, char
   const*, char*) */

char * std::__uninitialized_copy<true>::__uninit_copy<char_const*,char*>
                 (char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = copy<char_const*,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char>::max_size() const */

void __gnu_cxx::new_allocator<char>::max_size(void)

{
  _M_max_size();
  return;
}



/* char* std::__uninitialized_default_n_1<true>::__uninit_default_n<char*, unsigned long>(char*,
   unsigned long) */

char * std::__uninitialized_default_n_1<true>::__uninit_default_n<char*,unsigned_long>
                 (char *param_1,ulong param_2)

{
  char *pcVar1;
  char *local_20;
  
  local_20 = param_1;
  if (param_2 != 0) {
    pcVar1 = __addressof<char>(param_1);
    _Construct<char>(pcVar1);
    local_20 = fill_n<char*,unsigned_long,char>(param_1 + 1,param_2 - 1,pcVar1);
  }
  return local_20;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<char*>::iterator_category std::__iterator_category<char*>(char* const&) */

iterator_category std::__iterator_category<char*>(char **param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::copy<char const*, char*>(char const*, char const*, char*) */

char * std::copy<char_const*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = __miter_base<char_const*>(param_2);
  pcVar2 = __miter_base<char_const*>(param_1);
  pcVar1 = __copy_move_a<false,char_const*,char*>(pcVar2,pcVar1,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Construct<char>(char*) */

void std::_Construct<char>(char *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)operator_new(1,param_1);
  *puVar1 = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::fill_n<char*, unsigned long, char>(char*, unsigned long, char const&) */

char * std::fill_n<char*,unsigned_long,char>(char *param_1,ulong param_2,char *param_3)

{
  ulong uVar1;
  char *pcVar2;
  char *local_10;
  
  local_10 = param_1;
  __iterator_category<char*>(&local_10);
  uVar1 = __size_to_integer(param_2);
  pcVar2 = __fill_n_a<char*,unsigned_long,char>
                     (local_10,uVar1,param_3,(random_access_iterator_tag)uVar1);
  return pcVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char const* std::__miter_base<char const*>(char const*) */

char * std::__miter_base<char_const*>(char *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a<false, char const*, char*>(char const*, char const*, char*) */

char * std::__copy_move_a<false,char_const*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  char *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pcVar1 = __niter_base<char*>(param_3);
  pcVar2 = __niter_base<char_const*>(local_28);
  pcVar3 = __niter_base<char_const*>(local_20);
  pcVar1 = __copy_move_a1<false,char_const*,char*>(pcVar3,pcVar2,pcVar1);
  pcVar1 = __niter_wrap<char*>(&local_30,pcVar1);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__fill_n_a<char*, unsigned long, char>(char*, unsigned long, char const&,
   std::random_access_iterator_tag) */

char * std::__fill_n_a<char*,unsigned_long,char>
                 (char *param_1,ulong param_2,char *param_3,random_access_iterator_tag param_4)

{
  if (param_2 != 0) {
    __fill_a<char*,char>(param_1,param_1 + param_2,param_3);
    param_1 = param_1 + param_2;
  }
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char const* std::__niter_base<char const*>(char const*) */

char * std::__niter_base<char_const*>(char *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__niter_base<char*>(char*) */

char * std::__niter_base<char*>(char *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a1<false, char const*, char*>(char const*, char const*, char*) */

char * std::__copy_move_a1<false,char_const*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move_a2<false,char_const*,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__niter_wrap<char*>(char* const&, char*) */

char * std::__niter_wrap<char*>(char **param_1,char *param_2)

{
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__fill_a<char*, char>(char*, char*, char const&) */

void std::__fill_a<char*,char>(char *param_1,char *param_2,char *param_3)

{
  __fill_a1<char>(param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a2<false, char const*, char*>(char const*, char const*, char*) */

char * std::__copy_move_a2<false,char_const*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>
                     (param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__enable_if<std::__is_byte<char>::__value, void>::__type std::__fill_a1<char>(char*,
   char*, char const&) */

__type std::__fill_a1<char>(char *param_1,char *param_2,char *param_3)

{
  char *__n;
  
  __n = param_2 + -(long)param_1;
  if (__n != (char *)0x0) {
    __n = (char *)memset(param_1,(uint)(byte)*param_3,(size_t)__n);
  }
  return (__type)__n;
}



/* char* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<char>(char const*,
   char const*, char*) */

char * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>
                 (char *param_1,char *param_2,char *param_3)

{
  size_t __n;
  
  __n = (long)param_2 - (long)param_1;
  if (__n != 0) {
    memmove(param_3,param_1,__n);
  }
  return param_3 + __n;
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcED2Ev@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt17__throw_bad_allocv@GLIBCXX_3.4 */
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

void std::__throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt20__throw_length_errorPKc@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memset@GLIBC_2.2.5 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC1ERKS_@GLIBCXX_3.4 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _Znwm@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZdlPvm@CXXABI_1.3.9 */
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

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcED1Ev@GLIBCXX_3.4 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC2ERKS_@GLIBCXX_3.4 */
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

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memmove@GLIBC_2.2.5 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC1Ev@GLIBCXX_3.4 */
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


