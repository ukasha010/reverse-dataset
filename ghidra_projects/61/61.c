
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00106fe8;
  if (PTR___gmon_start___00106fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00106fe8)();
  }
  return (int)puVar1;
}



void FUN_00101020(void)

{
  (*(code *)PTR_00106f28)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00106fc8)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00106f30)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00106f38)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00106f40)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00106f48)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00106f50)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00106f58)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00106f60)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00106f68)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00106f70)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00106f78)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00106f80)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00106f88)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00106f90)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00106f98)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00106fa0)();
  return pvVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00106fa8)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00106fb0)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00106fb8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,bool param_1)

{
  (*(code *)PTR_operator<<_00106fc0)();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00106fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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
    if (PTR___cxa_finalize_00106fc8 != (undefined *)0x0) {
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
  __normal_iterator _Var5;
  ulong uVar6;
  int *piVar7;
  basic_ostream *pbVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  allocator<char> local_d1;
  int local_d0;
  int local_cc;
  vector<int,std::allocator<int>> local_c8 [32];
  vector<char,std::allocator<char>> local_a8 [32];
  undefined8 local_88 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  allocator local_43;
  undefined local_42;
  undefined local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 1;
  local_64 = 2;
  local_60 = 3;
  local_5c = 4;
  local_58 = 5;
  local_54 = 6;
  local_50 = 7;
  std::allocator<int>::allocator();
                    /* try { // try from 0010142e to 00101432 has its CatchHandler @ 00101739 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_c8,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)local_88);
                    /* try { // try from 00101453 to 001015d3 has its CatchHandler @ 001017a8 */
  std::operator<<((basic_ostream *)std::cout,"Vector v : ");
  local_d0 = 0;
  while( true ) {
    uVar9 = (ulong)local_d0;
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= uVar9) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_c8,(long)local_d0);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_d0 = local_d0 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_88[0] = std::vector<int,std::allocator<int>>::end();
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator-
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_88,1);
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  std::
  iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var3,_Var2);
  std::operator<<((basic_ostream *)std::cout,"After swapping, Vector v : ");
  local_cc = 0;
  while( true ) {
    uVar9 = (ulong)local_cc;
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= uVar9) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_c8,(long)local_cc);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_cc = local_cc + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_43 = (allocator)0x61;
  local_42 = 0x76;
  local_41 = 100;
  std::allocator<char>::allocator();
                    /* try { // try from 0010161c to 00101620 has its CatchHandler @ 00101757 */
  std::vector<char,std::allocator<char>>::vector((initializer_list)local_a8,&local_43);
  std::allocator<char>::~allocator((allocator<char> *)local_88);
  local_43 = (allocator)0x75;
  local_42 = 0x69;
  local_41 = 0x77;
  std::allocator<char>::allocator();
                    /* try { // try from 00101678 to 0010167c has its CatchHandler @ 0010176c */
  std::vector<char,std::allocator<char>>::vector((initializer_list)local_88,&local_43);
  std::allocator<char>::~allocator(&local_d1);
  _Var2 = std::vector<char,std::allocator<char>>::end();
  _Var3 = std::vector<char,std::allocator<char>>::begin();
  _Var4 = std::vector<char,std::allocator<char>>::end();
  _Var5 = std::vector<char,std::allocator<char>>::begin();
                    /* try { // try from 001016d7 to 001016ef has its CatchHandler @ 00101784 */
  bVar1 = std::
          lexicographical_compare<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (_Var5,_Var4,_Var3,_Var2);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,bVar1);
  std::vector<char,std::allocator<char>>::~vector((vector<char,std::allocator<char>> *)local_88);
  std::vector<char,std::allocator<char>>::~vector(local_a8);
  std::vector<int,std::allocator<int>>::~vector(local_c8);
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
    __cxa_atexit(PTR__Init_00106ff8,&std::__ioinit,&__dso_handle);
  }
  return;
}



void _GLOBAL__sub_I_main(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__ops::__iter_less_iter() */

void __gnu_cxx::__ops::__iter_less_iter(void)

{
  return;
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
/* std::allocator<int>::allocator() */

void std::allocator<int>::allocator(void)

{
  __gnu_cxx::new_allocator<int>::new_allocator();
  return;
}



/* std::allocator<int>::~allocator() */

void __thiscall std::allocator<int>::~allocator(allocator<int> *this)

{
  __gnu_cxx::new_allocator<int>::~new_allocator((new_allocator<int> *)this);
  return;
}



/* std::vector<int, std::allocator<int> >::vector(std::initializer_list<int>, std::allocator<int>
   const&) */

void std::vector<int,std::allocator<int>>::vector(initializer_list param_1,allocator *param_2)

{
  long lVar1;
  forward_iterator_tag fVar2;
  int *piVar3;
  allocator *in_RCX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Vector_base<int,std::allocator<int>>::_Vector_base
            ((_Vector_base<int,std::allocator<int>> *)(int *)CONCAT44(in_register_0000003c,param_1),
             in_RCX);
  fVar2 = initializer_list<int>::end();
  piVar3 = (int *)initializer_list<int>::begin();
                    /* try { // try from 0010193d to 00101941 has its CatchHandler @ 00101944 */
  _M_range_initialize<int_const*>((int *)CONCAT44(in_register_0000003c,param_1),piVar3,fVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::vector<int, std::allocator<int> >::~vector() */

void __thiscall std::vector<int,std::allocator<int>>::~vector(vector<int,std::allocator<int>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  _Destroy<int*,int>(*(int **)this,*(int **)(this + 8),paVar1);
  _Vector_base<int,std::allocator<int>>::~_Vector_base
            ((_Vector_base<int,std::allocator<int>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<int, std::allocator<int> >::size() const */

long std::vector<int,std::allocator<int>>::size(void)

{
  long *in_RDI;
  
  return in_RDI[1] - *in_RDI >> 2;
}



/* std::vector<int, std::allocator<int> >::operator[](unsigned long) */

long __thiscall
std::vector<int,std::allocator<int>>::operator[]
          (vector<int,std::allocator<int>> *this,ulong param_1)

{
  return param_1 * 4 + *(long *)this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<int, std::allocator<int> >::begin() */

undefined8 std::vector<int,std::allocator<int>>::begin(void)

{
  int **in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18,in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<int, std::allocator<int> >::end() */

undefined8 std::vector<int,std::allocator<int>>::end(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18,
             (int **)(in_RDI + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator-
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this,long param_1)

{
  long in_FS_OFFSET;
  int *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (int *)(param_1 * -4 + *(long *)this);
  __normal_iterator((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::iter_swap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::
     iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  piVar1 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_28);
  piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             local_20);
  swap<int>(piVar2,piVar1);
  return;
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
                    /* try { // try from 00101bcb to 00101bcf has its CatchHandler @ 00101bd2 */
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
/* bool std::lexicographical_compare<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

bool std::
     lexicographical_compare<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               __normal_iterator param_4)

{
  bool bVar1;
  
  bVar1 = __lexicographical_compare_aux<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (param_1,param_2,param_3,param_4);
  return bVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<int>::new_allocator() */

void __gnu_cxx::new_allocator<int>::new_allocator(void)

{
  return;
}



/* __gnu_cxx::new_allocator<int>::~new_allocator() */

void __thiscall __gnu_cxx::new_allocator<int>::~new_allocator(new_allocator<int> *this)

{
  return;
}



/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<int>::~allocator((allocator<int> *)this);
  return;
}



/* std::_Vector_base<int, std::allocator<int> >::_Vector_base(std::allocator<int> const&) */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_base
          (_Vector_base<int,std::allocator<int>> *this,allocator *param_1)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_1);
  return;
}



/* std::_Vector_base<int, std::allocator<int> >::~_Vector_base() */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::~_Vector_base
          (_Vector_base<int,std::allocator<int>> *this)

{
  _M_deallocate(this,*(int **)this,*(long *)(this + 0x10) - *(long *)this >> 2);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::initializer_list<int>::begin() const */

undefined8 std::initializer_list<int>::begin(void)

{
  undefined8 *in_RDI;
  
  return *in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::initializer_list<int>::end() const */

long std::initializer_list<int>::end(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = begin();
  lVar2 = size();
  return lVar2 * 4 + lVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<int const*>::difference_type std::distance<int const*>(int const*, int
   const*) */

difference_type std::distance<int_const*>(int *param_1,int *param_2)

{
  difference_type dVar1;
  int *local_10;
  
  local_10 = param_1;
  __iterator_category<int_const*>(&local_10);
  dVar1 = __distance<int_const*>(local_10,param_2,(random_access_iterator_tag)param_2);
  return dVar1;
}



/* void std::vector<int, std::allocator<int> >::_M_range_initialize<int const*>(int const*, int
   const*, std::forward_iterator_tag) */

void std::vector<int,std::allocator<int>>::_M_range_initialize<int_const*>
               (int *param_1,int *param_2,forward_iterator_tag param_3)

{
  difference_type dVar1;
  undefined4 extraout_var;
  allocator *paVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 in_register_00000014;
  
  dVar1 = distance<int_const*>(param_2,(int *)CONCAT44(in_register_00000014,param_3));
  paVar2 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  uVar3 = _S_check_init_len(CONCAT44(extraout_var,dVar1),paVar2);
  uVar4 = _Vector_base<int,std::allocator<int>>::_M_allocate
                    ((_Vector_base<int,std::allocator<int>> *)param_1,uVar3);
  *(undefined8 *)param_1 = uVar4;
  *(ulong *)(param_1 + 4) = *(long *)param_1 + CONCAT44(extraout_var,dVar1) * 4;
  paVar2 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  piVar5 = __uninitialized_copy_a<int_const*,int*,int>
                     (param_2,(int *)CONCAT44(in_register_00000014,param_3),*(int **)param_1,paVar2)
  ;
  *(int **)(param_1 + 2) = piVar5;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() */

undefined8 std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&) */

void std::_Destroy<int*,int>(int *param_1,int *param_2,allocator *param_3)

{
  _Destroy<int*>(param_1,param_2);
  return;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::__normal_iterator(int* const&) */

void __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this,int **param_1)

{
  *(int **)this = *param_1;
  return;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  return *(undefined8 *)this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int&>::type&& std::move<int&>(int&) */

type * std::move<int&>(int *param_1)

{
  return (type *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__and_<std::__not_<std::__is_tuple_like<int> >,
   std::is_move_constructible<int>, std::is_move_assignable<int> >::value, void>::type
   std::swap<int>(int&, int&) */

type std::swap<int>(int *param_1,int *param_2)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)move<int&>(param_1);
  local_14 = *piVar1;
  piVar1 = (int *)move<int&>(param_2);
  *param_1 = *piVar1;
  piVar1 = (int *)move<int&>(&local_14);
  *param_2 = *piVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
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
/* bool std::__lexicographical_compare_aux<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

bool std::
     __lexicographical_compare_aux<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               __normal_iterator param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = __niter_base<char*,std::vector<char,std::allocator<char>>>(param_4);
  pcVar3 = __niter_base<char*,std::vector<char,std::allocator<char>>>(param_3);
  pcVar4 = __niter_base<char*,std::vector<char,std::allocator<char>>>(param_2);
  pcVar5 = __niter_base<char*,std::vector<char,std::allocator<char>>>(param_1);
  bVar1 = __lexicographical_compare_aux1<char*,char*>(pcVar5,pcVar4,pcVar3,pcVar2);
  return bVar1;
}



/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(std::allocator<int>
   const&) */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<int>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



/* std::_Vector_base<int, std::allocator<int> >::_M_deallocate(int*, unsigned long) */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_deallocate
          (_Vector_base<int,std::allocator<int>> *this,int *param_1,ulong param_2)

{
  if (param_1 != (int *)0x0) {
    allocator_traits<std::allocator<int>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::initializer_list<int>::size() const */

undefined8 std::initializer_list<int>::size(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 8);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<int const*>::iterator_category std::__iterator_category<int const*>(int
   const* const&) */

iterator_category std::__iterator_category<int_const*>(int **param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<int const*>::difference_type std::__distance<int const*>(int const*, int
   const*, std::random_access_iterator_tag) */

difference_type
std::__distance<int_const*>(int *param_1,int *param_2,random_access_iterator_tag param_3)

{
  return (difference_type)((long)param_2 - (long)param_1 >> 2);
}



/* std::vector<int, std::allocator<int> >::_S_check_init_len(unsigned long, std::allocator<int>
   const&) */

ulong std::vector<int,std::allocator<int>>::_S_check_init_len(ulong param_1,allocator *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  allocator<int>::allocator(&local_21);
  uVar1 = _S_max_size(&local_21);
  allocator<int>::~allocator((allocator<int> *)&local_21);
  if (uVar1 < param_1) {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* std::_Vector_base<int, std::allocator<int> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_allocate
          (_Vector_base<int,std::allocator<int>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<int>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__uninitialized_copy_a<int const*, int*, int>(int const*, int const*, int*,
   std::allocator<int>&) */

int * std::__uninitialized_copy_a<int_const*,int*,int>
                (int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  int *piVar1;
  
  piVar1 = uninitialized_copy<int_const*,int*>(param_1,param_2,param_3);
  return piVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<int*>(int*, int*) */

void std::_Destroy<int*>(int *param_1,int *param_2)

{
  _Destroy_aux<true>::__destroy<int*>(param_1,param_2);
  return;
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
/* char* std::__niter_base<char*, std::vector<char, std::allocator<char> >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >) */

char * std::__niter_base<char*,std::vector<char,std::allocator<char>>>(__normal_iterator param_1)

{
  char **ppcVar1;
  
  ppcVar1 = (char **)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     base();
  return *ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::__lexicographical_compare_aux1<char*, char*>(char*, char*, char*, char*) */

bool std::__lexicographical_compare_aux1<char*,char*>
               (char *param_1,char *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  char *in_R8;
  
  bVar1 = __lexicographical_compare<false>::__lc<char*,char*>
                    ((__lexicographical_compare<false> *)param_1,param_2,param_3,param_4,in_R8);
  return bVar1;
}



/* std::allocator_traits<std::allocator<char> >::deallocate(std::allocator<char>&, char*, unsigned
   long) */

void std::allocator_traits<std::allocator<char>>::deallocate
               (allocator *param_1,char *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<char>::deallocate((new_allocator<char> *)param_1,param_2,param_3);
  return;
}



/* std::allocator<int>::allocator(std::allocator<int> const&) */

void std::allocator<int>::allocator(allocator *param_1)

{
  __gnu_cxx::new_allocator<int>::new_allocator((new_allocator *)param_1);
  return;
}



/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* std::allocator_traits<std::allocator<int> >::deallocate(std::allocator<int>&, int*, unsigned
   long) */

void std::allocator_traits<std::allocator<int>>::deallocate
               (allocator *param_1,int *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<int>::deallocate((new_allocator<int> *)param_1,param_2,param_3);
  return;
}



/* std::vector<int, std::allocator<int> >::_S_max_size(std::allocator<int> const&) */

ulong std::vector<int,std::allocator<int>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = allocator_traits<std::allocator<int>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}



/* std::allocator_traits<std::allocator<int> >::allocate(std::allocator<int>&, unsigned long) */

void std::allocator_traits<std::allocator<int>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<int>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::uninitialized_copy<int const*, int*>(int const*, int const*, int*) */

int * std::uninitialized_copy<int_const*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __uninitialized_copy<true>::__uninit_copy<int_const*,int*>(param_1,param_2,param_3);
  return piVar1;
}



/* void std::_Destroy_aux<true>::__destroy<int*>(int*, int*) */

void std::_Destroy_aux<true>::__destroy<int*>(int *param_1,int *param_2)

{
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* bool std::__lexicographical_compare<false>::__lc<char*, char*>(char*, char*, char*, char*) */

bool __thiscall
std::__lexicographical_compare<false>::__lc<char*,char*>
          (__lexicographical_compare<false> *this,char *param_1,char *param_2,char *param_3,
          char *param_4)

{
  bool bVar1;
  _Iter_less_iter _Var2;
  
  _Var2 = (_Iter_less_iter)param_4;
  __gnu_cxx::__ops::__iter_less_iter();
  bVar1 = __lexicographical_compare_impl<char*,char*,__gnu_cxx::__ops::_Iter_less_iter>
                    ((char *)this,param_1,param_2,param_3,_Var2);
  return bVar1;
}



/* __gnu_cxx::new_allocator<char>::deallocate(char*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<char>::deallocate(new_allocator<char> *this,char *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
  return;
}



/* std::allocator_traits<std::allocator<char> >::max_size(std::allocator<char> const&) */

void std::allocator_traits<std::allocator<char>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<char>::max_size();
  return;
}



/* __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&) */

void __gnu_cxx::new_allocator<int>::new_allocator(new_allocator *param_1)

{
  return;
}



/* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<int>::deallocate(new_allocator<int> *this,int *param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 4);
  return;
}



/* std::allocator_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */

void std::allocator_traits<std::allocator<int>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<int>::max_size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<int>::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<int>::_M_max_size(void)

{
  return 0x1fffffffffffffff;
}



/* __gnu_cxx::new_allocator<int>::allocate(unsigned long, void const*) */

void __gnu_cxx::new_allocator<int>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    if ((void *)0x3fffffffffffffff < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 2);
  return;
}



/* int* std::__uninitialized_copy<true>::__uninit_copy<int const*, int*>(int const*, int const*,
   int*) */

int * std::__uninitialized_copy<true>::__uninit_copy<int_const*,int*>
                (int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = copy<int_const*,int*>(param_1,param_2,param_3);
  return piVar1;
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



/* bool __gnu_cxx::__ops::_Iter_less_iter::TEMPNAMEPLACEHOLDERVALUE(char*, char*) const */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_iter::operator()(_Iter_less_iter *this,char *param_1,char *param_2)

{
  return *param_1 < *param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::__lexicographical_compare_impl<char*, char*, __gnu_cxx::__ops::_Iter_less_iter>(char*,
   char*, char*, char*, __gnu_cxx::__ops::_Iter_less_iter) */

bool std::__lexicographical_compare_impl<char*,char*,__gnu_cxx::__ops::_Iter_less_iter>
               (char *param_1,char *param_2,char *param_3,char *param_4,_Iter_less_iter param_5)

{
  bool bVar1;
  _Iter_less_iter local_29;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_28 = param_4;
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  local_18 = __lc_rai<std::random_access_iterator_tag,std::random_access_iterator_tag>::
             __newlast1<char*,char*>(param_1,param_2,param_3,param_4);
  while( true ) {
    if ((local_10 == local_18) ||
       (bVar1 = __lc_rai<std::random_access_iterator_tag,std::random_access_iterator_tag>::
                __cnd2<char*>(local_20,local_28), !bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      if ((local_10 == local_18) && (local_20 != local_28)) {
        return true;
      }
      return false;
    }
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()(&local_29,local_10,local_20);
    if (bVar1) {
      return true;
    }
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()(&local_29,local_20,local_10);
    if (bVar1) break;
    local_10 = local_10 + 1;
    local_20 = local_20 + 1;
  }
  return false;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char>::max_size() const */

void __gnu_cxx::new_allocator<char>::max_size(void)

{
  _M_max_size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<int>::max_size() const */

void __gnu_cxx::new_allocator<int>::max_size(void)

{
  _M_max_size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::copy<int const*, int*>(int const*, int const*, int*) */

int * std::copy<int_const*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = __miter_base<int_const*>(param_2);
  piVar2 = __miter_base<int_const*>(param_1);
  piVar1 = __copy_move_a<false,int_const*,int*>(piVar2,piVar1,param_3);
  return piVar1;
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



/* char* std::__lc_rai<std::random_access_iterator_tag,
   std::random_access_iterator_tag>::__newlast1<char*, char*>(char*, char*, char*, char*) */

char * std::__lc_rai<std::random_access_iterator_tag,std::random_access_iterator_tag>::
       __newlast1<char*,char*>(char *param_1,char *param_2,char *param_3,char *param_4)

{
  if ((long)param_4 - (long)param_3 < (long)param_2 - (long)param_1) {
    param_2 = param_1 + ((long)param_4 - (long)param_3);
  }
  return param_2;
}



/* bool std::__lc_rai<std::random_access_iterator_tag,
   std::random_access_iterator_tag>::__cnd2<char*>(char*, char*) */

bool std::__lc_rai<std::random_access_iterator_tag,std::random_access_iterator_tag>::__cnd2<char*>
               (char *param_1,char *param_2)

{
  return true;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int const* std::__miter_base<int const*>(int const*) */

int * std::__miter_base<int_const*>(int *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*) */

int * std::__copy_move_a<false,int_const*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *local_30;
  int *local_28;
  int *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  piVar1 = __niter_base<int*>(param_3);
  piVar2 = __niter_base<int_const*>(local_28);
  piVar3 = __niter_base<int_const*>(local_20);
  piVar1 = __copy_move_a1<false,int_const*,int*>(piVar3,piVar2,piVar1);
  piVar1 = __niter_wrap<int*>(&local_30,piVar1);
  return piVar1;
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
/* int const* std::__niter_base<int const*>(int const*) */

int * std::__niter_base<int_const*>(int *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__niter_base<int*>(int*) */

int * std::__niter_base<int*>(int *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__copy_move_a1<false, int const*, int*>(int const*, int const*, int*) */

int * std::__copy_move_a1<false,int_const*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move_a2<false,int_const*,int*>(param_1,param_2,param_3);
  return piVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__niter_wrap<int*>(int* const&, int*) */

int * std::__niter_wrap<int*>(int **param_1,int *param_2)

{
  return param_2;
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
/* int* std::__copy_move_a2<false, int const*, int*>(int const*, int const*, int*) */

int * std::__copy_move_a2<false,int_const*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>
                     (param_1,param_2,param_3);
  return piVar1;
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



/* int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*,
   int const*, int*) */

int * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>
                (int *param_1,int *param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return param_3 + lVar1;
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt28__throw_bad_array_new_lengthv@GLIBCXX_3.4.29 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC1Ev@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEb@GLIBCXX_3.4 */
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


