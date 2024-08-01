
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
  (*(code *)PTR_00105f48)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00105f50)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00105f58)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00105f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00105f68)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00105f70)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00105f78)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00105f80)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00105f88)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00105f90)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105f98)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00105fa0)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00105fa8)();
  return pvVar1;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00105fb0)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,bool param_1)

{
  (*(code *)PTR_operator<<_00105fb8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,long param_1)

{
  (*(code *)PTR_operator<<_00105fc0)();
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



/* WARNING: Removing unreachable block (ram,0x00101263) */
/* WARNING: Removing unreachable block (ram,0x0010126f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001012a4) */
/* WARNING: Removing unreachable block (ram,0x001012b0) */

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
  __normal_iterator _Var5;
  pair pVar6;
  difference_type dVar7;
  basic_ostream<char,std::char_traits<char>> *pbVar8;
  undefined4 extraout_var;
  basic_ostream *pbVar9;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  __normal_iterator local_d0 [2];
  vector<int,std::allocator<int>> local_c8 [32];
  vector<int,std::allocator<int>> local_a8 [32];
  allocator<int> local_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 1;
  local_64 = 2;
  local_60 = 3;
  local_5c = 4;
  local_58 = 5;
  std::allocator<int>::allocator();
                    /* try { // try from 001013a0 to 001013a4 has its CatchHandler @ 001016d8 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_c8,(allocator *)&local_68);
  std::allocator<int>::~allocator(local_88);
  local_68 = 1;
  local_64 = 2;
  local_60 = 3;
  local_5c = 4;
  local_58 = 5;
  std::allocator<int>::allocator();
                    /* try { // try from 00101410 to 00101414 has its CatchHandler @ 001016f6 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_a8,(allocator *)&local_68);
  std::allocator<int>::~allocator(local_88);
  local_68 = 1;
  local_64 = 3;
  local_60 = 4;
  local_5c = 5;
  local_58 = 5;
  local_54 = 5;
  local_50 = 6;
  local_4c = 7;
  std::allocator<int>::allocator();
                    /* try { // try from 00101498 to 0010149c has its CatchHandler @ 0010170b */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_88,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)&local_d8);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var4 = std::vector<int,std::allocator<int>>::end();
  _Var5 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 001014fd to 0010168e has its CatchHandler @ 00101723 */
  bVar1 = std::
          equal<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var5,_Var4,_Var3,_Var2);
  pbVar8 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,bVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar8,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00105fd0);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var4 = std::vector<int,std::allocator<int>>::end();
  _Var5 = std::vector<int,std::allocator<int>>::begin();
  bVar1 = std::
          equal<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var5,_Var4,_Var3,_Var2);
  pbVar8 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,bVar1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar8,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00105fd0);
  local_e0 = CONCAT44(local_e0._4_4_,0xb);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  pVar6 = std::
          equal_range<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                    (_Var3,_Var2,(int *)&local_e0);
  local_d8 = CONCAT44(extraout_var,pVar6);
  pbVar9 = std::operator<<((basic_ostream *)std::cout,"11 can be inserted from ");
  local_e8 = std::vector<int,std::allocator<int>>::begin();
  dVar7 = __gnu_cxx::operator-((__normal_iterator *)&local_d8,(__normal_iterator *)&local_e8);
  pbVar9 = (basic_ostream *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar9,
                      CONCAT44(extraout_var_00,dVar7));
  pbVar9 = std::operator<<(pbVar9," till ");
  local_e0 = std::vector<int,std::allocator<int>>::begin();
  dVar7 = __gnu_cxx::operator-(local_d0,(__normal_iterator *)&local_e0);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar9,CONCAT44(extraout_var_01,dVar7));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_88);
  std::vector<int,std::allocator<int>>::~vector(local_a8);
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
    __cxa_atexit(PTR__Init_00105ff8,&std::__ioinit,&__dso_handle);
  }
  return;
}



void _GLOBAL__sub_I_main(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__ops::__iter_less_val() */

void __gnu_cxx::__ops::__iter_less_val(void)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__ops::__val_less_iter() */

void __gnu_cxx::__ops::__val_less_iter(void)

{
  return;
}



/* std::integral_constant<bool, true>::operator bool() const */

bool __thiscall std::integral_constant::operator_cast_to_bool(integral_constant *this)

{
  return true;
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
                    /* try { // try from 001018f1 to 001018f5 has its CatchHandler @ 001018f8 */
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::equal<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

bool std::
     equal<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               __normal_iterator param_4)

{
  bool bVar1;
  
  bVar1 = __equal4<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1,param_2,param_3,param_4);
  return bVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::pair<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >
   std::equal_range<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

pair std::equal_range<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
               (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  pair pVar1;
  _Val_less_iter in_R8D;
  
  __gnu_cxx::__ops::__val_less_iter();
  __gnu_cxx::__ops::__iter_less_val();
  pVar1 = __equal_range<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_less_val,__gnu_cxx::__ops::_Val_less_iter>
                    (param_1,param_2,param_3,param_2,in_R8D);
  return pVar1;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::difference_type
   __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&) */

difference_type __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  return (difference_type)(lVar1 - *plVar2 >> 2);
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::distance<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

difference_type
std::distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2)

{
  difference_type dVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  dVar1 = __distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    ((__normal_iterator)local_10,param_2,param_2);
  return dVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::__equal4<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

bool std::
     __equal4<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               __normal_iterator param_4)

{
  int iVar1;
  bool bVar2;
  difference_type dVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *piVar4;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  integral_constant local_31;
  long local_30;
  long local_28;
  long local_20;
  
  local_40 = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_50 = CONCAT44(in_register_00000014,param_3);
  local_58 = CONCAT44(in_register_0000000c,param_4);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = integral_constant::operator_cast_to_bool(&local_31);
  if (!bVar2) {
    do {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_48);
      if (bVar2) {
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_58)
        ;
        if (!bVar2) goto LAB_00101e6c;
        bVar2 = true;
      }
      else {
LAB_00101e6c:
        bVar2 = false;
      }
      if (!bVar2) {
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)&local_48)
        ;
        if (bVar2) {
          bVar2 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_50,(__normal_iterator *)&local_58);
          if (bVar2) {
            bVar2 = true;
            goto LAB_00101eb4;
          }
        }
        bVar2 = false;
        goto LAB_00101eb4;
      }
      piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_40);
      iVar1 = *piVar4;
      piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_50);
      if (iVar1 != *piVar4) goto code_r0x00101e15;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_50);
    } while( true );
  }
  dVar3 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    ((__normal_iterator)local_40,(__normal_iterator)local_48);
  local_30 = CONCAT44(extraout_var,dVar3);
  dVar3 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    ((__normal_iterator)local_50,(__normal_iterator)local_58);
  local_28 = CONCAT44(extraout_var_00,dVar3);
  if (local_30 == local_28) {
    bVar2 = equal<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                      ((__normal_iterator)local_40,(__normal_iterator)local_48,
                       (__normal_iterator)local_50);
  }
  else {
    bVar2 = false;
  }
LAB_00101eb4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
code_r0x00101e15:
  bVar2 = false;
  goto LAB_00101eb4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::pair<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >
   std::__equal_range<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int, __gnu_cxx::__ops::_Iter_less_val,
   __gnu_cxx::__ops::_Val_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int const&, __gnu_cxx::__ops::_Iter_less_val, __gnu_cxx::__ops::_Val_less_iter) */

pair std::
     __equal_range<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_less_val,__gnu_cxx::__ops::_Val_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,int *param_3,
               _Iter_less_val param_4,_Val_less_iter param_5)

{
  bool bVar1;
  difference_type dVar2;
  __normal_iterator _Var3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar4;
  undefined4 extraout_var_01;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Val_less_iter local_72;
  _Iter_less_val local_71;
  int *local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  undefined8 local_28 [3];
  long local_10;
  
  local_60[0] = CONCAT44(in_register_0000003c,param_1);
  local_68 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_3;
  dVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1,param_2);
  local_38 = CONCAT44(extraout_var,dVar2);
LAB_00102012:
  do {
    if (local_38 < 1) {
      pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
      ::
      pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&,true>
                ((pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  *)local_28,(__normal_iterator *)local_60,(__normal_iterator *)local_60);
LAB_0010203c:
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (pair)local_28[0];
    }
    local_30 = local_38 >> 1;
    local_50 = local_60[0];
    advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
              ((__normal_iterator *)&local_50,local_30);
    bVar1 = __gnu_cxx::__ops::_Iter_less_val::operator()
                      (&local_71,(__normal_iterator)local_50,local_70);
    if (bVar1) {
      local_60[0] = local_50;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_60);
      local_38 = (local_38 - local_30) + -1;
      goto LAB_00102012;
    }
    bVar1 = __gnu_cxx::__ops::_Val_less_iter::operator()
                      (&local_72,local_70,(__normal_iterator)local_50);
    if (!bVar1) {
      _Var3 = __lower_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_less_val>
                        ((__normal_iterator)local_60[0],(__normal_iterator)local_50,local_70,
                         (__normal_iterator)local_50);
      local_48 = CONCAT44(extraout_var_00,_Var3);
      advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
                ((__normal_iterator *)local_60,local_38);
      puVar4 = (undefined8 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_50)
      ;
      _Var3 = __upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Val_less_iter>
                        ((__normal_iterator)*puVar4,(__normal_iterator)local_60[0],local_70,
                         (__normal_iterator)local_60[0]);
      local_40 = CONCAT44(extraout_var_01,_Var3);
      pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
      ::
      pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&,true>
                ((pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  *)local_28,(__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
      goto LAB_0010203c;
    }
    local_38 = local_30;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::iterator_category std::__iterator_category<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > > const&) */

iterator_category
std::__iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator *param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::__distance<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   std::random_access_iterator_tag) */

difference_type
std::__distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,random_access_iterator_tag param_3)

{
  difference_type dVar1;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  return dVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::equal<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

bool std::
     equal<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  bool bVar1;
  
  bVar1 = __equal_aux<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1,param_2,param_3);
  return bVar1;
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&) */

bool __gnu_cxx::operator!=(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  return lVar1 != *plVar2;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + 4;
  return this;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  return *(undefined8 *)this;
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&) */

bool __gnu_cxx::operator==(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  return lVar1 == *plVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::advance<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   long>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >&, long) */

void std::advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
               (__normal_iterator *param_1,long param_2)

{
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (param_1);
  __advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
            (param_1,param_2,(random_access_iterator_tag)param_2);
  return;
}



/* bool 
   __gnu_cxx::__ops::_Iter_less_val::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, int const&) const */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_val::operator()
          (_Iter_less_val *this,__normal_iterator param_1,int *param_2)

{
  int *piVar1;
  undefined4 in_register_00000034;
  undefined8 local_18;
  _Iter_less_val *local_10;
  
  local_18 = CONCAT44(in_register_00000034,param_1);
  local_10 = this;
  piVar1 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_18);
  return *piVar1 < *param_2;
}



/* bool __gnu_cxx::__ops::_Val_less_iter::TEMPNAMEPLACEHOLDERVALUE(int const&,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) const */

bool __thiscall
__gnu_cxx::__ops::_Val_less_iter::operator()
          (_Val_less_iter *this,int *param_1,__normal_iterator param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_register_00000014;
  undefined8 local_30;
  int *local_28;
  _Val_less_iter *local_20;
  
  local_30 = CONCAT44(in_register_00000014,param_2);
  iVar1 = *param_1;
  local_28 = param_1;
  local_20 = this;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_30);
  return iVar1 < *piVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__lower_bound<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int, __gnu_cxx::__ops::_Iter_less_val>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int const&, __gnu_cxx::__ops::_Iter_less_val) */

__normal_iterator
std::
__lower_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_less_val>
          (__normal_iterator param_1,__normal_iterator param_2,int *param_3,_Iter_less_val param_4)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Iter_less_val local_41;
  int *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  dVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1,param_2);
  local_20 = CONCAT44(extraout_var,dVar2);
  while (0 < local_20) {
    local_18 = local_20 >> 1;
    local_28 = local_30;
    advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
              ((__normal_iterator *)&local_28,local_18);
    bVar1 = __gnu_cxx::__ops::_Iter_less_val::operator()
                      (&local_41,(__normal_iterator)local_28,local_40);
    if (bVar1) {
      local_30 = local_28;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
      local_20 = (local_20 - local_18) + -1;
    }
    else {
      local_20 = local_18;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__normal_iterator)local_30;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__upper_bound<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int, __gnu_cxx::__ops::_Val_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int const&, __gnu_cxx::__ops::_Val_less_iter) */

__normal_iterator
std::
__upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Val_less_iter>
          (__normal_iterator param_1,__normal_iterator param_2,int *param_3,_Val_less_iter param_4)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Val_less_iter local_41;
  int *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  dVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1,param_2);
  local_20 = CONCAT44(extraout_var,dVar2);
  while (0 < local_20) {
    local_18 = local_20 >> 1;
    local_28 = local_30;
    advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
              ((__normal_iterator *)&local_28,local_18);
    bVar1 = __gnu_cxx::__ops::_Val_less_iter::operator()
                      (&local_41,local_40,(__normal_iterator)local_28);
    if (bVar1) {
      local_20 = local_18;
    }
    else {
      local_30 = local_28;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
      local_20 = (local_20 - local_18) + -1;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__normal_iterator)local_30;
}



/* std::pair<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::pair<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >&,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >&,
   true>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >&,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >&) */

void __thiscall
std::
pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
::
pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&,true>
          (pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
           *this,__normal_iterator *param_1,__normal_iterator *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           forward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&>
                     ((type *)param_1);
  *(undefined8 *)this = *puVar1;
  puVar1 = (undefined8 *)
           forward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&>
                     ((type *)param_2);
  *(undefined8 *)(this + 8) = *puVar1;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::__equal_aux<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

bool std::
     __equal_aux<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_3);
  piVar3 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_2);
  piVar4 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_1);
  bVar1 = __equal_aux1<int*,int*>(piVar4,piVar3,piVar2);
  return bVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__advance<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   long>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >&, long,
   std::random_access_iterator_tag) */

void std::__advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
               (__normal_iterator *param_1,long param_2,random_access_iterator_tag param_3)

{
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+=
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >&
   std::forward<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >&>(std::remove_reference<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >&>::type&) */

__normal_iterator *
std::forward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>&>
          (type *param_1)

{
  return (__normal_iterator *)param_1;
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
/* int* std::__niter_base<int*, std::vector<int, std::allocator<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

int * std::__niter_base<int*,std::vector<int,std::allocator<int>>>(__normal_iterator param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  return *ppiVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::__equal_aux1<int*, int*>(int*, int*, int*) */

bool std::__equal_aux1<int*,int*>(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = __equal<true>::equal<int>(param_1,param_2,param_3);
  return bVar1;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+=
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this,long param_1)

{
  *(long *)this = *(long *)this + param_1 * 4;
  return this;
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



/* bool std::__equal<true>::equal<int>(int const*, int const*, int const*) */

bool std::__equal<true>::equal<int>(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = (long)param_2 - (long)param_1 >> 2;
  if (uVar2 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = __memcmp<int,int>(param_1,param_3,uVar2);
    bVar3 = iVar1 == 0;
  }
  return bVar3;
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
/* int std::__memcmp<int, int>(int const*, int const*, unsigned long) */

int std::__memcmp<int,int>(int *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,param_3 * 4);
  return iVar1;
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
/* int* std::__copy_move_a2<false, int const*, int*>(int const*, int const*, int*) */

int * std::__copy_move_a2<false,int_const*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>
                     (param_1,param_2,param_3);
  return piVar1;
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



void _fini(void)

{
  return;
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

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memcmp@GLIBC_2.2.5 */
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

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEb@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,long param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEl@GLIBCXX_3.4 */
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


