
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
  (*(code *)PTR_00106f50)();
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
  (*(code *)PTR___throw_bad_alloc_00106f58)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00106f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00106f68)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00106f70)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00106f78)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00106f80)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00106f88)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00106f90)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00106f98)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00106fa0)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00106fa8)();
  return pvVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00106fb0)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00106fb8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x00101243) */
/* WARNING: Removing unreachable block (ram,0x0010124f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101284) */
/* WARNING: Removing unreachable block (ram,0x00101290) */

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



/* isOdd(int) */

bool isOdd(int param_1)

{
  return (param_1 & 1U) != 0;
}



undefined8 main(void)

{
  bool bVar1;
  difference_type dVar2;
  int *piVar3;
  basic_ostream *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  basic_ostream<char,std::char_traits<char>> *this;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 extraout_var;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  vector<int,std::allocator<int>> local_a8 [32];
  undefined8 local_88;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0xb;
  local_64 = 0x1b0;
  local_60 = 0x36;
  local_5c = 0xb;
  local_58 = 0x22;
  local_54 = 0x36f;
  local_50 = 0x15;
  local_4c = 0xb;
  local_48 = 0x50;
  std::allocator<int>::allocator();
                    /* try { // try from 001013ae to 001013b2 has its CatchHandler @ 00101752 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_a8,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)&local_88);
  local_c0 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 001013e9 to 00101625 has its CatchHandler @ 0010179d */
  std::operator<<((basic_ostream *)std::cout,"Vector v : ");
  while( true ) {
    local_88 = std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)&local_88);
    if (!bVar1) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_c0);
    pbVar4 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar3);
    std::operator<<(pbVar4," ");
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_c0,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"Count : ");
  local_88 = CONCAT44(local_88._4_4_,0xb);
  uVar5 = std::vector<int,std::allocator<int>>::end();
  uVar6 = std::vector<int,std::allocator<int>>::begin();
  lVar7 = std::count<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                    (uVar6,uVar5,&local_88);
  this = (basic_ostream<char,std::char_traits<char>> *)
         std::basic_ostream<char,std::char_traits<char>>::operator<<
                   ((basic_ostream<char,std::char_traits<char>> *)pbVar4,lVar7);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (this,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                  PTR_endl<char,std_char_traits<char>>_00106fd0);
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"Count even : ");
  uVar5 = std::vector<int,std::allocator<int>>::end();
  uVar6 = std::vector<int,std::allocator<int>>::begin();
  lVar7 = std::
          count_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int)>
                    (uVar6,uVar5,isOdd);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar4,lVar7);
  local_88 = std::vector<int,std::allocator<int>>::end();
  local_b8 = CONCAT44(local_b8._4_4_,0x36);
  uVar5 = std::vector<int,std::allocator<int>>::end();
  uVar6 = std::vector<int,std::allocator<int>>::begin();
  local_b0 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar6,uVar5,&local_b8);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_88);
  if (bVar1) {
    pbVar4 = std::operator<<((basic_ostream *)std::cout,"\nElement Found!!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar4,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  else {
    pbVar4 = std::operator<<((basic_ostream *)std::cout,"Element not found!!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar4,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  local_68 = 1;
  local_64 = 2;
  std::allocator<int>::allocator();
                    /* try { // try from 00101673 to 00101677 has its CatchHandler @ 00101770 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)&local_88,(allocator *)&local_68);
  std::allocator<int>::~allocator((allocator<int> *)&local_b0);
  local_b0 = std::vector<int,std::allocator<int>>::begin();
  uVar5 = std::vector<int,std::allocator<int>>::end();
  uVar6 = std::vector<int,std::allocator<int>>::begin();
  uVar8 = std::vector<int,std::allocator<int>>::end();
  uVar9 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 001016e8 to 0010171e has its CatchHandler @ 00101788 */
  local_b8 = std::
             find_end<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                       (uVar9,uVar8,uVar6,uVar5);
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,CONCAT44(extraout_var,dVar2));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_88);
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
    __cxa_atexit(PTR__Init_00106ff8,&std::__ioinit,&__dso_handle);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* isOdd(int) */

void _GLOBAL__sub_I_isOdd(void)

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
                    /* try { // try from 00101931 to 00101935 has its CatchHandler @ 00101938 */
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
   >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  return *(undefined8 *)this;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this,int param_1)

{
  long in_FS_OFFSET;
  int *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(int **)this;
  *(int **)this = local_20 + 1;
  __normal_iterator((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::count<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, int>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int const&) */

void std::count<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
               (undefined8 param_1,undefined8 param_2,int *param_3)

{
  _Iter_equals_val _Var1;
  
  _Var1 = __gnu_cxx::__ops::__iter_equals_val<int_const>(param_3);
  __count_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
            (param_1,param_2,_Var1);
  return;
}



/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::count_if<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, bool (*)(int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, bool (*)(int)) */

void std::
     count_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int)>
               (undefined8 param_1,undefined8 param_2,_func_bool_int *param_3)

{
  _Iter_pred _Var1;
  
  _Var1 = __gnu_cxx::__ops::__pred_iter<bool(*)(int)>(param_3);
  __count_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
            (param_1,param_2,_Var1);
  return;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::find<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

void std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
               (undefined8 param_1,undefined8 param_2,int *param_3)

{
  _Iter_equals_val _Var1;
  
  _Var1 = __gnu_cxx::__ops::__iter_equals_val<int_const>(param_3);
  __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
            (param_1,param_2,_Var1);
  return;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::find_end<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::
     find_end<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_3;
  local_28 = param_2;
  local_20[0] = param_1;
  __gnu_cxx::__ops::__iter_equal_to_iter();
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_30);
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)local_20);
  __find_end<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
            (local_20[0],local_28,local_30,param_4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::__count_if<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_equals_val<int const>
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_val<int const>) */

long std::
     __count_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20[0] = param_1;
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
    if (cVar1 != '\0') {
      local_10 = local_10 + 1;
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  return local_10;
}



/* __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> __gnu_cxx::__ops::__pred_iter<bool (*)(int)>(bool
   (*)(int)) */

_Iter_pred __gnu_cxx::__ops::__pred_iter<bool(*)(int)>(_func_bool_int *param_1)

{
  _func_bool_int **pp_Var1;
  long in_FS_OFFSET;
  _func_bool_int *local_20;
  _Iter_pred local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = param_1;
  pp_Var1 = (_func_bool_int **)std::move<bool(*&)(int)>((_func_bool_int *)&local_20);
  _Iter_pred<bool(*)(int)>::_Iter_pred((_Iter_pred<bool(*)(int)> *)local_18,*pp_Var1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}



/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::__count_if<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>) */

long std::
     __count_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20[0] = param_1;
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    cVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_30,local_20[0]);
    if (cVar1 != '\0') {
      local_10 = local_10 + 1;
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  return local_10;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_equals_val<int const>) */

void std::
     __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_10;
  
  local_10 = param_1;
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
            (local_10,param_2,param_3);
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



/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::reverse_iterator(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    */

void __thiscall
std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
reverse_iterator(reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                 *this,undefined8 param_2)

{
  *(undefined8 *)this = param_2;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::TEMPNAMEPLACEHOLDERVALUE(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > const&,
   std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   > const&) */

bool std::operator==(reverse_iterator *param_1,reverse_iterator *param_2)

{
  bool bVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
             ::base();
  local_20 = reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
             ::base();
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::base() const */

undefined8
std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::base
          (void)

{
  undefined8 *in_RDI;
  
  return *in_RDI;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_end<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equal_to_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   std::bidirectional_iterator_tag, std::bidirectional_iterator_tag,
   __gnu_cxx::__ops::_Iter_equal_to_iter) */

undefined8
std::
__find_end<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long in_FS_OFFSET;
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_48 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_40 [8];
  reverse_iterator local_38 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_30 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_28 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_20 [8];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_48,param_1);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_40,param_3);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    *)&local_18,(reverse_iterator *)local_40);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_28,param_4);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_20,(reverse_iterator *)local_48);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_30,param_2);
  __search<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
            (local_38,local_30,local_20,local_28,&local_18);
  bVar1 = operator==(local_38,(reverse_iterator *)local_48);
  if (!bVar1) {
    local_18 = reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               ::base();
    lVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                      (param_3,param_4);
    advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
              ((__normal_iterator *)&local_18,-lVar2);
    param_2 = local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + 4;
  return this;
}



/* bool __gnu_cxx::__ops::_Iter_equals_val<int
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

undefined4 __thiscall
__gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
          (_Iter_equals_val<int_const> *this,undefined8 param_2)

{
  int *piVar1;
  undefined8 local_18;
  int **local_10;
  
  local_18 = param_2;
  local_10 = (int **)this;
  piVar1 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_18);
  return CONCAT31((int3)((uint)**local_10 >> 8),*piVar1 == **local_10);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<bool (*&)(int)>::type&& std::move<bool (*&)(int)>(bool (*&)(int)) */

type * std::move<bool(*&)(int)>(_func_bool_int *param_1)

{
  return (type *)param_1;
}



/* __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>::_Iter_pred(bool (*)(int)) */

void __thiscall
__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::_Iter_pred
          (_Iter_pred<bool(*)(int)> *this,_func_bool_int *param_1)

{
  undefined8 *puVar1;
  _func_bool_int *local_18;
  undefined8 *local_10;
  
  local_18 = param_1;
  local_10 = (undefined8 *)this;
  puVar1 = (undefined8 *)std::move<bool(*&)(int)>((_func_bool_int *)&local_18);
  *local_10 = *puVar1;
  return;
}



/* bool __gnu_cxx::__ops::_Iter_pred<bool
   (*)(int)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

void __thiscall
__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
          (_Iter_pred<bool(*)(int)> *this,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 local_28;
  _Iter_pred<bool(*)(int)> *local_20;
  
  pcVar1 = *(code **)this;
  local_28 = param_2;
  local_20 = this;
  puVar2 = (undefined4 *)
           __normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                     ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
  (*pcVar1)(*puVar2);
  return;
}



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_equals_val<int const>,
   std::random_access_iterator_tag) */

undefined8
std::
__find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  long lVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  undefined4 extraout_var_00;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20[0] = param_1;
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
  for (local_10 = CONCAT44(extraout_var,dVar2) >> 2; 0 < local_10; local_10 = local_10 + -1) {
    cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
    if (cVar1 != '\0') {
      return local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
    if (cVar1 != '\0') {
      return local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
    if (cVar1 != '\0') {
      return local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
    if (cVar1 != '\0') {
      return local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
  lVar3 = CONCAT44(extraout_var_00,dVar2);
  if (lVar3 == 3) {
    cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
    if (cVar1 != '\0') {
      return local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  else {
    if (3 < lVar3) {
      return local_28;
    }
    if (lVar3 == 1) goto LAB_0010269d;
    if (lVar3 != 2) {
      return local_28;
    }
  }
  cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                    ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
  if (cVar1 != '\0') {
    return local_20[0];
  }
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_0010269d:
  cVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                    ((_Iter_equals_val<int_const> *)&local_30,local_20[0]);
  if (cVar1 == '\0') {
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    local_20[0] = local_28;
  }
  return local_20[0];
}



/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::reverse_iterator(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > > const&) */

void __thiscall
std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
reverse_iterator(reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                 *this,reverse_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::TEMPNAMEPLACEHOLDERVALUE() */

reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>> *
__thiscall
std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
operator++(reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
           *this)

{
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)this);
  return this;
}



/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   > std::__search<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >,
   __gnu_cxx::__ops::_Iter_equal_to_iter>(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >,
   std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >, std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >, __gnu_cxx::__ops::_Iter_equal_to_iter) */

reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>> *
std::
__search<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,__gnu_cxx::__ops::_Iter_equal_to_iter>
          (reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
           *param_1,undefined8 *param_2,reverse_iterator *param_3,reverse_iterator *param_4,
          reverse_iterator *param_5)

{
  bool bVar1;
  char cVar2;
  reverse_iterator *prVar3;
  long in_FS_OFFSET;
  _Iter_equal_to_iter local_71;
  reverse_iterator *local_70;
  reverse_iterator *local_68;
  reverse_iterator *local_60;
  undefined8 *local_58;
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  *local_50;
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_48 [8];
  undefined8 local_40;
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_38 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_30 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_28 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_20 [8];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_5;
  local_68 = param_4;
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  bVar1 = operator==((reverse_iterator *)param_2,param_3);
  if (!bVar1) {
    bVar1 = operator==(local_68,local_70);
    if (!bVar1) {
      bVar1 = false;
      goto LAB_00102779;
    }
  }
  bVar1 = true;
LAB_00102779:
  if (bVar1) {
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_50,(reverse_iterator *)local_58);
  }
  else {
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_48,local_68);
    prVar3 = (reverse_iterator *)
             reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
             ::operator++(local_48);
    bVar1 = operator==(prVar3,local_70);
    if (bVar1) {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(local_30,local_68);
      __gnu_cxx::__ops::
      __iter_comp_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
                (local_28,local_30);
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        *)&local_18,local_60);
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(local_20,(reverse_iterator *)local_58);
      __find_if<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>>
                (local_50,local_20,&local_18,local_28);
    }
    else {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        *)&local_40,(reverse_iterator *)local_58);
      while( true ) {
        reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
        reverse_iterator(local_38,local_68);
        __gnu_cxx::__ops::
        __iter_comp_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
                  (local_30,local_38);
        reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
        reverse_iterator(local_20,local_60);
        reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
        reverse_iterator(local_28,(reverse_iterator *)local_58);
        __find_if<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>>
                  (&local_18,local_28,local_20,local_30);
        *local_58 = local_18;
        bVar1 = operator==((reverse_iterator *)local_58,local_60);
        if (bVar1) break;
        reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
        reverse_iterator(local_28,(reverse_iterator *)local_48);
        local_40 = *local_58;
        prVar3 = (reverse_iterator *)
                 reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                 ::operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                               *)&local_40);
        bVar1 = operator==(prVar3,local_60);
        if (bVar1) {
          reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          ::reverse_iterator(local_50,local_60);
          goto LAB_00102a07;
        }
        while( true ) {
          reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          ::reverse_iterator((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                              *)&local_18,(reverse_iterator *)local_28);
          reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          ::reverse_iterator(local_20,(reverse_iterator *)&local_40);
          cVar2 = __gnu_cxx::__ops::_Iter_equal_to_iter::operator()(&local_71,local_20,&local_18);
          if (cVar2 == '\0') break;
          prVar3 = (reverse_iterator *)
                   reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                   ::operator++(local_28);
          bVar1 = operator==(prVar3,local_70);
          if (bVar1) {
            reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::reverse_iterator(local_50,(reverse_iterator *)local_58);
            goto LAB_00102a07;
          }
          prVar3 = (reverse_iterator *)
                   reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                   ::operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                                 *)&local_40);
          bVar1 = operator==(prVar3,local_60);
          if (bVar1) {
            reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ::reverse_iterator(local_50,local_60);
            goto LAB_00102a07;
          }
        }
        reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
        operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    *)local_58);
      }
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(local_50,local_60);
    }
  }
LAB_00102a07:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_50;
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



/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::distance<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = param_1;
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  __distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (local_10,param_2);
  return;
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + -4;
  return this;
}



/* __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > >
   __gnu_cxx::__ops::__iter_comp_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > >(__gnu_cxx::__ops::_Iter_equal_to_iter,
   std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >) */

_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
* __gnu_cxx::__ops::
  __iter_comp_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            (_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
             *param_1,reverse_iterator *param_2)

{
  long in_FS_OFFSET;
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_18,param_2);
  _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
  ::_Iter_equals_iter(param_1,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >
   >::_Iter_equals_iter(__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > > const&) */

void __thiscall
__gnu_cxx::__ops::
_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
::_Iter_equals_iter(_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
                    *this,_Iter_equals_iter *param_1)

{
  std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    *)this,(reverse_iterator *)param_1);
  return;
}



/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   > std::__find_if<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >,
   __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > >
   >(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >,
   __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > >) */

undefined8
std::
__find_if<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>>
          (undefined8 param_1,reverse_iterator *param_2,reverse_iterator *param_3,
          _Iter_equals_iter *param_4)

{
  long in_FS_OFFSET;
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_28 [8];
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_20 [8];
  _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
  local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __iterator_category<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            (param_2);
  __gnu_cxx::__ops::
  _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
  ::_Iter_equals_iter(local_18,param_4);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_20,param_3);
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(local_28,param_2);
  __find_if<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>>
            (param_1,local_28,local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
operator*(reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          *this)

{
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> *this_00;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(undefined8 *)this;
  this_00 = (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_18);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*(this_00);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* bool 
   __gnu_cxx::__ops::_Iter_equal_to_iter::TEMPNAMEPLACEHOLDERVALUE(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >,
   std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >) const */

undefined4 __thiscall
__gnu_cxx::__ops::_Iter_equal_to_iter::operator()
          (undefined8 param_1,
          reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          *param_2,reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                   *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)std::
                  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ::operator*(param_2);
  iVar1 = *piVar2;
  piVar2 = (int *)std::
                  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ::operator*(param_3);
  return CONCAT31((int3)((uint)*piVar2 >> 8),iVar1 == *piVar2);
}



/* std::iterator_traits<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >::difference_type std::__distance<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   std::random_access_iterator_tag) */

void std::__distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  __gnu_cxx::operator-((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  return;
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



/* __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >
   >::_Iter_equals_iter(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >) */

void __thiscall
__gnu_cxx::__ops::
_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
::_Iter_equals_iter(_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
                    *this,reverse_iterator *param_2)

{
  std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    *)this,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > > >::iterator_category
   std::__iterator_category<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >
   >(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   > > const&) */

iterator_category
std::
__iterator_category<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
          (reverse_iterator *param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype ((({parm#2}.base)())-(({parm#1}.base)()))
   std::TEMPNAMEPLACEHOLDERVALUE(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > const&,
   std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   > const&) */

void std::operator-(reverse_iterator *param_1,reverse_iterator *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
             ::base();
  local_20 = reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
             ::base();
  __gnu_cxx::operator-((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   > std::__find_if<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >,
   __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > >
   >(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   > >, std::reverse_iterator<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >,
   __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > > >, std::random_access_iterator_tag) */

reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>> *
std::
__find_if<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>,__gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>>
          (reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
           *param_1,reverse_iterator *param_2,reverse_iterator *param_3,
          _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
          *param_4)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
  local_20 [8];
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = operator-(param_3,param_2);
  for (local_18 = local_18 >> 2; 0 < local_18; local_18 = local_18 + -1) {
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_20,param_2);
    cVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            ::operator()(param_4,local_20);
    if (cVar1 != '\0') {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(param_1,param_2);
      goto LAB_001032fa;
    }
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                *)param_2);
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_20,param_2);
    cVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            ::operator()(param_4,local_20);
    if (cVar1 != '\0') {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(param_1,param_2);
      goto LAB_001032fa;
    }
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                *)param_2);
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_20,param_2);
    cVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            ::operator()(param_4,local_20);
    if (cVar1 != '\0') {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(param_1,param_2);
      goto LAB_001032fa;
    }
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                *)param_2);
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_20,param_2);
    cVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            ::operator()(param_4,local_20);
    if (cVar1 != '\0') {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(param_1,param_2);
      goto LAB_001032fa;
    }
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                *)param_2);
  }
  lVar2 = operator-(param_3,param_2);
  if (lVar2 == 3) {
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_20,param_2);
    cVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            ::operator()(param_4,local_20);
    if (cVar1 != '\0') {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(param_1,param_2);
      goto LAB_001032fa;
    }
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                *)param_2);
LAB_00103251:
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_20,param_2);
    cVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            ::operator()(param_4,local_20);
    if (cVar1 != '\0') {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(param_1,param_2);
      goto LAB_001032fa;
    }
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                *)param_2);
LAB_0010329c:
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    reverse_iterator(local_20,param_2);
    cVar1 = __gnu_cxx::__ops::
            _Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
            ::operator()(param_4,local_20);
    if (cVar1 != '\0') {
      reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
      reverse_iterator(param_1,param_2);
      goto LAB_001032fa;
    }
    reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
    operator++((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                *)param_2);
  }
  else if (lVar2 < 4) {
    if (lVar2 == 1) goto LAB_0010329c;
    if (lVar2 == 2) goto LAB_00103251;
  }
  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>::
  reverse_iterator(param_1,param_3);
LAB_001032fa:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* bool __gnu_cxx::__ops::_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >
   >::TEMPNAMEPLACEHOLDERVALUE(std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > > >) */

undefined4 __thiscall
__gnu_cxx::__ops::
_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
::operator()(_Iter_equals_iter<std::reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>>
             *this,reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                   *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)std::
                  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ::operator*(param_2);
  iVar1 = *piVar2;
  piVar2 = (int *)std::
                  reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ::operator*((reverse_iterator<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                               *)this);
  return CONCAT31((int3)((uint)*piVar2 >> 8),iVar1 == *piVar2);
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


