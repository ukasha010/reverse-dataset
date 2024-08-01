
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
  (*(code *)PTR_00106f58)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00106fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00106f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00106f68)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00106f70)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00106f78)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00106f80)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00106f88)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00106f90)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00106f98)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00106fa0)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00106fa8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00106fb0)();
  return pvVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00106fb8)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00106fc0)();
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
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  basic_ostream *pbVar8;
  long in_FS_OFFSET;
  int local_104;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  vector<int,std::allocator<int>> local_e8 [32];
  vector<int,std::allocator<int>> local_c8 [32];
  vector<int,std::allocator<int>> local_a8 [32];
  undefined8 local_88 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
                    /* try { // try from 0010136e to 00101372 has its CatchHandler @ 00101998 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_e8,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)local_88);
  local_68 = 5;
  local_64 = 6;
  local_60 = 7;
  std::allocator<int>::allocator();
                    /* try { // try from 001013e1 to 001013e5 has its CatchHandler @ 001019b6 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_c8,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)local_88);
  local_68 = 4;
  local_64 = 2;
  local_60 = 6;
  std::allocator<int>::allocator();
                    /* try { // try from 00101443 to 00101447 has its CatchHandler @ 001019cb */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_a8,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)local_88);
                    /* try { // try from 00101468 to 001017d8 has its CatchHandler @ 00101a0d */
  std::operator<<((basic_ostream *)std::cout,"Vector 1 : ");
  local_104 = 0;
  while( true ) {
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= (ulong)(long)local_104) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_e8,(long)local_104);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_104 = local_104 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  std::operator<<((basic_ostream *)std::cout,"Vector 2 : ");
  local_100 = 0;
  while( true ) {
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= (ulong)(long)local_100) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_c8,(long)local_100);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_100 = local_100 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  std::operator<<((basic_ostream *)std::cout,"Vector 3 : ");
  local_fc = 0;
  while( true ) {
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= (ulong)(long)local_fc) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_a8,(long)local_fc);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_fc = local_fc + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_f8 = 0;
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var4 = std::vector<int,std::allocator<int>>::end();
  _Var5 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::
          search<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var5,_Var4,_Var3,_Var2);
  local_f8 = CONCAT44(extraout_var,_Var2);
  local_88[0] = std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_f8,(__normal_iterator *)local_88);
  if (bVar1) {
    std::operator<<((basic_ostream *)std::cout,"Subsequence found!\n");
  }
  else {
    std::operator<<((basic_ostream *)std::cout,"Subsequence not found!\n");
  }
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var4 = std::vector<int,std::allocator<int>>::end();
  _Var5 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::
          search<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var5,_Var4,_Var3,_Var2);
  local_f8 = CONCAT44(extraout_var_00,_Var2);
  local_88[0] = std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_f8,(__normal_iterator *)local_88);
  if (bVar1) {
    std::operator<<((basic_ostream *)std::cout,"Subsequence found!\n");
  }
  else {
    std::operator<<((basic_ostream *)std::cout,"Subsequence not found!\n");
  }
  local_68 = 1;
  local_64 = 2;
  local_60 = 3;
  local_5c = 4;
  local_58 = 4;
  local_54 = 4;
  local_50 = 5;
  local_4c = 6;
  local_48 = 3;
  local_44 = 4;
  std::allocator<int>::allocator();
                    /* try { // try from 0010185e to 00101862 has its CatchHandler @ 001019e0 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_88,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)&local_f0);
  local_f0 = CONCAT44(local_f0._4_4_,4);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 001018ac to 0010193f has its CatchHandler @ 001019f8 */
  _Var2 = std::
          search_n<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,int>
                    (_Var3,_Var2,2,(int *)&local_f0);
  local_f8 = CONCAT44(extraout_var_01,_Var2);
  local_f0 = std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0);
  if (bVar1) {
    pbVar8 = std::operator<<((basic_ostream *)std::cout,"Subsequence found using search_n()");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar8,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  else {
    pbVar8 = std::operator<<((basic_ostream *)std::cout,"Subsequence not found!!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar8,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_88);
  std::vector<int,std::allocator<int>>::~vector(local_a8);
  std::vector<int,std::allocator<int>>::~vector(local_c8);
  std::vector<int,std::allocator<int>>::~vector(local_e8);
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
/* __gnu_cxx::__ops::__iter_equal_to_iter() */

void __gnu_cxx::__ops::__iter_equal_to_iter(void)

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
                    /* try { // try from 00101bbf to 00101bc3 has its CatchHandler @ 00101bc6 */
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::search<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
search<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          __normal_iterator param_4)

{
  __normal_iterator _Var1;
  _Iter_equal_to_iter in_R8D;
  
  __gnu_cxx::__ops::__iter_equal_to_iter();
  _Var1 = __search<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
                    (param_1,param_2,param_3,param_4,in_R8D);
  return _Var1;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::search_n<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int, int const&) */

__normal_iterator
std::search_n<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,int>
          (__normal_iterator param_1,__normal_iterator param_2,int param_3,int *param_4)

{
  _Iter_equals_val _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __gnu_cxx::__ops::__iter_equals_val<int_const>(param_4);
  _Var2 = __search_n<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                    (param_1,param_2,param_3,_Var1);
  return _Var2;
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__search<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equal_to_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equal_to_iter) */

__normal_iterator
std::
__search<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          __normal_iterator param_4,_Iter_equal_to_iter param_5)

{
  bool bVar1;
  _Iter_equals_iter _Var2;
  __normal_iterator _Var3;
  __normal_iterator *p_Var4;
  undefined4 extraout_var;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined8 *puVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Iter_equal_to_iter local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  long local_10;
  
  local_30 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_00000014,param_3);
  local_48 = CONCAT44(in_register_0000000c,param_4);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
  if (!bVar1) {
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)&local_48);
    if (!bVar1) {
      bVar1 = false;
      goto LAB_001020a2;
    }
  }
  bVar1 = true;
LAB_001020a2:
  if (bVar1) {
    _Var3 = (__normal_iterator)local_30;
  }
  else {
    local_28 = local_40;
    p_Var4 = (__normal_iterator *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
    puVar5 = &local_48;
    bVar1 = __gnu_cxx::operator==(p_Var4,(__normal_iterator *)puVar5);
    if (bVar1) {
      _Var2 = __gnu_cxx::__ops::
              __iter_comp_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        ((_Iter_equal_to_iter)local_40,(__normal_iterator)puVar5);
      _Var3 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
                        ((__normal_iterator)local_30,(__normal_iterator)local_38,_Var2);
    }
    else {
      local_20 = local_30;
      while( true ) {
        _Var2 = __gnu_cxx::__ops::
                __iter_comp_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          ((_Iter_equal_to_iter)local_40,(__normal_iterator)puVar5);
        _Var3 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
                          ((__normal_iterator)local_30,(__normal_iterator)local_38,_Var2);
        local_30 = (undefined8 *)CONCAT44(extraout_var,_Var3);
        bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_38)
        ;
        if (bVar1) break;
        local_18 = local_28;
        local_20 = local_30;
        p_Var4 = (__normal_iterator *)
                 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                            &local_20);
        bVar1 = __gnu_cxx::operator==(p_Var4,(__normal_iterator *)&local_38);
        if (bVar1) {
          _Var3 = (__normal_iterator)local_38;
          goto LAB_00102202;
        }
        while( true ) {
          puVar5 = local_20;
          bVar1 = __gnu_cxx::__ops::_Iter_equal_to_iter::operator()
                            (&local_49,(__normal_iterator)local_20,(__normal_iterator)local_18);
          if (!bVar1) break;
          p_Var4 = (__normal_iterator *)
                   __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                   operator++((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_18);
          bVar1 = __gnu_cxx::operator==(p_Var4,(__normal_iterator *)&local_48);
          if (bVar1) {
            _Var3 = (__normal_iterator)local_30;
            goto LAB_00102202;
          }
          p_Var4 = (__normal_iterator *)
                   __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                   operator++((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_20);
          bVar1 = __gnu_cxx::operator==(p_Var4,(__normal_iterator *)&local_38);
          if (bVar1) {
            _Var3 = (__normal_iterator)local_38;
            goto LAB_00102202;
          }
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
      }
      _Var3 = (__normal_iterator)local_38;
    }
  }
LAB_00102202:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* __gnu_cxx::__ops::_Iter_equals_val<int const> __gnu_cxx::__ops::__iter_equals_val<int const>(int
   const&) */

_Iter_equals_val __gnu_cxx::__ops::__iter_equals_val<int_const>(int *param_1)

{
  long in_FS_OFFSET;
  _Iter_equals_val local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Iter_equals_val<int_const>::_Iter_equals_val((_Iter_equals_val<int_const> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__search_n<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int,
   __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, int, __gnu_cxx::__ops::_Iter_equals_val<int const>) */

__normal_iterator
std::
__search_n<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
          (__normal_iterator param_1,__normal_iterator param_2,int param_3,_Iter_equals_val param_4)

{
  undefined4 in_register_0000003c;
  random_access_iterator_tag in_R8D;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  if (0 < param_3) {
    if (param_3 == 1) {
      param_1 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                          (param_1,param_2,param_4);
    }
    else {
      __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                ((__normal_iterator *)&local_10);
      param_1 = __search_n_aux<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                          ((__normal_iterator)local_10,param_2,param_3,param_4,in_R8D);
    }
  }
  return param_1;
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + 4;
  return this;
}



/* __gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > > __gnu_cxx::__ops::__iter_comp_iter<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >(__gnu_cxx::__ops::_Iter_equal_to_iter,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

_Iter_equals_iter
__gnu_cxx::__ops::
__iter_comp_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (_Iter_equal_to_iter param_1,__normal_iterator param_2)

{
  long in_FS_OFFSET;
  _Iter_equals_iter local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  _Iter_equals_iter((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                     *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >) */

__normal_iterator
std::
__find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_equals_iter param_3)

{
  __normal_iterator _Var1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  _Var1 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
                    ((__normal_iterator)local_10,param_2,param_3,param_2);
  return _Var1;
}



/* bool 
   __gnu_cxx::__ops::_Iter_equal_to_iter::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) const */

bool __thiscall
__gnu_cxx::__ops::_Iter_equal_to_iter::operator()
          (_Iter_equal_to_iter *this,__normal_iterator param_1,__normal_iterator param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined8 local_30;
  undefined8 local_28;
  _Iter_equal_to_iter *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  local_30 = CONCAT44(in_register_00000014,param_2);
  local_20 = this;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_28);
  iVar1 = *piVar2;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_30);
  return iVar1 == *piVar2;
}



/* __gnu_cxx::__ops::_Iter_equals_val<int const>::_Iter_equals_val(int const&) */

void __thiscall
__gnu_cxx::__ops::_Iter_equals_val<int_const>::_Iter_equals_val
          (_Iter_equals_val<int_const> *this,int *param_1)

{
  *(int **)this = param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_equals_val<int const>) */

__normal_iterator
std::
__find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_equals_val param_3)

{
  __normal_iterator _Var1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  _Var1 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                    ((__normal_iterator)local_10,param_2,param_3,param_2);
  return _Var1;
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__search_n_aux<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int, __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, int, __gnu_cxx::__ops::_Iter_equals_val<int const>,
   std::random_access_iterator_tag) */

__normal_iterator
std::
__search_n_aux<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
          (__normal_iterator param_1,__normal_iterator param_2,int param_3,_Iter_equals_val param_4,
          random_access_iterator_tag param_5)

{
  bool bVar1;
  difference_type dVar2;
  __normal_iterator _Var3;
  int iVar4;
  undefined4 extraout_var;
  undefined8 *puVar5;
  undefined4 extraout_var_00;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_40 = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_58 = CONCAT44(in_register_0000000c,param_4);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = param_3;
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
  local_30 = CONCAT44(extraout_var,dVar2);
  local_28 = (long)local_4c;
  do {
    if (local_30 < local_28) {
      _Var3 = (__normal_iterator)local_48;
LAB_00102743:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return _Var3;
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+=
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40,local_28);
    local_30 = local_30 - local_28;
    local_38 = local_40;
    while( true ) {
      puVar5 = (undefined8 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38)
      ;
      bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                        ((_Iter_equals_val<int_const> *)&local_58,(__normal_iterator)*puVar5);
      if (!bVar1) break;
      local_28 = local_28 + -1;
      if (local_28 == 0) {
        _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator-
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40
                           ,(long)local_4c);
        goto LAB_00102743;
      }
    }
    iVar4 = local_4c + 1;
    dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    local_28 = (long)iVar4 - CONCAT44(extraout_var_00,dVar2);
  } while( true );
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



/* __gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >::_Iter_equals_iter(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

void __thiscall
__gnu_cxx::__ops::
_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
_Iter_equals_iter(_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  *this,__normal_iterator param_1)

{
  undefined4 in_register_00000034;
  
  *(ulong *)this = CONCAT44(in_register_00000034,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >, std::random_access_iterator_tag) */

__normal_iterator
std::
__find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_equals_iter param_3,
          random_access_iterator_tag param_4)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  long lVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  undefined4 extraout_var_00;
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
  for (local_10 = CONCAT44(extraout_var,dVar2) >> 2; 0 < local_10; local_10 = local_10 + -1) {
    bVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::operator()((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::operator()((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::operator()((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::operator()((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
  lVar3 = CONCAT44(extraout_var_00,dVar2);
  if (lVar3 == 3) {
    bVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::operator()((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_00102a3c:
    bVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::operator()((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  else {
    if (3 < lVar3) goto LAB_00102a8e;
    if (lVar3 != 1) {
      if (lVar3 != 2) goto LAB_00102a8e;
      goto LAB_00102a3c;
    }
  }
  bVar1 = __gnu_cxx::__ops::
          _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          ::operator()((_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        *)&local_30,(__normal_iterator)local_20[0]);
  if (bVar1) {
    return (__normal_iterator)local_20[0];
  }
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_00102a8e:
  return (__normal_iterator)local_28;
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_equals_val<int const>,
   std::random_access_iterator_tag) */

__normal_iterator
std::
__find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_equals_val param_3,
          random_access_iterator_tag param_4)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  long lVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  undefined4 extraout_var_00;
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
  for (local_10 = CONCAT44(extraout_var,dVar2) >> 2; 0 < local_10; local_10 = local_10 + -1) {
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
  lVar3 = CONCAT44(extraout_var_00,dVar2);
  if (lVar3 == 3) {
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_00102bfb:
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  else {
    if (3 < lVar3) goto LAB_00102c4d;
    if (lVar3 != 1) {
      if (lVar3 != 2) goto LAB_00102c4d;
      goto LAB_00102bfb;
    }
  }
  bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                    ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
  if (bVar1) {
    return (__normal_iterator)local_20[0];
  }
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_00102c4d:
  return (__normal_iterator)local_28;
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+=
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this,long param_1)

{
  *(long *)this = *(long *)this + param_1 * 4;
  return this;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + -4;
  return this;
}



/* bool __gnu_cxx::__ops::_Iter_equals_val<int
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
          (_Iter_equals_val<int_const> *this,__normal_iterator param_1)

{
  int *piVar1;
  undefined4 in_register_00000034;
  undefined8 local_18;
  int **local_10;
  
  local_18 = CONCAT44(in_register_00000034,param_1);
  local_10 = (int **)this;
  piVar1 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_18);
  return *piVar1 == **local_10;
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



/* bool __gnu_cxx::__ops::_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >) */

bool __thiscall
__gnu_cxx::__ops::
_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
operator()(_Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
           *this,__normal_iterator param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_register_00000034;
  undefined8 local_28;
  _Iter_equals_iter<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  local_20 = this;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_28);
  iVar1 = *piVar2;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             local_20);
  return iVar1 == *piVar2;
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


