
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
  basic_ostream *pbVar4;
  int *piVar5;
  basic_ostream<char,std::char_traits<char>> *pbVar6;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  vector<int,std::allocator<int>> *local_98;
  vector<int,std::allocator<int>> *local_90;
  int *local_88;
  int *local_80;
  vector<int,std::allocator<int>> local_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 3;
  local_54 = 7;
  local_50 = 0x3f;
  local_4c = 0x2d;
  local_48 = 0xc;
  local_44 = 0x59;
  local_40 = 0x7b;
  local_3c = 0x2d;
  std::allocator<int>::allocator();
                    /* try { // try from 00101363 to 00101367 has its CatchHandler @ 0010177f */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_78,(allocator *)&local_58);
  std::allocator<int>::~allocator((allocator<int> *)&local_a0);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 00101398 to 0010175a has its CatchHandler @ 001017a0 */
  std::make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var3,_Var2);
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"Max element of the heap : ");
  piVar5 = (int *)std::vector<int,std::allocator<int>>::front();
  pbVar6 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar4,*piVar5);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar6,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_a0._0_4_ = 900;
  std::vector<int,std::allocator<int>>::push_back(local_78,(int *)&local_a0);
  local_a0 = CONCAT44(local_a0._4_4_,0x21);
  std::vector<int,std::allocator<int>>::push_back(local_78,(int *)&local_a0);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  std::make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var3,_Var2);
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"Max element of the heap : ");
  piVar5 = (int *)std::vector<int,std::allocator<int>>::front();
  pbVar6 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar4,*piVar5);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar6,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00106fd0);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  std::pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var3,_Var2);
  std::vector<int,std::allocator<int>>::pop_back();
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"Max element of the heap : ");
  piVar5 = (int *)std::vector<int,std::allocator<int>>::front();
  pbVar6 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar4,*piVar5);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar6,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00106fd0);
  std::operator<<((basic_ostream *)std::cout,"Heap elements : ");
  local_98 = local_78;
  local_a8 = std::vector<int,std::allocator<int>>::begin();
  local_a0 = std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0);
    if (!bVar1) break;
    local_80 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_a8);
    pbVar4 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*local_80);
    std::operator<<(pbVar4," ");
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_a8);
  }
  std::operator<<((basic_ostream *)std::cout,"\n");
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  std::sort_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var3,_Var2);
  std::operator<<((basic_ostream *)std::cout,"After sorting, Heap elements : ");
  local_90 = local_78;
  local_a8 = std::vector<int,std::allocator<int>>::begin();
  local_a0 = std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0);
    if (!bVar1) break;
    local_88 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_a8);
    pbVar4 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*local_88);
    std::operator<<(pbVar4," ");
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_a8);
  }
  std::operator<<((basic_ostream *)std::cout,"\n");
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  bVar1 = std::is_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var3,_Var2);
  if (bVar1) {
    pbVar4 = std::operator<<((basic_ostream *)std::cout,"Container is heap!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar4,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  else {
    pbVar4 = std::operator<<((basic_ostream *)std::cout,"Container is not heap!!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar4,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  std::vector<int,std::allocator<int>>::~vector(local_78);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}



/* __gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(__gnu_cxx::__ops::_Iter_less_iter) */

void __thiscall
__gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(_Iter_less_val *this,_Iter_less_iter param_1)

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
/* unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * std::max<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int>(std::remove_reference<int>::type&) */

int * std::forward<int>(type *param_1)

{
  return (int *)param_1;
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
                    /* try { // try from 00101989 to 0010198d has its CatchHandler @ 00101990 */
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
/* void std::make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2)

{
  long in_FS_OFFSET;
  undefined local_11 [9];
  
  local_11._1_8_ = *(long *)(in_FS_OFFSET + 0x28);
  __make_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,param_2,(_Iter_less_iter *)local_11);
  if (local_11._1_8_ != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<int, std::allocator<int> >::front() */

void std::vector<int,std::allocator<int>>::front(void)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = begin();
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::vector<int, std::allocator<int> >::push_back(int&&) */

void __thiscall
std::vector<int,std::allocator<int>>::push_back(vector<int,std::allocator<int>> *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)move<int&>(param_1);
  emplace_back<int>(this,piVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::pop_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined local_11 [9];
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_11._1_8_ = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (1 < CONCAT44(extraout_var,dVar1)) {
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
    __pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
              ((__normal_iterator)local_20,(__normal_iterator)local_28,(__normal_iterator)local_28,
               (_Iter_less_iter *)local_11);
  }
  if (local_11._1_8_ != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<int, std::allocator<int> >::pop_back() */

void std::vector<int,std::allocator<int>>::pop_back(void)

{
  allocator *in_RDI;
  
  *(long *)(in_RDI + 8) = *(long *)(in_RDI + 8) + -4;
  allocator_traits<std::allocator<int>>::destroy<int>(in_RDI,*(int **)(in_RDI + 8));
  return;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::sort_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::sort_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2)

{
  long in_FS_OFFSET;
  undefined local_11 [9];
  
  local_11._1_8_ = *(long *)(in_FS_OFFSET + 0x28);
  __sort_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,param_2,(_Iter_less_iter *)local_11);
  if (local_11._1_8_ != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::is_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

bool std::is_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2)

{
  bool bVar1;
  __normal_iterator _Var2;
  undefined4 extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Var2 = is_heap_until<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1,param_2);
  local_18 = CONCAT44(extraout_var,_Var2);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int&>::type&& std::move<int&>(int&) */

type * std::move<int&>(int *param_1)

{
  return (type *)param_1;
}



/* int& std::vector<int, std::allocator<int> >::emplace_back<int>(int&&) */

int * __thiscall
std::vector<int,std::allocator<int>>::emplace_back<int>
          (vector<int,std::allocator<int>> *this,int *param_1)

{
  int *piVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    forward<int>((type *)param_1);
    piVar1 = (int *)end();
    _M_realloc_insert<int>((__normal_iterator)this,piVar1);
  }
  else {
    piVar1 = forward<int>((type *)param_1);
    allocator_traits<std::allocator<int>>::construct<int,int>
              ((allocator *)this,*(int **)(this + 8),piVar1);
    *(long *)(this + 8) = *(long *)(this + 8) + 4;
  }
  piVar1 = (int *)back();
  return piVar1;
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
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + -4;
  return this;
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



/* void std::allocator_traits<std::allocator<int> >::destroy<int>(std::allocator<int>&, int*) */

void std::allocator_traits<std::allocator<int>>::destroy<int>(allocator *param_1,int *param_2)

{
  __gnu_cxx::new_allocator<int>::destroy<int>((int *)param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__sort_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_less_iter&) */

void std::
     __sort_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,_Iter_less_iter *param_3)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  while( true ) {
    dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (CONCAT44(extraout_var,dVar1) < 2) break;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
    __pop_heap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
              ((__normal_iterator)local_10,(__normal_iterator)local_18,(__normal_iterator)local_18,
               param_3);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::is_heap_until<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::is_heap_until<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2)

{
  difference_type dVar1;
  __normal_iterator _Var2;
  undefined4 extraout_var;
  long lVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined local_11 [9];
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_11._1_8_ = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1,param_2);
  lVar3 = __is_heap_until<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
                    ((__normal_iterator)local_20,CONCAT44(extraout_var,dVar1),
                     (_Iter_less_iter *)local_11);
  _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                    ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_20,lVar3
                    );
  if (local_11._1_8_ != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var2;
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



/* void std::allocator_traits<std::allocator<int> >::construct<int, int>(std::allocator<int>&, int*,
   int&&) */

void std::allocator_traits<std::allocator<int>>::construct<int,int>
               (allocator *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_3);
  __gnu_cxx::new_allocator<int>::construct<int,int>((new_allocator<int> *)param_1,param_2,piVar1);
  return;
}



/* void std::vector<int, std::allocator<int>
   >::_M_realloc_insert<int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int&&) */

void std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
               (__normal_iterator param_1,int *param_2)

{
  difference_type dVar1;
  undefined4 extraout_var;
  int *piVar2;
  int **ppiVar3;
  long lVar4;
  vector<int,std::allocator<int>> **ppvVar5;
  type *in_RDX;
  undefined4 in_register_0000003c;
  allocator *in_R8;
  long in_FS_OFFSET;
  int *local_68;
  int **local_60;
  undefined8 local_58;
  ulong local_50;
  int *local_48;
  int *local_40;
  long local_38;
  int *local_30;
  int *local_28;
  long local_20;
  
  local_60 = (int **)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_50 = _M_check_len((vector<int,std::allocator<int>> *)local_60,1,"vector::_M_realloc_insert")
  ;
  local_48 = *local_60;
  local_40 = local_60[1];
  local_58 = begin();
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_68,(__normal_iterator *)&local_58);
  local_38 = CONCAT44(extraout_var,dVar1);
  local_30 = (int *)_Vector_base<int,std::allocator<int>>::_M_allocate
                              ((_Vector_base<int,std::allocator<int>> *)local_60,local_50);
  local_28 = local_30;
  piVar2 = forward<int>(in_RDX);
  allocator_traits<std::allocator<int>>::construct<int,int>
            ((allocator *)local_60,local_30 + local_38,piVar2);
  local_28 = (int *)0x0;
  piVar2 = (int *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  ppiVar3 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  lVar4 = _S_relocate((vector<int,std::allocator<int>> *)local_48,*ppiVar3,local_30,piVar2,in_R8);
  local_28 = (int *)(lVar4 + 4);
  piVar2 = (int *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  ppvVar5 = (vector<int,std::allocator<int>> **)
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base();
  local_28 = (int *)_S_relocate(*ppvVar5,local_40,local_28,piVar2,in_R8);
  _Vector_base<int,std::allocator<int>>::_M_deallocate
            ((_Vector_base<int,std::allocator<int>> *)local_60,local_48,
             (long)local_60[2] - (long)local_48 >> 2);
  *local_60 = local_30;
  local_60[1] = local_28;
  local_60[2] = local_30 + local_50;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<int, std::allocator<int> >::back() */

void std::vector<int,std::allocator<int>>::back(void)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = end();
  local_18 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator-
                       ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_20,1)
  ;
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void __gnu_cxx::new_allocator<int>::destroy<int>(int*) */

void __gnu_cxx::new_allocator<int>::destroy<int>(int *param_1)

{
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
/* long std::__is_heap_until<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, long, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, long, __gnu_cxx::__ops::_Iter_less_iter&) */

long std::
     __is_heap_until<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,long param_2,_Iter_less_iter *param_3)

{
  bool bVar1;
  __normal_iterator _Var2;
  __normal_iterator _Var3;
  undefined4 in_register_0000003c;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_28 = 0;
  local_20 = 1;
  while( true ) {
    if (param_2 <= (long)local_20) {
      return param_2;
    }
    _Var2 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,
                       local_20);
    _Var3 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30,
                       local_28);
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()((_Iter_less_iter *)param_3,_Var3,_Var2);
    if (bVar1) break;
    if ((local_20 & 1) == 0) {
      local_28 = local_28 + 1;
    }
    local_20 = local_20 + 1;
  }
  return local_20;
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
      if (!bVar2) goto LAB_00102e23;
      bVar2 = true;
    }
    else {
LAB_00102e23:
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



/* void __gnu_cxx::new_allocator<int>::construct<int, int>(int*, int&&) */

void __thiscall
__gnu_cxx::new_allocator<int>::construct<int,int>
          (new_allocator<int> *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = std::forward<int>((type *)param_2);
  iVar1 = *piVar2;
  piVar2 = (int *)operator_new(4,param_1);
  *piVar2 = iVar1;
  return;
}



/* std::vector<int, std::allocator<int> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<int,std::allocator<int>>::_M_check_len
          (vector<int,std::allocator<int>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<int,std::allocator<int>> *local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  local_40 = this;
  lVar1 = max_size();
  lVar2 = size();
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_2);
  }
  lVar1 = size();
  local_30 = size();
  puVar3 = max<unsigned_long>(&local_30,&local_48);
  local_28 = *puVar3 + lVar1;
  uVar4 = size();
  if ((local_28 < uVar4) || (uVar5 = max_size(), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = max_size();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<int, std::allocator<int> >::_S_relocate(int*, int*, int*, std::allocator<int>&) */

void __thiscall
std::vector<int,std::allocator<int>>::_S_relocate
          (vector<int,std::allocator<int>> *this,int *param_1,int *param_2,int *param_3,
          allocator *param_4)

{
  _S_do_relocate((int *)this,param_1,param_2,(allocator *)param_3,(integral_constant)param_4);
  return;
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
/* std::vector<int, std::allocator<int> >::max_size() const */

void std::vector<int,std::allocator<int>>::max_size(void)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  _S_max_size(paVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<int, std::allocator<int> >::size() const */

long std::vector<int,std::allocator<int>>::size(void)

{
  long *in_RDI;
  
  return in_RDI[1] - *in_RDI >> 2;
}



/* std::vector<int, std::allocator<int> >::_S_do_relocate(int*, int*, int*, std::allocator<int>&,
   std::integral_constant<bool, true>) */

void std::vector<int,std::allocator<int>>::_S_do_relocate
               (int *param_1,int *param_2,int *param_3,allocator *param_4,integral_constant param_5)

{
  __relocate_a<int*,int*,std::allocator<int>>(param_1,param_2,param_3,param_4);
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
/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */

undefined8 std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__relocate_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&)
    */

int * std::__relocate_a<int*,int*,std::allocator<int>>
                (int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  type tVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_var;
  
  piVar2 = __niter_base<int*>(param_3);
  piVar3 = __niter_base<int*>(param_2);
  piVar4 = __niter_base<int*>(param_1);
  tVar1 = __relocate_a_1<int,int>(piVar4,piVar3,piVar2,param_4);
  return (int *)CONCAT44(extraout_var,tVar1);
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
/* int* std::__niter_base<int*>(int*) */

int * std::__niter_base<int*>(int *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__is_bitwise_relocatable<int, void>::value, int*>::type
   std::__relocate_a_1<int, int>(int*, int*, int*, std::allocator<int>&) */

type std::__relocate_a_1<int,int>(int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (0 < lVar1) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (int)param_3 + (int)lVar1 * 4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int const* std::__niter_base<int const*>(int const*) */

int * std::__niter_base<int_const*>(int *param_1)

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


