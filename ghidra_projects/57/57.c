
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00104fe8;
  if (PTR___gmon_start___00104fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00104fe8)();
  }
  return (int)puVar1;
}



void FUN_00101020(void)

{
  (*(code *)PTR_00104f60)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00104fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00104f68)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00104f70)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00104f78)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00104f80)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00104f88)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104f90)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00104f98)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00104fa0)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00104fa8)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00104fb0)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00104fb8)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104fc0)();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00104fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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
    if (PTR___cxa_finalize_00104fc8 != (undefined *)0x0) {
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
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  ulong uVar3;
  int *piVar4;
  basic_ostream *pbVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  vector<int,std::allocator<int>> local_98 [32];
  vector<int,std::allocator<int>> local_78 [32];
  allocator local_58 [32];
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<int>::allocator();
                    /* try { // try from 001012e7 to 001012eb has its CatchHandler @ 00101733 */
  std::vector<int,std::allocator<int>>::vector(local_98,7,(allocator *)&local_38);
  std::allocator<int>::~allocator((allocator<int> *)&local_38);
                    /* try { // try from 0010130c to 001013a1 has its CatchHandler @ 001017d2 */
  std::operator<<((basic_ostream *)std::cout,"Vector : ");
  local_b0 = 0;
  while( true ) {
    uVar6 = (ulong)local_b0;
    uVar3 = std::vector<int,std::allocator<int>>::size();
    if (uVar3 <= uVar6) break;
    piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[](local_98,(long)local_b0);
    pbVar5 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar4);
    std::operator<<(pbVar5," ");
    local_b0 = local_b0 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00104fd0);
  std::allocator<int>::allocator();
  local_38 = CONCAT44(local_38._4_4_,2);
                    /* try { // try from 001013c9 to 001013cd has its CatchHandler @ 00101751 */
  std::vector<int,std::allocator<int>>::vector(local_78,7,(int *)&local_38,local_58);
  std::allocator<int>::~allocator((allocator<int> *)local_58);
                    /* try { // try from 001013ee to 0010147d has its CatchHandler @ 001017bd */
  std::operator<<((basic_ostream *)std::cout,"\nVector 2 : ");
  local_ac = 0;
  while( true ) {
    uVar6 = (ulong)local_ac;
    uVar3 = std::vector<int,std::allocator<int>>::size();
    if (uVar3 <= uVar6) break;
    piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[](local_78,(long)local_ac);
    pbVar5 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar4);
    std::operator<<(pbVar5," ");
    local_ac = local_ac + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00104fd0);
  std::allocator<int>::allocator();
                    /* try { // try from 0010149a to 0010149e has its CatchHandler @ 00101766 */
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_58,7,(allocator *)&local_38);
  std::allocator<int>::~allocator((allocator<int> *)&local_38);
  local_b4 = 4;
  local_38 = std::vector<int,std::allocator<int>>::end();
  _Var1 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator-
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38,2);
  local_a0 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_a0,1);
                    /* try { // try from 00101513 to 001015bb has its CatchHandler @ 001017a8 */
  std::fill<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            (_Var2,_Var1,&local_b4);
  std::operator<<((basic_ostream *)std::cout,"\nVector 3 : ");
  local_a8 = 0;
  while( true ) {
    uVar6 = (ulong)local_a8;
    uVar3 = std::vector<int,std::allocator<int>>::size();
    if (uVar3 <= uVar6) break;
    piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)local_58,(long)local_a8);
    pbVar5 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar4);
    std::operator<<(pbVar5," ");
    local_a8 = local_a8 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00104fd0);
  std::allocator<int>::allocator();
                    /* try { // try from 001015de to 001015e2 has its CatchHandler @ 0010177b */
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_38,7,(allocator *)&local_a0);
  std::allocator<int>::~allocator((allocator<int> *)&local_a0);
  local_b4 = 9;
  local_a0 = std::vector<int,std::allocator<int>>::begin();
  _Var1 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_a0,2);
                    /* try { // try from 00101638 to 001016e0 has its CatchHandler @ 00101793 */
  std::fill_n<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,int>
            (_Var1,4,&local_b4);
  std::operator<<((basic_ostream *)std::cout,"\nVector 4 : ");
  local_a4 = 0;
  while( true ) {
    uVar6 = (ulong)local_a4;
    uVar3 = std::vector<int,std::allocator<int>>::size();
    if (uVar3 <= uVar6) break;
    piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)&local_38,(long)local_a4);
    pbVar5 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar4);
    std::operator<<(pbVar5," ");
    local_a4 = local_a4 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00104fd0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_58);
  std::vector<int,std::allocator<int>>::~vector(local_78);
  std::vector<int,std::allocator<int>>::~vector(local_98);
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
    __cxa_atexit(PTR__Init_00104ff8,&std::__ioinit,&__dso_handle);
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
/* std::__size_to_integer(int) */

int std::__size_to_integer(int param_1)

{
  return param_1;
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



/* std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&) */

void __thiscall
std::vector<int,std::allocator<int>>::vector
          (vector<int,std::allocator<int>> *this,ulong param_1,allocator *param_2)

{
  ulong uVar1;
  
  uVar1 = _S_check_init_len(param_1,param_2);
  _Vector_base<int,std::allocator<int>>::_Vector_base
            ((_Vector_base<int,std::allocator<int>> *)this,uVar1,param_2);
                    /* try { // try from 00101967 to 0010196b has its CatchHandler @ 0010196e */
  _M_default_initialize(this,param_1);
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



/* std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int>
   const&) */

void __thiscall
std::vector<int,std::allocator<int>>::vector
          (vector<int,std::allocator<int>> *this,ulong param_1,int *param_2,allocator *param_3)

{
  ulong uVar1;
  
  uVar1 = _S_check_init_len(param_1,param_3);
  _Vector_base<int,std::allocator<int>>::_Vector_base
            ((_Vector_base<int,std::allocator<int>> *)this,uVar1,param_3);
                    /* try { // try from 00101a81 to 00101a85 has its CatchHandler @ 00101a88 */
  _M_fill_initialize(this,param_1,param_2);
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this,long param_1)

{
  long in_FS_OFFSET;
  int *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (int *)(param_1 * 4 + *(long *)this);
  __normal_iterator((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18,
                    &local_20);
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
/* void std::fill<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

void std::fill<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
               (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  __fill_a<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            (param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::fill_n<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int, int
   const&) */

__normal_iterator
std::fill_n<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,int>
          (__normal_iterator param_1,int param_2,int *param_3)

{
  int iVar1;
  __normal_iterator _Var2;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  iVar1 = __size_to_integer(param_2);
  _Var2 = __fill_n_a<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,int>
                    ((__normal_iterator)local_10,iVar1,param_3,iVar1);
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



/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<int>::~allocator((allocator<int> *)this);
  return;
}



/* std::_Vector_base<int, std::allocator<int> >::_Vector_base(unsigned long, std::allocator<int>
   const&) */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_base
          (_Vector_base<int,std::allocator<int>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00101d8c to 00101d90 has its CatchHandler @ 00101d93 */
  _M_create_storage(this,param_1);
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



/* std::vector<int, std::allocator<int> >::_M_default_initialize(unsigned long) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_default_initialize
          (vector<int,std::allocator<int>> *this,ulong param_1)

{
  allocator *paVar1;
  int *piVar2;
  
  paVar1 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  piVar2 = __uninitialized_default_n_a<int*,unsigned_long,int>(*(int **)this,param_1,paVar1);
  *(int **)(this + 8) = piVar2;
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



/* std::vector<int, std::allocator<int> >::_M_fill_initialize(unsigned long, int const&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_fill_initialize
          (vector<int,std::allocator<int>> *this,ulong param_1,int *param_2)

{
  allocator *paVar1;
  int *piVar2;
  
  paVar1 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  piVar2 = __uninitialized_fill_n_a<int*,unsigned_long,int,int>
                     (*(int **)this,param_1,param_2,paVar1);
  *(int **)(this + 8) = piVar2;
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
/* void std::__fill_a<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

void std::__fill_a<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
               (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  __fill_a1<int*,std::vector<int,std::allocator<int>>,int>(param_1,param_2,param_3);
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__fill_n_a<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int, int
   const&, std::random_access_iterator_tag) */

__normal_iterator
std::__fill_n_a<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,int>
          (__normal_iterator param_1,int param_2,int *param_3,random_access_iterator_tag param_4)

{
  __normal_iterator _Var1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  if (0 < param_2) {
    _Var1 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10,
                       (long)param_2);
    __fill_a<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
              ((__normal_iterator)local_10,_Var1,param_3);
    param_1 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                        ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10,
                         (long)param_2);
  }
  return param_1;
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



/* std::allocator<int>::allocator(std::allocator<int> const&) */

void std::allocator<int>::allocator(allocator *param_1)

{
  __gnu_cxx::new_allocator<int>::new_allocator((new_allocator *)param_1);
  return;
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



/* std::_Vector_base<int, std::allocator<int> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_create_storage
          (_Vector_base<int,std::allocator<int>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = *(long *)this + param_1 * 4;
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
/* int* std::__uninitialized_default_n_a<int*, unsigned long, int>(int*, unsigned long,
   std::allocator<int>&) */

int * std::__uninitialized_default_n_a<int*,unsigned_long,int>
                (int *param_1,ulong param_2,allocator *param_3)

{
  int *piVar1;
  
  piVar1 = __uninitialized_default_n<int*,unsigned_long>(param_1,param_2);
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
/* int* std::__uninitialized_fill_n_a<int*, unsigned long, int, int>(int*, unsigned long, int
   const&, std::allocator<int>&) */

int * std::__uninitialized_fill_n_a<int*,unsigned_long,int,int>
                (int *param_1,ulong param_2,int *param_3,allocator *param_4)

{
  int *piVar1;
  
  piVar1 = uninitialized_fill_n<int*,unsigned_long,int>(param_1,param_2,param_3);
  return piVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__fill_a1<int*, std::vector<int, std::allocator<int> >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

void std::__fill_a1<int*,std::vector<int,std::allocator<int>>,int>
               (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  int *piVar1;
  int **ppiVar2;
  
  ppiVar2 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  piVar1 = *ppiVar2;
  ppiVar2 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  __fill_a1<int*,int>(*ppiVar2,piVar1,param_3);
  return;
}



/* std::allocator_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */

void std::allocator_traits<std::allocator<int>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<int>::max_size();
  return;
}



/* __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&) */

void __gnu_cxx::new_allocator<int>::new_allocator(new_allocator *param_1)

{
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



/* std::allocator_traits<std::allocator<int> >::deallocate(std::allocator<int>&, int*, unsigned
   long) */

void std::allocator_traits<std::allocator<int>>::deallocate
               (allocator *param_1,int *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<int>::deallocate((new_allocator<int> *)param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__uninitialized_default_n<int*, unsigned long>(int*, unsigned long) */

int * std::__uninitialized_default_n<int*,unsigned_long>(int *param_1,ulong param_2)

{
  int *piVar1;
  
  piVar1 = __uninitialized_default_n_1<true>::__uninit_default_n<int*,unsigned_long>
                     (param_1,param_2);
  return piVar1;
}



/* void std::_Destroy_aux<true>::__destroy<int*>(int*, int*) */

void std::_Destroy_aux<true>::__destroy<int*>(int *param_1,int *param_2)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::uninitialized_fill_n<int*, unsigned long, int>(int*, unsigned long, int const&) */

int * std::uninitialized_fill_n<int*,unsigned_long,int>(int *param_1,ulong param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<int*,unsigned_long,int>
                     (param_1,param_2,param_3);
  return piVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__enable_if<std::__is_scalar<int>::__value, void>::__type std::__fill_a1<int*,
   int>(int*, int*, int const&) */

__type std::__fill_a1<int*,int>(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *local_20;
  
  iVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = iVar1;
  }
  return (__type)local_20;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<int>::max_size() const */

void __gnu_cxx::new_allocator<int>::max_size(void)

{
  _M_max_size();
  return;
}



/* std::allocator_traits<std::allocator<int> >::allocate(std::allocator<int>&, unsigned long) */

void std::allocator_traits<std::allocator<int>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<int>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<int>::deallocate(new_allocator<int> *this,int *param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 4);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__addressof<int>(int&) */

int * std::__addressof<int>(int *param_1)

{
  return param_1;
}



/* int* std::__uninitialized_default_n_1<true>::__uninit_default_n<int*, unsigned long>(int*,
   unsigned long) */

int * std::__uninitialized_default_n_1<true>::__uninit_default_n<int*,unsigned_long>
                (int *param_1,ulong param_2)

{
  int *piVar1;
  int *local_20;
  
  local_20 = param_1;
  if (param_2 != 0) {
    piVar1 = __addressof<int>(param_1);
    _Construct<int>(piVar1);
    local_20 = fill_n<int*,unsigned_long,int>(param_1 + 1,param_2 - 1,piVar1);
  }
  return local_20;
}



/* int* std::__uninitialized_fill_n<true>::__uninit_fill_n<int*, unsigned long, int>(int*, unsigned
   long, int const&) */

int * std::__uninitialized_fill_n<true>::__uninit_fill_n<int*,unsigned_long,int>
                (int *param_1,ulong param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = fill_n<int*,unsigned_long,int>(param_1,param_2,param_3);
  return piVar1;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Construct<int>(int*) */

void std::_Construct<int>(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(4,param_1);
  *puVar1 = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::fill_n<int*, unsigned long, int>(int*, unsigned long, int const&) */

int * std::fill_n<int*,unsigned_long,int>(int *param_1,ulong param_2,int *param_3)

{
  ulong uVar1;
  int *piVar2;
  int *local_10;
  
  local_10 = param_1;
  __iterator_category<int*>(&local_10);
  uVar1 = __size_to_integer(param_2);
  piVar2 = __fill_n_a<int*,unsigned_long,int>
                     (local_10,uVar1,param_3,(random_access_iterator_tag)uVar1);
  return piVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<int*>::iterator_category std::__iterator_category<int*>(int* const&) */

iterator_category std::__iterator_category<int*>(int **param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__fill_n_a<int*, unsigned long, int>(int*, unsigned long, int const&,
   std::random_access_iterator_tag) */

int * std::__fill_n_a<int*,unsigned_long,int>
                (int *param_1,ulong param_2,int *param_3,random_access_iterator_tag param_4)

{
  if (param_2 != 0) {
    __fill_a<int*,int>(param_1,param_1 + param_2,param_3);
    param_1 = param_1 + param_2;
  }
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__fill_a<int*, int>(int*, int*, int const&) */

void std::__fill_a<int*,int>(int *param_1,int *param_2,int *param_3)

{
  __fill_a1<int*,int>(param_1,param_2,param_3);
  return;
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


