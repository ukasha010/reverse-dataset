
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00107fe8;
  if (PTR___gmon_start___00107fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00107fe8)();
  }
  return (int)puVar1;
}



void FUN_00101020(void)

{
  (*(code *)PTR_00107f58)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00107fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00107f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00107f68)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00107f70)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00107f78)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00107f80)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00107f88)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00107f90)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00107f98)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00107fa0)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00107fa8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00107fb0)();
  return pvVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00107fb8)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00107fc0)();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00107fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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
    if (PTR___cxa_finalize_00107fc8 != (undefined *)0x0) {
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
  __normal_iterator _Var3;
  __normal_iterator _Var4;
  ulong uVar5;
  basic_ostream *pbVar6;
  int *piVar7;
  long in_FS_OFFSET;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  vector<int,std::allocator<int>> local_a8 [32];
  int local_88 [8];
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
  local_68 = 5;
  local_64 = 4;
  local_60 = 3;
  local_5c = 6;
  local_58 = 0x15;
  local_54 = 7;
  local_50 = 1;
  local_4c = 8;
  std::allocator<int>::allocator();
                    /* try { // try from 00101364 to 00101368 has its CatchHandler @ 001017a6 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_a8,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)local_88);
                    /* try { // try from 00101389 to 00101650 has its CatchHandler @ 001017f1 */
  std::operator<<((basic_ostream *)std::cout,"Vector : ");
  local_bc = 0;
  while( true ) {
    uVar5 = std::vector<int,std::allocator<int>>::size();
    if (uVar5 <= (ulong)(long)local_bc) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_a8,(long)local_bc);
    pbVar6 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar6," ");
    local_bc = local_bc + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  _Var1 = std::vector<int,std::allocator<int>>::end();
  local_88[0] = 6;
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                    (_Var3,_Var2,local_88);
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  std::nth_element<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var3,_Var2,_Var1);
  std::operator<<((basic_ostream *)std::cout,"After applying nth_element func, Vector : ");
  local_b8 = 0;
  while( true ) {
    uVar5 = std::vector<int,std::allocator<int>>::size();
    if (uVar5 <= (ulong)(long)local_b8) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_a8,(long)local_b8);
    pbVar6 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar6," ");
    local_b8 = local_b8 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  _Var1 = std::vector<int,std::allocator<int>>::end();
  local_88[0] = 6;
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                    (_Var3,_Var2,local_88);
  _Var4 = std::vector<int,std::allocator<int>>::begin();
  std::
  nth_element<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::greater<int>>
            (_Var4,_Var2,_Var1,_Var3);
  std::operator<<((basic_ostream *)std::cout,"After applying nth_element func, Vector : ");
  local_b4 = 0;
  while( true ) {
    uVar5 = std::vector<int,std::allocator<int>>::size();
    if (uVar5 <= (ulong)(long)local_b4) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_a8,(long)local_b4);
    pbVar6 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar6," ");
    local_b4 = local_b4 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  local_68 = 5;
  local_64 = 4;
  local_60 = 1;
  local_5c = 2;
  local_58 = 3;
  std::allocator<int>::allocator();
                    /* try { // try from 001016b3 to 001016b7 has its CatchHandler @ 001017c4 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_88,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)&local_b0);
  _Var1 = std::vector<int,std::allocator<int>>::end();
  uVar5 = std::vector<int,std::allocator<int>>::size();
  local_b0 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_b0,
                     uVar5 >> 1);
  _Var3 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 00101725 to 00101772 has its CatchHandler @ 001017dc */
  std::nth_element<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var3,_Var2,_Var1);
  pbVar6 = std::operator<<((basic_ostream *)std::cout,"The median of the array is ");
  uVar5 = std::vector<int,std::allocator<int>>::size();
  piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[]
                            ((vector<int,std::allocator<int>> *)local_88,uVar5 >> 1);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar6,*piVar7);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_88);
  std::vector<int,std::allocator<int>>::~vector(local_a8);
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
    __cxa_atexit(PTR__Init_00107ff8,&std::__ioinit,&__dso_handle);
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



/* __gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(__gnu_cxx::__ops::_Iter_less_iter) */

void __thiscall
__gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(_Iter_less_val *this,_Iter_less_iter param_1)

{
  return;
}



/* __gnu_cxx::__ops::__val_comp_iter(__gnu_cxx::__ops::_Iter_less_iter) */

void __gnu_cxx::__ops::__val_comp_iter(_Iter_less_iter param_1)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__lg(long) */

long std::__lg(long param_1)

{
  long lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; (ulong)param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (long)(int)(0x3f - ((uint)lVar1 ^ 0x3f));
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
                    /* try { // try from 001019c5 to 001019c9 has its CatchHandler @ 001019cc */
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
   std::find<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

__normal_iterator
std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
          (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  _Iter_equals_val _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __gnu_cxx::__ops::__iter_equals_val<int_const>(param_3);
  _Var2 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                    (param_1,param_2,_Var1);
  return _Var2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::nth_element<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::nth_element<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  long lVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter in_R8D;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_10,(__normal_iterator *)&local_20);
  if (!bVar1) {
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_20);
    if (!bVar1) {
      bVar1 = false;
      goto LAB_00101bc2;
    }
  }
  bVar1 = true;
LAB_00101bc2:
  if (!bVar1) {
    __gnu_cxx::__ops::__iter_less_iter();
    dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    lVar3 = __lg(CONCAT44(extraout_var,dVar2));
    __introselect<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
              ((__normal_iterator)local_10,(__normal_iterator)local_18,(__normal_iterator)local_20,
               lVar3 * 2,in_R8D);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::nth_element<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, std::greater<int> >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, std::greater<int>)
    */

void std::
     nth_element<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::greater<int>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               greater param_4)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  long lVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  greater gVar4;
  undefined4 in_register_0000003c;
  undefined8 *puVar5;
  _Iter_comp_iter in_R8D;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  puVar5 = &local_10;
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)puVar5,(__normal_iterator *)&local_20);
  gVar4 = (greater)puVar5;
  if (!bVar1) {
    puVar5 = &local_18;
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)puVar5,(__normal_iterator *)&local_20);
    gVar4 = (greater)puVar5;
    if (!bVar1) {
      bVar1 = false;
      goto LAB_00101c55;
    }
  }
  bVar1 = true;
LAB_00101c55:
  if (!bVar1) {
    __gnu_cxx::__ops::__iter_comp_iter<std::greater<int>>(gVar4);
    dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    lVar3 = __lg(CONCAT44(extraout_var,dVar2));
    __introselect<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
              ((__normal_iterator)local_10,(__normal_iterator)local_18,(__normal_iterator)local_20,
               lVar3 * 2,in_R8D);
  }
  return;
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
/* void std::__introselect<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long,
   __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __introselect<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               long param_4,_Iter_less_iter param_5)

{
  bool bVar1;
  __normal_iterator _Var2;
  difference_type dVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_4;
  do {
    dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_30,(__normal_iterator *)&local_20);
    _Var2 = (__normal_iterator)local_30;
    if (CONCAT44(extraout_var_00,dVar3) < 4) {
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_20,_Var2,_Var2);
LAB_00102149:
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (local_38 == 0) {
      _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                        ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28,1
                        );
      __heap_select<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_20,_Var2,(__normal_iterator)local_30,_Var2);
      iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                ((__normal_iterator)local_20,(__normal_iterator)local_28);
      goto LAB_00102149;
    }
    local_38 = local_38 + -1;
    _Var2 = __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
                      ((__normal_iterator)local_20,_Var2,_Var2);
    local_18 = CONCAT44(extraout_var,_Var2);
    bVar1 = __gnu_cxx::operator<=((__normal_iterator *)&local_18,(__normal_iterator *)&local_28);
    if (bVar1) {
      local_20 = local_18;
    }
    else {
      local_30 = local_18;
    }
  } while( true );
}



/* __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >
   __gnu_cxx::__ops::__iter_comp_iter<std::greater<int> >(std::greater<int>) */

_Iter_comp_iter __gnu_cxx::__ops::__iter_comp_iter<std::greater<int>>(greater param_1)

{
  _Iter_comp_iter unaff_EBX;
  long in_FS_OFFSET;
  greater local_29 [2];
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::move<std::greater<int>&>(local_29);
  _Iter_comp_iter<std::greater<int>>::_Iter_comp_iter((greater)&local_21);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_EBX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introselect<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

void std::
     __introselect<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               long param_4,_Iter_comp_iter param_5)

{
  bool bVar1;
  __normal_iterator _Var2;
  difference_type dVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_4;
  do {
    dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_30,(__normal_iterator *)&local_20);
    _Var2 = (__normal_iterator)local_30;
    if (CONCAT44(extraout_var_00,dVar3) < 4) {
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
                ((__normal_iterator)local_20,_Var2,_Var2);
LAB_0010229d:
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (local_38 == 0) {
      _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                        ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28,1
                        );
      __heap_select<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
                ((__normal_iterator)local_20,_Var2,(__normal_iterator)local_30,_Var2);
      iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                ((__normal_iterator)local_20,(__normal_iterator)local_28);
      goto LAB_0010229d;
    }
    local_38 = local_38 + -1;
    _Var2 = __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
                      ((__normal_iterator)local_20,_Var2,_Var2);
    local_18 = CONCAT44(extraout_var,_Var2);
    bVar1 = __gnu_cxx::operator<=((__normal_iterator *)&local_18,(__normal_iterator *)&local_28);
    if (bVar1) {
      local_20 = local_18;
    }
    else {
      local_30 = local_18;
    }
  } while( true );
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



/* __gnu_cxx::__ops::_Iter_equals_val<int const>::_Iter_equals_val(int const&) */

void __thiscall
__gnu_cxx::__ops::_Iter_equals_val<int_const>::_Iter_equals_val
          (_Iter_equals_val<int_const> *this,int *param_1)

{
  *(int **)this = param_1;
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
LAB_00102602:
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  else {
    if (3 < lVar3) goto LAB_00102654;
    if (lVar3 != 1) {
      if (lVar3 != 2) goto LAB_00102654;
      goto LAB_00102602;
    }
  }
  bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                    ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
  if (bVar1) {
    return (__normal_iterator)local_20[0];
  }
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_00102654:
  return (__normal_iterator)local_28;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __heap_select<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _Iter_less_iter param_4)

{
  bool bVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,param_2,(_Iter_less_iter *)&local_31);
  local_18 = local_28;
  while( true ) {
    bVar1 = __gnu_cxx::operator<((__normal_iterator *)&local_18,(__normal_iterator *)&local_30);
    if (!bVar1) break;
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                      ((_Iter_less_iter *)&local_31,(__normal_iterator)local_18,
                       (__normal_iterator)local_20);
    if (bVar1) {
      __pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_20,(__normal_iterator)local_28,(__normal_iterator)local_18
                 ,(_Iter_less_iter *)&local_31);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter) */

__normal_iterator
std::
__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_less_iter param_3)

{
  difference_type dVar1;
  __normal_iterator _Var2;
  __normal_iterator _Var3;
  int extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter in_R8D;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  local_28 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,
                        CONCAT44(extraout_var,dVar1) - ((long)extraout_var >> 0x1f) >> 1);
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator-
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38,1);
  _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,1);
  __move_median_to_first<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
            ((__normal_iterator)local_30,_Var3,(__normal_iterator)local_28,_Var2,in_R8D);
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,1);
  _Var2 = __unguarded_partition<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
                    (_Var2,(__normal_iterator)local_38,(__normal_iterator)local_30,_Var2);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var2;
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&) */

bool __gnu_cxx::operator<=(__normal_iterator *param_1,__normal_iterator *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  uVar1 = *puVar2;
  puVar2 = (ulong *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  return uVar1 <= *puVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,_Iter_less_iter param_3)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  int *piVar4;
  undefined4 *puVar5;
  _Val_less_iter _Var6;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter *this;
  long in_FS_OFFSET;
  _Iter_less_iter local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_28;
  long local_20;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_40,(__normal_iterator *)&local_48);
  if (!bVar2) {
    local_28 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40,1
                         );
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_48), bVar2)
    {
      this = &local_49;
      _Var6 = (_Val_less_iter)local_28;
      bVar2 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                        (this,_Var6,(__normal_iterator)local_40[0]);
      if (bVar2) {
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_28);
        piVar4 = (int *)move<int&>(piVar4);
        local_2c = *piVar4;
        _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28
                           ,1);
        move_backward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_40[0],(__normal_iterator)local_28,_Var3);
        puVar5 = (undefined4 *)move<int&>(&local_2c);
        uVar1 = *puVar5;
        puVar5 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40
                           );
        *puVar5 = uVar1;
      }
      else {
        __gnu_cxx::__ops::__val_comp_iter((_Iter_less_iter)this);
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Val_less_iter>
                  ((__normal_iterator)local_28,_Var6);
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::greater<int>&>::type&&
   std::move<std::greater<int>&>(std::greater<int>&) */

type * std::move<std::greater<int>&>(greater *param_1)

{
  return (type *)param_1;
}



/* __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >::_Iter_comp_iter(std::greater<int>) */

void __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::_Iter_comp_iter(greater param_1)

{
  undefined4 in_register_0000003c;
  undefined local_11 [9];
  
  local_11._1_8_ = CONCAT44(in_register_0000003c,param_1);
  std::move<std::greater<int>&>((greater *)local_11);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> > >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

void std::
     __heap_select<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _Iter_comp_iter param_4)

{
  bool bVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
            (param_1,param_2,(_Iter_comp_iter *)&local_31);
  local_18 = local_28;
  while( true ) {
    bVar1 = __gnu_cxx::operator<((__normal_iterator *)&local_18,(__normal_iterator *)&local_30);
    if (!bVar1) break;
    bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                      ((_Iter_comp_iter<std::greater<int>> *)&local_31,(__normal_iterator)local_18,
                       (__normal_iterator)local_20);
    if (bVar1) {
      __pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
                ((__normal_iterator)local_20,(__normal_iterator)local_28,(__normal_iterator)local_18
                 ,(_Iter_comp_iter *)&local_31);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

__normal_iterator
std::
__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_comp_iter param_3)

{
  difference_type dVar1;
  __normal_iterator _Var2;
  __normal_iterator _Var3;
  int extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_comp_iter in_R8D;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  local_28 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,
                        CONCAT44(extraout_var,dVar1) - ((long)extraout_var >> 0x1f) >> 1);
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator-
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38,1);
  _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,1);
  __move_median_to_first<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
            ((__normal_iterator)local_30,_Var3,(__normal_iterator)local_28,_Var2,in_R8D);
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,1);
  _Var2 = __unguarded_partition<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
                    (_Var2,(__normal_iterator)local_38,(__normal_iterator)local_30,_Var2);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,__normal_iterator param_2,_Iter_comp_iter param_3)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  int *piVar4;
  undefined4 *puVar5;
  _Val_comp_iter _Var6;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_comp_iter<std::greater<int>> *this;
  long in_FS_OFFSET;
  _Iter_comp_iter<std::greater<int>> local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_28;
  long local_20;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_40,(__normal_iterator *)&local_48);
  if (!bVar2) {
    local_28 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40,1
                         );
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_48), bVar2)
    {
      this = &local_49;
      _Var6 = (_Val_comp_iter)local_28;
      bVar2 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                        (this,_Var6,(__normal_iterator)local_40[0]);
      if (bVar2) {
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_28);
        piVar4 = (int *)move<int&>(piVar4);
        local_2c = *piVar4;
        _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28
                           ,1);
        move_backward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_40[0],(__normal_iterator)local_28,_Var3);
        puVar5 = (undefined4 *)move<int&>(&local_2c);
        uVar1 = *puVar5;
        puVar5 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40
                           );
        *puVar5 = uVar1;
      }
      else {
        __gnu_cxx::__ops::__val_comp_iter<std::greater<int>>((_Iter_comp_iter)this);
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Val_comp_iter<std::greater<int>>>
                  ((__normal_iterator)local_28,_Var6);
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + 4;
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_less_iter&) */

void std::
     __make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,_Iter_less_iter *param_3)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *piVar2;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter in_R8D;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)local_40);
  if (1 < CONCAT44(extraout_var,dVar1)) {
    dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)local_40);
    local_18 = CONCAT44(extraout_var_00,dVar1);
    local_20 = (local_18 + -2) / 2;
    while( true ) {
      local_28 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40
                            ,local_20);
      piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_28);
      piVar2 = (int *)move<int&>(piVar2);
      local_2c = *piVar2;
      piVar2 = (int *)move<int&>(&local_2c);
      __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_40[0],local_20,local_18,*piVar2,in_R8D);
      if (local_20 == 0) break;
      local_20 = local_20 + -1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > const&) */

bool __gnu_cxx::operator<(__normal_iterator *param_1,__normal_iterator *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  uVar1 = *puVar2;
  puVar2 = (ulong *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  return uVar1 < *puVar2;
}



/* bool 
   __gnu_cxx::__ops::_Iter_less_iter::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) const */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_iter::operator()
          (_Iter_less_iter *this,__normal_iterator param_1,__normal_iterator param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined8 local_30;
  undefined8 local_28;
  _Iter_less_iter *local_20;
  
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
  return iVar1 < *piVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__pop_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_less_iter&) */

void std::
     __pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _Iter_less_iter *param_4)

{
  undefined4 uVar1;
  int iVar2;
  difference_type dVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 extraout_var;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter in_R8D;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_40);
  piVar4 = (int *)move<int&>(piVar4);
  local_24 = *piVar4;
  piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_30);
  puVar5 = (undefined4 *)move<int&>(piVar4);
  uVar1 = *puVar5;
  puVar5 = (undefined4 *)
           __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                     ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
  *puVar5 = uVar1;
  piVar4 = (int *)move<int&>(&local_24);
  iVar2 = *piVar4;
  dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_less_iter>
            ((__normal_iterator)local_30,0,CONCAT44(extraout_var,dVar3),iVar2,in_R8D);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
/* void std::__move_median_to_first<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __move_median_to_first<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               __normal_iterator param_4,_Iter_less_iter param_5)

{
  bool bVar1;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  local_28 = CONCAT44(in_register_0000000c,param_4);
  bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()(&local_29,param_2,param_3);
  if (bVar1) {
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                      (&local_29,(__normal_iterator)local_20,(__normal_iterator)local_28);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                ((__normal_iterator)local_10,(__normal_iterator)local_20);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                        (&local_29,(__normal_iterator)local_18,(__normal_iterator)local_28);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_28);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_18);
      }
    }
  }
  else {
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                      (&local_29,(__normal_iterator)local_18,(__normal_iterator)local_28);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                ((__normal_iterator)local_10,(__normal_iterator)local_18);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                        (&local_29,(__normal_iterator)local_20,(__normal_iterator)local_28);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_28);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_20);
      }
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__unguarded_partition<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_less_iter) */

__normal_iterator
std::
__unguarded_partition<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          _Iter_less_iter param_4)

{
  bool bVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    while( true ) {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                        (&local_21,(__normal_iterator)local_10,(__normal_iterator)local_20);
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
    while( true ) {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                        (&local_21,(__normal_iterator)local_20,(__normal_iterator)local_18);
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
    }
    bVar1 = __gnu_cxx::operator<((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
    if (!bVar1) break;
    iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              ((__normal_iterator)local_10,(__normal_iterator)local_18);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10);
  }
  return (__normal_iterator)local_10;
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
   std::move_backward<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
move_backward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_2);
  _Var2 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1);
  _Var1 = __copy_move_backward_a<true,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var2,_Var1,param_3);
  return _Var1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Val_less_iter>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__ops::_Val_less_iter) */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Val_less_iter>
               (__normal_iterator param_1,_Val_less_iter param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Val_less_iter local_41;
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_28;
  long local_20;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             local_40);
  piVar3 = (int *)move<int&>(piVar3);
  local_2c = *piVar3;
  local_28 = local_40[0];
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
  while( true ) {
    bVar2 = __gnu_cxx::__ops::_Val_less_iter::operator()
                      (&local_41,&local_2c,(__normal_iterator)local_28);
    if (!bVar2) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_28);
    puVar4 = (undefined4 *)move<int&>(piVar3);
    uVar1 = *puVar4;
    puVar4 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40);
    *puVar4 = uVar1;
    local_40[0] = local_28;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
  }
  puVar4 = (undefined4 *)move<int&>(&local_2c);
  uVar1 = *puVar4;
  puVar4 = (undefined4 *)
           __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                     ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40);
  *puVar4 = uVar1;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> > >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >&) */

void std::
     __make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,__normal_iterator param_2,_Iter_comp_iter *param_3)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *piVar2;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_comp_iter in_R8D;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)local_40);
  if (1 < CONCAT44(extraout_var,dVar1)) {
    dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)local_40);
    local_18 = CONCAT44(extraout_var_00,dVar1);
    local_20 = (local_18 + -2) / 2;
    while( true ) {
      local_28 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40
                            ,local_20);
      piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_28);
      piVar2 = (int *)move<int&>(piVar2);
      local_2c = *piVar2;
      piVar2 = (int *)move<int&>(&local_2c);
      __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
                ((__normal_iterator)local_40[0],local_20,local_18,*piVar2,in_R8D);
      if (local_20 == 0) break;
      local_20 = local_20 + -1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
          (_Iter_comp_iter<std::greater<int>> *this,__normal_iterator param_1,
          __normal_iterator param_2)

{
  undefined uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined8 local_30;
  undefined8 local_28;
  _Iter_comp_iter<std::greater<int>> *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  local_30 = CONCAT44(in_register_00000014,param_2);
  local_20 = this;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_30);
  piVar3 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_28);
  uVar1 = std::greater<int>::operator()((greater<int> *)this,piVar3,piVar2);
  return (bool)uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__pop_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> > >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >&) */

void std::
     __pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _Iter_comp_iter *param_4)

{
  undefined4 uVar1;
  int iVar2;
  difference_type dVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 extraout_var;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_comp_iter in_R8D;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_40);
  piVar4 = (int *)move<int&>(piVar4);
  local_24 = *piVar4;
  piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_30);
  puVar5 = (undefined4 *)move<int&>(piVar4);
  uVar1 = *puVar5;
  puVar5 = (undefined4 *)
           __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                     ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
  *puVar5 = uVar1;
  piVar4 = (int *)move<int&>(&local_24);
  iVar2 = *piVar4;
  dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
            ((__normal_iterator)local_30,0,CONCAT44(extraout_var,dVar3),iVar2,in_R8D);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__move_median_to_first<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

void std::
     __move_median_to_first<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               __normal_iterator param_4,_Iter_comp_iter param_5)

{
  bool bVar1;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_comp_iter<std::greater<int>> local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  local_28 = CONCAT44(in_register_0000000c,param_4);
  bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                    (&local_29,param_2,param_3);
  if (bVar1) {
    bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                      (&local_29,(__normal_iterator)local_20,(__normal_iterator)local_28);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                ((__normal_iterator)local_10,(__normal_iterator)local_20);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                        (&local_29,(__normal_iterator)local_18,(__normal_iterator)local_28);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_28);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_18);
      }
    }
  }
  else {
    bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                      (&local_29,(__normal_iterator)local_18,(__normal_iterator)local_28);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                ((__normal_iterator)local_10,(__normal_iterator)local_18);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                        (&local_29,(__normal_iterator)local_20,(__normal_iterator)local_28);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_28);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_10,(__normal_iterator)local_20);
      }
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__unguarded_partition<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

__normal_iterator
std::
__unguarded_partition<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          _Iter_comp_iter param_4)

{
  bool bVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_comp_iter<std::greater<int>> local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    while( true ) {
      bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                        (&local_21,(__normal_iterator)local_10,(__normal_iterator)local_20);
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
    while( true ) {
      bVar1 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                        (&local_21,(__normal_iterator)local_20,(__normal_iterator)local_18);
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
    }
    bVar1 = __gnu_cxx::operator<((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
    if (!bVar1) break;
    iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              ((__normal_iterator)local_10,(__normal_iterator)local_18);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10);
  }
  return (__normal_iterator)local_10;
}



/* __gnu_cxx::__ops::_Val_comp_iter<std::greater<int> >
   __gnu_cxx::__ops::__val_comp_iter<std::greater<int>
   >(__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

_Val_comp_iter __gnu_cxx::__ops::__val_comp_iter<std::greater<int>>(_Iter_comp_iter param_1)

{
  _Iter_comp_iter *p_Var1;
  _Val_comp_iter unaff_EBX;
  long in_FS_OFFSET;
  _Iter_comp_iter local_29 [2];
  _Val_comp_iter<std::greater<int>> local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var1 = (_Iter_comp_iter *)
           std::move<__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>&>(local_29);
  _Val_comp_iter<std::greater<int>>::_Val_comp_iter(&local_21,p_Var1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_EBX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Val_comp_iter<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Val_comp_iter<std::greater<int> >) */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Val_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,_Val_comp_iter param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  _Val_comp_iter<std::greater<int>> local_41;
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_28;
  long local_20;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             local_40);
  piVar3 = (int *)move<int&>(piVar3);
  local_2c = *piVar3;
  local_28 = local_40[0];
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
  while( true ) {
    bVar2 = __gnu_cxx::__ops::_Val_comp_iter<std::greater<int>>::operator()
                      (&local_41,&local_2c,(__normal_iterator)local_28);
    if (!bVar2) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_28);
    puVar4 = (undefined4 *)move<int&>(piVar3);
    uVar1 = *puVar4;
    puVar4 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40);
    *puVar4 = uVar1;
    local_40[0] = local_28;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
  }
  puVar4 = (undefined4 *)move<int&>(&local_2c);
  uVar1 = *puVar4;
  puVar4 = (undefined4 *)
           __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                     ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40);
  *puVar4 = uVar1;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, int, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, long, long, int, __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,long param_2,long param_3,int param_4,
               _Iter_less_iter param_5)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  __normal_iterator _Var4;
  int *piVar5;
  undefined4 *puVar6;
  _Iter_less_iter _Var7;
  long lVar8;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined local_65;
  int local_64;
  ulong local_60;
  long local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_50[0] = CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = param_4;
  local_60 = param_3;
  local_30 = param_2;
  local_28 = param_2;
  while (_Var7 = (_Iter_less_iter)param_2, local_58 = local_30, local_30 < (long)(local_60 - 1) / 2)
  {
    local_30 = (local_30 + 1) * 2;
    _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                       local_30 + -1);
    _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                       local_30);
    bVar2 = __gnu_cxx::__ops::_Iter_less_iter::operator()((_Iter_less_iter *)&local_65,_Var4,_Var3);
    if (bVar2) {
      local_30 = local_30 + -1;
    }
    local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_30);
    piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_38);
    puVar6 = (undefined4 *)move<int&>(piVar5);
    uVar1 = *puVar6;
    param_2 = local_58;
    local_40 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_58);
    puVar6 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
    *puVar6 = uVar1;
  }
  if (((local_60 & 1) == 0) && (local_30 == (long)(local_60 - 2) / 2)) {
    local_30 = (local_30 + 1) * 2;
    local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_30 + -1);
    piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_38);
    puVar6 = (undefined4 *)move<int&>(piVar5);
    uVar1 = *puVar6;
    lVar8 = local_58;
    local_40 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_58);
    _Var7 = (_Iter_less_iter)lVar8;
    puVar6 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
    *puVar6 = uVar1;
    local_58 = local_30 + -1;
  }
  move<__gnu_cxx::__ops::_Iter_less_iter&>((_Iter_less_iter *)&local_65);
  __gnu_cxx::__ops::_Iter_less_val::_Iter_less_val((_Iter_less_val *)&local_38,_Var7);
  piVar5 = (int *)move<int&>(&local_64);
  __push_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_less_val>
            ((__normal_iterator)local_50[0],local_58,local_28,*piVar5,(_Iter_less_val *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__miter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::__miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__copy_move_backward_a<true, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
__copy_move_backward_a<true,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_3);
  piVar3 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_2);
  piVar4 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_1);
  piVar2 = __copy_move_backward_a1<true,int*,int*>(piVar4,piVar3,piVar2);
  _Var1 = __niter_wrap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                    (param_3,piVar2);
  return _Var1;
}



/* bool __gnu_cxx::__ops::_Val_less_iter::TEMPNAMEPLACEHOLDERVALUE(int&,
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
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, int, __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long, int,
   __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>>
               (__normal_iterator param_1,long param_2,long param_3,int param_4,
               _Iter_comp_iter param_5)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  __normal_iterator _Var4;
  int *piVar5;
  undefined4 *puVar6;
  _Iter_comp_iter *p_Var7;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined local_65;
  int local_64;
  ulong local_60;
  long local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_50[0] = CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = param_4;
  local_60 = param_3;
  local_30 = param_2;
  local_28 = param_2;
  while (local_58 = local_30, local_30 < (long)(local_60 - 1) / 2) {
    local_30 = (local_30 + 1) * 2;
    _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                       local_30 + -1);
    _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                       local_30);
    bVar2 = __gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>::operator()
                      ((_Iter_comp_iter<std::greater<int>> *)&local_65,_Var4,_Var3);
    if (bVar2) {
      local_30 = local_30 + -1;
    }
    local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_30);
    piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_38);
    puVar6 = (undefined4 *)move<int&>(piVar5);
    uVar1 = *puVar6;
    local_40 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_58);
    puVar6 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
    *puVar6 = uVar1;
  }
  if (((local_60 & 1) == 0) && (local_30 == (long)(local_60 - 2) / 2)) {
    local_30 = (local_30 + 1) * 2;
    local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_30 + -1);
    piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_38);
    puVar6 = (undefined4 *)move<int&>(piVar5);
    uVar1 = *puVar6;
    local_40 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_50,
                          local_58);
    puVar6 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
    *puVar6 = uVar1;
    local_58 = local_30 + -1;
  }
  p_Var7 = (_Iter_comp_iter *)
           move<__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>&>((_Iter_comp_iter *)&local_65)
  ;
  __gnu_cxx::__ops::_Iter_comp_val<std::greater<int>>::_Iter_comp_val
            ((_Iter_comp_val<std::greater<int>> *)&local_38,p_Var7);
  piVar5 = (int *)move<int&>(&local_64);
  __push_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_val<std::greater<int>>>
            ((__normal_iterator)local_50[0],local_58,local_28,*piVar5,(_Iter_comp_val *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::greater<int>::TEMPNAMEPLACEHOLDERVALUE(int const&, int const&) const */

undefined4 __thiscall std::greater<int>::operator()(greater<int> *this,int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_2 < *param_1);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >&>::type&&
   std::move<__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>
   >&>(__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >&) */

type * std::move<__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int>>&>(_Iter_comp_iter *param_1)

{
  return (type *)param_1;
}



/* __gnu_cxx::__ops::_Val_comp_iter<std::greater<int>
   >::_Val_comp_iter(__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >&&) */

void __thiscall
__gnu_cxx::__ops::_Val_comp_iter<std::greater<int>>::_Val_comp_iter
          (_Val_comp_iter<std::greater<int>> *this,_Iter_comp_iter *param_1)

{
  std::move<std::greater<int>&>(param_1);
  return;
}



/* bool __gnu_cxx::__ops::_Val_comp_iter<std::greater<int> >::TEMPNAMEPLACEHOLDERVALUE(int&,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

bool __thiscall
__gnu_cxx::__ops::_Val_comp_iter<std::greater<int>>::operator()
          (_Val_comp_iter<std::greater<int>> *this,int *param_1,__normal_iterator param_2)

{
  undefined uVar1;
  int *piVar2;
  undefined4 in_register_00000014;
  undefined8 local_30;
  int *local_28;
  _Val_comp_iter<std::greater<int>> *local_20;
  
  local_30 = CONCAT44(in_register_00000014,param_2);
  local_28 = param_1;
  local_20 = this;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_30);
  uVar1 = std::greater<int>::operator()((greater<int> *)this,local_28,piVar2);
  return (bool)uVar1;
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
/* std::remove_reference<__gnu_cxx::__ops::_Iter_less_iter&>::type&&
   std::move<__gnu_cxx::__ops::_Iter_less_iter&>(__gnu_cxx::__ops::_Iter_less_iter&) */

type * std::move<__gnu_cxx::__ops::_Iter_less_iter&>(_Iter_less_iter *param_1)

{
  return (type *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, int, __gnu_cxx::__ops::_Iter_less_val>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, long, long, int, __gnu_cxx::__ops::_Iter_less_val&) */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_less_val>
               (__normal_iterator param_1,long param_2,long param_3,int param_4,
               _Iter_less_val *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  local_40 = CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2 + -1;
  local_54 = param_4;
  local_50 = param_3;
  local_48 = param_2;
  do {
    local_28 = local_28 / 2;
    if (local_50 < local_48) {
      _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                        ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40,
                         local_28);
      bVar2 = __gnu_cxx::__ops::_Iter_less_val::operator()(param_5,_Var3,&local_54);
      if (!bVar2) goto LAB_00104202;
      bVar2 = true;
    }
    else {
LAB_00104202:
      bVar2 = false;
    }
    if (!bVar2) {
      puVar5 = (undefined4 *)move<int&>(&local_54);
      uVar1 = *puVar5;
      local_30 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                            &local_40,local_48);
      puVar5 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30)
      ;
      *puVar5 = uVar1;
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_30 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40,
                          local_28);
    piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_30);
    puVar5 = (undefined4 *)move<int&>(piVar4);
    uVar1 = *puVar5;
    local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40,
                          local_48);
    puVar5 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38);
    *puVar5 = uVar1;
    local_48 = local_28;
    local_28 = local_28 + -1;
  } while( true );
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
/* int* std::__copy_move_backward_a1<true, int*, int*>(int*, int*, int*) */

int * std::__copy_move_backward_a1<true,int*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move_backward_a2<true,int*,int*>(param_1,param_2,param_3);
  return piVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__niter_wrap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int*>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int*) */

__normal_iterator
std::__niter_wrap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
          (__normal_iterator param_1,int *param_2)

{
  __normal_iterator _Var1;
  int *piVar2;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_1);
  _Var1 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10,
                     (long)param_2 - (long)piVar2 >> 2);
  return _Var1;
}



/* __gnu_cxx::__ops::_Iter_comp_val<std::greater<int>
   >::_Iter_comp_val(__gnu_cxx::__ops::_Iter_comp_iter<std::greater<int> >&&) */

void __thiscall
__gnu_cxx::__ops::_Iter_comp_val<std::greater<int>>::_Iter_comp_val
          (_Iter_comp_val<std::greater<int>> *this,_Iter_comp_iter *param_1)

{
  std::move<std::greater<int>&>(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, long, int, __gnu_cxx::__ops::_Iter_comp_val<std::greater<int> >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long, int,
   __gnu_cxx::__ops::_Iter_comp_val<std::greater<int> >&) */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int,__gnu_cxx::__ops::_Iter_comp_val<std::greater<int>>>
               (__normal_iterator param_1,long param_2,long param_3,int param_4,
               _Iter_comp_val *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  local_40 = CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2 + -1;
  local_54 = param_4;
  local_50 = param_3;
  local_48 = param_2;
  do {
    local_28 = local_28 / 2;
    if (local_50 < local_48) {
      _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                        ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40,
                         local_28);
      bVar2 = __gnu_cxx::__ops::_Iter_comp_val<std::greater<int>>::operator()
                        ((_Iter_comp_val<std::greater<int>> *)param_5,_Var3,&local_54);
      if (!bVar2) goto LAB_00104410;
      bVar2 = true;
    }
    else {
LAB_00104410:
      bVar2 = false;
    }
    if (!bVar2) {
      puVar5 = (undefined4 *)move<int&>(&local_54);
      uVar1 = *puVar5;
      local_30 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                            &local_40,local_48);
      puVar5 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30)
      ;
      *puVar5 = uVar1;
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_30 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40,
                          local_28);
    piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_30);
    puVar5 = (undefined4 *)move<int&>(piVar4);
    uVar1 = *puVar5;
    local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40,
                          local_48);
    puVar5 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38);
    *puVar5 = uVar1;
    local_48 = local_28;
    local_28 = local_28 + -1;
  } while( true );
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



/* bool 
   __gnu_cxx::__ops::_Iter_less_val::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, int&) const */

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__copy_move_backward_a2<true, int*, int*>(int*, int*, int*) */

int * std::__copy_move_backward_a2<true,int*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<int>
                     (param_1,param_2,param_3);
  return piVar1;
}



/* bool __gnu_cxx::__ops::_Iter_comp_val<std::greater<int>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, int&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<std::greater<int>>::operator()
          (_Iter_comp_val<std::greater<int>> *this,__normal_iterator param_1,int *param_2)

{
  undefined uVar1;
  int *piVar2;
  undefined4 in_register_00000034;
  undefined8 local_28;
  _Iter_comp_val<std::greater<int>> *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  local_20 = this;
  piVar2 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_28);
  uVar1 = std::greater<int>::operator()((greater<int> *)this,piVar2,param_2);
  return (bool)uVar1;
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



/* int* std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*) */

int * std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<int>
                (int *param_1,int *param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 4);
  }
  return param_3 + -lVar1;
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


