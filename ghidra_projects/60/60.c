
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
  (*(code *)PTR_00107f38)();
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
  (*(code *)PTR___throw_bad_alloc_00107f40)();
  return;
}



void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00107f48)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00107f50)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00107f58)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00107f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00107f68)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00107f70)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00107f78)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00107f80)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00107f88)();
  return;
}



void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00107f90)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00107f98)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00107fa0)();
  return pvVar1;
}



void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00107fa8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00107fb0)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00107fb8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00107fc0)();
  return pvVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00107fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x001012a3) */
/* WARNING: Removing unreachable block (ram,0x001012af) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001012e4) */
/* WARNING: Removing unreachable block (ram,0x001012f0) */

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
  __normal_iterator _Var5;
  ulong uVar6;
  undefined4 extraout_var;
  int *piVar7;
  basic_ostream *pbVar8;
  long in_FS_OFFSET;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  vector<int,std::allocator<int>> local_d8 [32];
  vector<int,std::allocator<int>> local_b8 [32];
  vector<int,std::allocator<int>> local_98 [32];
  allocator<int> local_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 1;
  local_54 = 2;
  local_50 = 3;
  local_4c = 4;
  local_48 = 5;
  std::allocator<int>::allocator();
                    /* try { // try from 001013cf to 001013d3 has its CatchHandler @ 001018cc */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_d8,(allocator *)&local_58);
  std::allocator<int>::~allocator(local_78);
  local_58 = 6;
  local_54 = 7;
  local_50 = 8;
  local_4c = 9;
  local_48 = 10;
  std::allocator<int>::allocator();
                    /* try { // try from 0010143f to 00101443 has its CatchHandler @ 001018ea */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_b8,(allocator *)&local_58);
  std::allocator<int>::~allocator(local_78);
                    /* try { // try from 00101464 to 001015a3 has its CatchHandler @ 00101959 */
  std::operator<<((basic_ostream *)std::cout,"Vector 1 : ");
  local_f0 = 0;
  while( true ) {
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= (ulong)(long)local_f0) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_d8,(long)local_f0);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_f0 = local_f0 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  std::operator<<((basic_ostream *)std::cout,"\nVector 2 : ");
  local_ec = 0;
  while( true ) {
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= (ulong)(long)local_ec) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_b8,(long)local_ec);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_ec = local_ec + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  std::allocator<int>::allocator();
                    /* try { // try from 001015c3 to 001015c7 has its CatchHandler @ 001018ff */
  std::vector<int,std::allocator<int>>::vector(local_98,10,(allocator *)local_78);
  std::allocator<int>::~allocator(local_78);
  _Var1 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var4 = std::vector<int,std::allocator<int>>::end();
  _Var5 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 0010163a to 001016e8 has its CatchHandler @ 00101941 */
  std::
  merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var5,_Var4,_Var3,_Var2,_Var1);
  std::operator<<((basic_ostream *)std::cout,"\nVector 3 : ");
  local_e8 = 0;
  while( true ) {
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= (ulong)(long)local_e8) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_98,(long)local_e8);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_e8 = local_e8 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  std::allocator<int>::allocator();
                    /* try { // try from 0010170b to 0010170f has its CatchHandler @ 00101914 */
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_78,0xc,(allocator *)&local_e0);
  std::allocator<int>::~allocator((allocator<int> *)&local_e0);
  _Var1 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
                    /* try { // try from 00101758 to 00101873 has its CatchHandler @ 0010192c */
  _Var1 = std::
          copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var3,_Var2,_Var1);
  local_e0 = CONCAT44(extraout_var,_Var1);
  _Var1 = std::vector<int,std::allocator<int>>::end();
  _Var2 = std::vector<int,std::allocator<int>>::begin();
  std::
  copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var2,_Var1,(__normal_iterator)local_e0);
  _Var1 = std::vector<int,std::allocator<int>>::end();
  _Var2 = std::vector<int,std::allocator<int>>::begin();
  std::inplace_merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (_Var2,(__normal_iterator)local_e0,_Var1);
  std::operator<<((basic_ostream *)std::cout,"\nVector 4 : ");
  local_e4 = 0;
  while( true ) {
    uVar6 = std::vector<int,std::allocator<int>>::size();
    if (uVar6 <= (ulong)(long)local_e4) break;
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)local_78,(long)local_e4);
    pbVar8 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar7);
    std::operator<<(pbVar8," ");
    local_e4 = local_e4 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_78);
  std::vector<int,std::allocator<int>>::~vector(local_98);
  std::vector<int,std::allocator<int>>::~vector(local_b8);
  std::vector<int,std::allocator<int>>::~vector(local_d8);
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



/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__ops::__iter_less_iter() */

void __gnu_cxx::__ops::__iter_less_iter(void)

{
  return;
}



/* __gnu_cxx::__ops::__iter_comp_val(__gnu_cxx::__ops::_Iter_less_iter) */

void __gnu_cxx::__ops::__iter_comp_val(_Iter_less_iter param_1)

{
  return;
}



/* __gnu_cxx::__ops::__val_comp_iter(__gnu_cxx::__ops::_Iter_less_iter) */

void __gnu_cxx::__ops::__val_comp_iter(_Iter_less_iter param_1)

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
                    /* try { // try from 00101b4d to 00101b51 has its CatchHandler @ 00101b54 */
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



/* std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&) */

void __thiscall
std::vector<int,std::allocator<int>>::vector
          (vector<int,std::allocator<int>> *this,ulong param_1,allocator *param_2)

{
  ulong uVar1;
  
  uVar1 = _S_check_init_len(param_1,param_2);
  _Vector_base<int,std::allocator<int>>::_Vector_base
            ((_Vector_base<int,std::allocator<int>> *)this,uVar1,param_2);
                    /* try { // try from 00101c73 to 00101c77 has its CatchHandler @ 00101c7a */
  _M_default_initialize(this,param_1);
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::merge<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          __normal_iterator param_4,__normal_iterator param_5)

{
  __normal_iterator _Var1;
  _Iter_less_iter in_R9D;
  
  __gnu_cxx::__ops::__iter_less_iter();
  _Var1 = __merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
                    (param_1,param_2,param_3,param_4,param_5,in_R9D);
  return _Var1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::copy<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_2);
  _Var2 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1);
  _Var1 = __copy_move_a<false,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var2,_Var1,param_3);
  return _Var1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::inplace_merge<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::inplace_merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __gnu_cxx::__ops::__iter_less_iter();
  __inplace_merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,param_2,param_3,param_2);
  return;
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



/* std::_Vector_base<int, std::allocator<int> >::_Vector_base(unsigned long, std::allocator<int>
   const&) */

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_base
          (_Vector_base<int,std::allocator<int>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 001020fc to 00102100 has its CatchHandler @ 00102103 */
  _M_create_storage(this,param_1);
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >::__normal_iterator(int* const&) */

void __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this,int **param_1)

{
  *(int **)this = *param_1;
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__merge<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_less_iter) */

__normal_iterator
std::
__merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          __normal_iterator param_4,__normal_iterator param_5,_Iter_less_iter param_6)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  undefined4 *puVar4;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined4 in_register_00000084;
  _Iter_less_iter local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_38 = CONCAT44(in_register_0000000c,param_4);
  local_40 = CONCAT44(in_register_00000084,param_5);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
    if (bVar2) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
      if (!bVar2) goto LAB_0010229f;
      bVar2 = true;
    }
    else {
LAB_0010229f:
      bVar2 = false;
    }
    if (!bVar2) {
      _Var3 = copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        ((__normal_iterator)local_20[0],(__normal_iterator)local_28,
                         (__normal_iterator)local_40);
      _Var3 = copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        ((__normal_iterator)local_30,(__normal_iterator)local_38,_Var3);
      return _Var3;
    }
    bVar2 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                      (&local_41,(__normal_iterator)local_30,(__normal_iterator)local_20[0]);
    if (bVar2) {
      puVar4 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30)
      ;
      uVar1 = *puVar4;
      puVar4 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40)
      ;
      *puVar4 = uVar1;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    }
    else {
      puVar4 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
      uVar1 = *puVar4;
      puVar4 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40)
      ;
      *puVar4 = uVar1;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
  } while( true );
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
   std::__copy_move_a<false, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
__copy_move_a<false,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_3);
  piVar3 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_2);
  piVar4 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_1);
  piVar2 = __copy_move_a1<false,int*,int*>(piVar4,piVar3,piVar2);
  _Var1 = __niter_wrap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                    (param_3,piVar2);
  return _Var1;
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
/* void std::__inplace_merge<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __inplace_merge<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _Iter_less_iter param_4)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Iter_less_iter in_R9D;
  long in_FS_OFFSET;
  _Iter_less_iter _Var6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  _Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
  local_38 [24];
  long local_20;
  
  local_50 = CONCAT44(in_register_0000003c,param_1);
  local_58 = CONCAT44(in_register_00000034,param_2);
  local_60 = CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_50,(__normal_iterator *)&local_58);
  if ((bVar1) ||
     (bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_58,(__normal_iterator *)&local_60),
     bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    dVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                      ((__normal_iterator)local_50,(__normal_iterator)local_58);
    local_48 = CONCAT44(extraout_var,dVar2);
    dVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                      ((__normal_iterator)local_58,(__normal_iterator)local_60);
    local_40 = CONCAT44(extraout_var_00,dVar2);
    plVar3 = min<long>(&local_48,&local_40);
    _Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>::
    _Temporary_buffer(local_38,(__normal_iterator)local_50,*plVar3);
    lVar4 = _Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            ::begin();
    if (lVar4 == 0) {
                    /* try { // try from 00102487 to 001024cf has its CatchHandler @ 001024e2 */
      __merge_without_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_50,(__normal_iterator)local_58,(__normal_iterator)local_60
                 ,local_48,local_40,in_R9D);
    }
    else {
      lVar4 = _Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
              ::size();
      _Var6 = 0x1024a9;
      piVar5 = (int *)_Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                      ::begin();
      __merge_adaptive<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int*,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_50,(__normal_iterator)local_58,(__normal_iterator)local_60
                 ,local_48,local_40,piVar5,lVar4,_Var6);
    }
    _Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>::
    ~_Temporary_buffer(local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<int*,std::vector<int,std::allocator<int>>> * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
          (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *this)

{
  *(long *)this = *(long *)this + 4;
  return this;
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
/* int* std::__copy_move_a1<false, int*, int*>(int*, int*, int*) */

int * std::__copy_move_a1<false,int*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move_a2<false,int*,int*>(param_1,param_2,param_3);
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
/* long const& std::min<long>(long const&, long const&) */

long * std::min<long>(long *param_1,long *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}



/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, int>::_Temporary_buffer(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, long) */

void __thiscall
std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
::_Temporary_buffer(_Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                    *this,__normal_iterator param_1,long param_2)

{
  pair pVar1;
  undefined4 extraout_var;
  long extraout_RDX;
  int *piVar2;
  
  *(long *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pVar1 = get_temporary_buffer<int>(*(long *)this);
  piVar2 = (int *)CONCAT44(extraout_var,pVar1);
  if (piVar2 != (int *)0x0) {
                    /* try { // try from 001029aa to 001029ae has its CatchHandler @ 001029c9 */
    __uninitialized_construct_buf<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (piVar2,piVar2 + extraout_RDX,param_1);
    *(int **)(this + 0x10) = piVar2;
    *(long *)(this + 8) = extraout_RDX;
  }
  return;
}



/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, int>::~_Temporary_buffer() */

void __thiscall
std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
::~_Temporary_buffer
          (_Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
           *this)

{
  _Destroy<int*>(*(int **)(this + 0x10),(int *)(*(long *)(this + 0x10) + *(long *)(this + 8) * 4));
  __detail::__return_temporary_buffer<int>(*(int **)(this + 0x10),*(ulong *)(this + 8));
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, int>::begin() */

undefined8
std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
::begin(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 0x10);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, long,
   __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long,
   __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __merge_without_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               long param_4,long param_5,_Iter_less_iter param_6)

{
  bool bVar1;
  __normal_iterator _Var2;
  difference_type dVar3;
  int *piVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  _Iter_less_iter local_61;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_40 = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_50 = CONCAT44(in_register_00000014,param_3);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_5;
  local_58 = param_4;
  if ((param_4 != 0) && (param_5 != 0)) {
    if (param_5 + param_4 == 2) {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::operator()(&local_61,param_2,param_1);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_40,(__normal_iterator)local_48);
      }
    }
    else {
      local_20 = 0;
      local_18 = 0;
      local_38 = local_40;
      local_30 = local_48;
      if (param_5 < param_4) {
        local_20 = param_4 / 2;
        puVar5 = &local_38;
        advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
                  ((__normal_iterator *)puVar5,local_20);
        __gnu_cxx::__ops::__iter_comp_val((_Iter_less_iter)puVar5);
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_38);
        _Var2 = __lower_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_less_val>
                          ((__normal_iterator)local_48,(__normal_iterator)local_50,piVar4,
                           (__normal_iterator)local_50);
        local_30 = CONCAT44(extraout_var,_Var2);
        dVar3 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          ((__normal_iterator)local_48,_Var2);
        local_18 = CONCAT44(extraout_var_00,dVar3);
      }
      else {
        local_18 = param_5 / 2;
        puVar5 = &local_30;
        advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
                  ((__normal_iterator *)puVar5,local_18);
        __gnu_cxx::__ops::__val_comp_iter((_Iter_less_iter)puVar5);
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_30);
        _Var2 = __upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Val_less_iter>
                          ((__normal_iterator)local_40,(__normal_iterator)local_48,piVar4,
                           (__normal_iterator)local_48);
        local_38 = CONCAT44(extraout_var_01,_Var2);
        dVar3 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          ((__normal_iterator)local_40,_Var2);
        local_20 = CONCAT44(extraout_var_02,dVar3);
      }
      _Var2 = _V2::rotate<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        ((__normal_iterator)local_38,(__normal_iterator)local_48,
                         (__normal_iterator)local_30);
      local_28 = CONCAT44(extraout_var_03,_Var2);
      __merge_without_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_40,(__normal_iterator)local_38,_Var2,local_20,local_18,
                 param_6);
      __merge_without_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_28,(__normal_iterator)local_30,(__normal_iterator)local_50
                 ,local_58 - local_20,local_60 - local_18,param_6);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, int>::size() const */

undefined8
std::_Temporary_buffer<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
::size(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 8);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__merge_adaptive<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, long, int*,
   __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long,
   int*, long, __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __merge_adaptive<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int*,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               long param_4,long param_5,int *param_6,long param_7,_Iter_less_iter param_8)

{
  __normal_iterator _Var1;
  difference_type dVar2;
  int *piVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  _Iter_less_iter _Var5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  int *local_20;
  int *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      local_30 = 0;
      local_28 = 0;
      local_48 = CONCAT44(in_register_0000003c,param_1);
      local_40 = CONCAT44(in_register_00000034,param_2);
      if (param_5 < param_4) {
        local_30 = param_4 / 2;
        puVar4 = &local_48;
        advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
                  ((__normal_iterator *)puVar4,local_30);
        __gnu_cxx::__ops::__iter_comp_val((_Iter_less_iter)puVar4);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_48);
        _Var1 = __lower_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Iter_less_val>
                          (param_2,param_3,piVar3,param_3);
        local_40 = CONCAT44(extraout_var,_Var1);
        _Var5 = 0x102e06;
        dVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          (param_2,_Var1);
        local_28 = CONCAT44(extraout_var_00,dVar2);
      }
      else {
        local_28 = param_5 / 2;
        puVar4 = &local_40;
        advance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long>
                  ((__normal_iterator *)puVar4,local_28);
        __gnu_cxx::__ops::__val_comp_iter((_Iter_less_iter)puVar4);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_40);
        _Var1 = __upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int,__gnu_cxx::__ops::_Val_less_iter>
                          (param_1,param_2,piVar3,param_2);
        local_48 = CONCAT44(extraout_var_01,_Var1);
        _Var5 = 0x102e72;
        dVar2 = distance<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                          (param_1,_Var1);
        local_30 = CONCAT44(extraout_var_02,dVar2);
      }
      _Var1 = __rotate_adaptive<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*,long>
                        ((__normal_iterator)local_48,param_2,(__normal_iterator)local_40,
                         param_4 - local_30,local_28,param_6,param_7);
      local_38 = CONCAT44(extraout_var_03,_Var1);
      __merge_adaptive<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int*,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,(__normal_iterator)local_48,_Var1,local_30,local_28,param_6,param_7,_Var5);
      __merge_adaptive<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,long,int*,__gnu_cxx::__ops::_Iter_less_iter>
                ((__normal_iterator)local_38,(__normal_iterator)local_40,param_3,param_4 - local_30,
                 param_5 - local_28,param_6,param_7,_Var5);
    }
    else {
      piVar3 = param_6;
      local_18 = move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                           (param_2,param_3,param_6);
      __move_merge_adaptive_backward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,param_2,param_6,local_18,param_3,(_Iter_less_iter)piVar3);
    }
  }
  else {
    piVar3 = param_6;
    local_20 = move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                         (param_1,param_2,param_6);
    __move_merge_adaptive<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
              (param_6,local_20,param_2,param_3,param_1,(_Iter_less_iter)piVar3);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__uninitialized_default_n<int*, unsigned long>(int*, unsigned long) */

int * std::__uninitialized_default_n<int*,unsigned_long>(int *param_1,ulong param_2)

{
  int *piVar1;
  
  piVar1 = __uninitialized_default_n_1<true>::__uninit_default_n<int*,unsigned_long>
                     (param_1,param_2);
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
/* int* std::__copy_move_a2<false, int*, int*>(int*, int*, int*) */

int * std::__copy_move_a2<false,int*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>
                     (param_1,param_2,param_3);
  return piVar1;
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
/* std::pair<int*, long> std::get_temporary_buffer<int>(long) */

pair std::get_temporary_buffer<int>(long param_1)

{
  long in_FS_OFFSET;
  long local_50 [2];
  int local_3c;
  int *local_38;
  undefined8 local_30;
  undefined8 local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0x1fffffffffffffff;
  local_50[0] = param_1;
  if (0x1fffffffffffffff < param_1) {
    local_50[0] = 0x1fffffffffffffff;
  }
  do {
    if (local_50[0] < 1) {
      local_3c = 0;
      local_38 = (int *)0x0;
      pair<int*,long>::pair<int*,int,true>((pair<int*,long> *)local_28,&local_38,&local_3c);
LAB_0010324e:
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (pair)local_28[0];
    }
    local_38 = (int *)operator_new(local_50[0] << 2,(nothrow_t *)&nothrow);
    if (local_38 != (int *)0x0) {
      pair<int*,long>::pair<int*&,long&,true>((pair<int*,long> *)local_28,&local_38,local_50);
      goto LAB_0010324e;
    }
    if (local_50[0] == 1) {
      local_50[0] = 0;
    }
    else {
      local_50[0] = (local_50[0] + 1) / 2;
    }
    local_38 = (int *)0x0;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__uninitialized_construct_buf<int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(int*, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

void std::
     __uninitialized_construct_buf<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (int *param_1,int *param_2,__normal_iterator param_3)

{
  __uninitialized_construct_buf_dispatch<true>::
  __ucr<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (param_1,param_2,param_3);
  return;
}



/* void std::__detail::__return_temporary_buffer<int>(int*, unsigned long) */

void std::__detail::__return_temporary_buffer<int>(int *param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 4);
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::_V2::rotate<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::_V2::rotate<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  _Var1 = __rotate<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    ((__normal_iterator)local_10,param_2,param_3,param_2);
  return _Var1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::move<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int*>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int*) */

int * std::move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  int *piVar3;
  
  _Var1 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_2);
  _Var2 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1);
  piVar3 = __copy_move_a<true,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                     (_Var2,_Var1,param_3);
  return piVar3;
}



/* bool 
   __gnu_cxx::__ops::_Iter_less_iter::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, int*) const */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_iter::operator()
          (_Iter_less_iter *this,__normal_iterator param_1,int *param_2)

{
  int *piVar1;
  undefined4 in_register_00000034;
  undefined8 local_18;
  _Iter_less_iter *local_10;
  
  local_18 = CONCAT44(in_register_00000034,param_1);
  local_10 = this;
  piVar1 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_18);
  return *piVar1 < *param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__move_merge_adaptive<int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_less_iter>(int*, int*, __gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __move_merge_adaptive<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (int *param_1,int *param_2,__normal_iterator param_3,__normal_iterator param_4,
               __normal_iterator param_5,_Iter_less_iter param_6)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  _Iter_less_iter local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int *local_28;
  int *local_20;
  
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_38 = CONCAT44(in_register_0000000c,param_4);
  local_40 = CONCAT44(in_register_00000084,param_5);
  local_28 = param_2;
  local_20 = param_1;
  do {
    if (local_20 == local_28) {
LAB_0010366c:
      bVar2 = false;
    }
    else {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
      if (!bVar2) goto LAB_0010366c;
      bVar2 = true;
    }
    if (!bVar2) {
      if (local_20 != local_28) {
        move<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  (local_20,local_28,(__normal_iterator)local_40);
      }
      return;
    }
    bVar2 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                      (&local_41,(__normal_iterator)local_30,local_20);
    if (bVar2) {
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_30);
      puVar4 = (undefined4 *)move<int&>(piVar3);
      uVar1 = *puVar4;
      puVar4 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40)
      ;
      *puVar4 = uVar1;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    }
    else {
      puVar4 = (undefined4 *)move<int&>(local_20);
      uVar1 = *puVar4;
      puVar4 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40)
      ;
      *puVar4 = uVar1;
      local_20 = local_20 + 1;
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40);
  } while( true );
}



/* bool __gnu_cxx::__ops::_Iter_less_iter::TEMPNAMEPLACEHOLDERVALUE(int*,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) const */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_iter::operator()
          (_Iter_less_iter *this,int *param_1,__normal_iterator param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_register_00000014;
  undefined8 local_30;
  int *local_28;
  _Iter_less_iter *local_20;
  
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
/* void std::__move_merge_adaptive_backward<__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, int*, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __move_merge_adaptive_backward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator param_1,__normal_iterator param_2,int *param_3,int *param_4,
               __normal_iterator param_5,_Iter_less_iter param_6)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> *p_Var5;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined4 in_register_00000084;
  _Iter_less_iter local_41;
  undefined8 local_40;
  int *local_38;
  int *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_00000084,param_5);
  local_38 = param_4;
  local_30 = param_3;
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
  if (bVar2) {
    move_backward<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (local_30,local_38,(__normal_iterator)local_40);
  }
  else if (local_30 != local_38) {
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
    local_38 = local_38 + -1;
    while( true ) {
      while (bVar2 = __gnu_cxx::__ops::_Iter_less_iter::operator()
                               (&local_41,local_38,(__normal_iterator)local_28), !bVar2) {
        puVar4 = (undefined4 *)move<int&>(local_38);
        uVar1 = *puVar4;
        p_Var5 = (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                            &local_40);
        puVar4 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                           (p_Var5);
        *puVar4 = uVar1;
        if (local_30 == local_38) {
          return;
        }
        local_38 = local_38 + -1;
      }
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_28);
      puVar4 = (undefined4 *)move<int&>(piVar3);
      uVar1 = *puVar4;
      p_Var5 = (__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_40)
      ;
      puVar4 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (p_Var5);
      *puVar4 = uVar1;
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
      if (bVar2) break;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
    }
    local_38 = local_38 + 1;
    move_backward<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (local_30,local_38,(__normal_iterator)local_40);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__rotate_adaptive<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, int*, long>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, long, long, int*,
   long) */

__normal_iterator
std::
__rotate_adaptive<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*,long>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          long param_4,long param_5,int *param_6,long param_7)

{
  __normal_iterator _Var1;
  int *piVar2;
  
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    _Var1 = param_1;
    if (param_5 != 0) {
      piVar2 = move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                         (param_2,param_3,param_6);
      move_backward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (param_1,param_2,param_3);
      _Var1 = move<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        (param_6,piVar2,param_1);
    }
  }
  else if (param_7 < param_4) {
    _Var1 = _V2::rotate<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                      (param_1,param_2,param_3);
  }
  else {
    _Var1 = param_3;
    if (param_4 != 0) {
      piVar2 = move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                         (param_1,param_2,param_6);
      move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (param_2,param_3,param_1);
      _Var1 = move_backward<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        (param_6,piVar2,param_3);
    }
  }
  return _Var1;
}



/* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<int>::deallocate(new_allocator<int> *this,int *param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 4);
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
/* __gnu_cxx::new_allocator<int>::max_size() const */

void __gnu_cxx::new_allocator<int>::max_size(void)

{
  _M_max_size();
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



/* std::pair<int*, long>::pair<int*&, long&, true>(int*&, long&) */

void __thiscall
std::pair<int*,long>::pair<int*&,long&,true>(pair<int*,long> *this,int **param_1,long *param_2)

{
  int **ppiVar1;
  long *plVar2;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  *(int **)this = *ppiVar1;
  plVar2 = forward<long&>((type *)param_2);
  *(long *)(this + 8) = *plVar2;
  return;
}



/* std::pair<int*, long>::pair<int*, int, true>(int*&&, int&&) */

void __thiscall
std::pair<int*,long>::pair<int*,int,true>(pair<int*,long> *this,int **param_1,int *param_2)

{
  int **ppiVar1;
  int *piVar2;
  
  ppiVar1 = forward<int*>((type *)param_1);
  *(int **)this = *ppiVar1;
  piVar2 = forward<int>((type *)param_2);
  *(long *)(this + 8) = (long)*piVar2;
  return;
}



/* void std::__uninitialized_construct_buf_dispatch<true>::__ucr<int*,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(int*, int*,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

void std::__uninitialized_construct_buf_dispatch<true>::
     __ucr<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
               (int *param_1,int *param_2,__normal_iterator param_3)

{
  return;
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



/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::_V2::__rotate<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   std::random_access_iterator_tag) */

__normal_iterator
std::_V2::__rotate<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          random_access_iterator_tag param_4)

{
  undefined4 uVar1;
  bool bVar2;
  difference_type dVar3;
  __normal_iterator _Var4;
  __normal_iterator _Var5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_70 = CONCAT44(in_register_0000003c,param_1);
  local_78 = CONCAT44(in_register_00000034,param_2);
  local_80 = CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)&local_78);
  if (bVar2) {
    _Var4 = (__normal_iterator)local_80;
  }
  else {
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
    if (bVar2) {
      _Var4 = (__normal_iterator)local_70;
    }
    else {
      dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_80,(__normal_iterator *)&local_70);
      local_60 = CONCAT44(extraout_var,dVar3);
      dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
      local_58 = CONCAT44(extraout_var_00,dVar3);
      if (local_60 - local_58 == local_58) {
        swap_ranges<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_70,(__normal_iterator)local_78,
                   (__normal_iterator)local_78);
        _Var4 = (__normal_iterator)local_78;
      }
      else {
        local_50 = local_70;
        dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
        local_48 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                   operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                             &local_70,CONCAT44(extraout_var_01,dVar3));
        while( true ) {
          for (; local_58 < local_60 - local_58; local_58 = local_60 - local_58) {
            if (local_58 == 1) {
              piVar6 = (int *)__gnu_cxx::
                              __normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                              operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                                         *)&local_50);
              piVar6 = (int *)move<int&>(piVar6);
              local_64 = *piVar6;
              _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_50,local_60);
              _Var5 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_50,1);
              move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        (_Var5,_Var4,(__normal_iterator)local_50);
              puVar7 = (undefined4 *)move<int&>(&local_64);
              uVar1 = *puVar7;
              local_40 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                         operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                   &local_50,local_60);
              local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                         operator-((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                   &local_40,1);
              puVar7 = (undefined4 *)
                       __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                 &local_38);
              *puVar7 = uVar1;
              _Var4 = (__normal_iterator)local_48;
              goto LAB_001040d2;
            }
            local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                 &local_50,local_58);
            for (local_30 = 0; local_30 < local_60 - local_58; local_30 = local_30 + 1) {
              iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                        ((__normal_iterator)local_50,(__normal_iterator)local_38);
              __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                        ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_50);
              __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                        ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38);
            }
            local_60 = local_60 % local_58;
            if (local_60 == 0) {
              _Var4 = (__normal_iterator)local_48;
              goto LAB_001040d2;
            }
            swap<long>(&local_60,&local_58);
          }
          local_58 = local_60 - local_58;
          if (local_58 == 1) {
            local_40 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                 &local_50,local_60);
            local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator-((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                 &local_40,1);
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                                         *)&local_38);
            piVar6 = (int *)move<int&>(piVar6);
            local_64 = *piVar6;
            _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_50,local_60);
            local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                 &local_50,local_60);
            _Var5 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator-((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_38,1);
            move_backward<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                      ((__normal_iterator)local_50,_Var5,_Var4);
            puVar7 = (undefined4 *)move<int&>(&local_64);
            uVar1 = *puVar7;
            puVar7 = (undefined4 *)
                     __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                     operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                               &local_50);
            *puVar7 = uVar1;
            _Var4 = (__normal_iterator)local_48;
            goto LAB_001040d2;
          }
          local_38 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                     operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                               &local_50,local_60);
          local_50 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                     operator-((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                               &local_38,local_58);
          for (local_28 = 0; local_28 < local_60 - local_58; local_28 = local_28 + 1) {
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_50);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator--
                      ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_38);
            iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                      ((__normal_iterator)local_50,(__normal_iterator)local_38);
          }
          local_60 = local_60 % local_58;
          if (local_60 == 0) break;
          swap<long>(&local_60,&local_58);
        }
        _Var4 = (__normal_iterator)local_48;
      }
    }
  }
LAB_001040d2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__copy_move_a<true, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int*) */

int * std::
      __copy_move_a<true,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  int *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = param_3;
  piVar1 = __niter_base<int*>(param_3);
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>((__normal_iterator)local_28);
  piVar3 = __niter_base<int*,std::vector<int,std::allocator<int>>>((__normal_iterator)local_20);
  piVar1 = __copy_move_a1<true,int*,int*>(piVar3,piVar2,piVar1);
  piVar1 = __niter_wrap<int*>(&local_30,piVar1);
  return piVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::move<int*,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(int*, int*,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::move<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (int *param_1,int *param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = __miter_base<int*>(param_2);
  piVar3 = __miter_base<int*>(param_1);
  _Var1 = __copy_move_a<true,int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (piVar3,piVar2,param_3);
  return _Var1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::move_backward<int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > > >(int*, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::move_backward<int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (int *param_1,int *param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = __miter_base<int*>(param_2);
  piVar3 = __miter_base<int*>(param_1);
  _Var1 = __copy_move_backward_a<true,int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (piVar3,piVar2,param_3);
  return _Var1;
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::move<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
move<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_2);
  _Var2 = __miter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (param_1);
  _Var1 = __copy_move_a<true,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (_Var2,_Var1,param_3);
  return _Var1;
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
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
  return (int **)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long& std::forward<long&>(std::remove_reference<long&>::type&) */

long * std::forward<long&>(type *param_1)

{
  return (long *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*&& std::forward<int*>(std::remove_reference<int*>::type&) */

int ** std::forward<int*>(type *param_1)

{
  return (int **)param_1;
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
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::swap_ranges<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
swap_ranges<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  bool bVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
    if (!bVar1) break;
    iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              ((__normal_iterator)local_10,(__normal_iterator)local_20);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_10);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_20);
  }
  return (__normal_iterator)local_20;
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
/* std::remove_reference<long&>::type&& std::move<long&>(long&) */

type * std::move<long&>(long *param_1)

{
  return (type *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__and_<std::__not_<std::__is_tuple_like<long> >,
   std::is_move_constructible<long>, std::is_move_assignable<long> >::value, void>::type
   std::swap<long>(long&, long&) */

type std::swap<long>(long *param_1,long *param_2)

{
  long *plVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)move<long&>(param_1);
  local_18 = *plVar1;
  plVar1 = (long *)move<long&>(param_2);
  *param_1 = *plVar1;
  plVar1 = (long *)move<long&>(&local_18);
  *param_2 = *plVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__niter_base<int*>(int*) */

int * std::__niter_base<int*>(int *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__copy_move_a1<true, int*, int*>(int*, int*, int*) */

int * std::__copy_move_a1<true,int*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move_a2<true,int*,int*>(param_1,param_2,param_3);
  return piVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__niter_wrap<int*>(int* const&, int*) */

int * std::__niter_wrap<int*>(int **param_1,int *param_2)

{
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* std::__miter_base<int*>(int*) */

int * std::__miter_base<int*>(int *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__copy_move_a<true, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(int*, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

__normal_iterator
std::
__copy_move_a<true,int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (int *param_1,int *param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_3);
  piVar3 = __niter_base<int*>(param_2);
  piVar4 = __niter_base<int*>(param_1);
  piVar2 = __copy_move_a1<true,int*,int*>(piVar4,piVar3,piVar2);
  _Var1 = __niter_wrap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                    (param_3,piVar2);
  return _Var1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__copy_move_backward_a<true, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > > >(int*, int*, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

__normal_iterator
std::
__copy_move_backward_a<true,int*,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (int *param_1,int *param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_3);
  piVar3 = __niter_base<int*>(param_2);
  piVar4 = __niter_base<int*>(param_1);
  piVar2 = __copy_move_backward_a1<true,int*,int*>(piVar4,piVar3,piVar2);
  _Var1 = __niter_wrap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                    (param_3,piVar2);
  return _Var1;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__copy_move_a<true, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */

__normal_iterator
std::
__copy_move_a<true,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_3);
  piVar3 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_2);
  piVar4 = __niter_base<int*,std::vector<int,std::allocator<int>>>(param_1);
  piVar2 = __copy_move_a1<true,int*,int*>(piVar4,piVar3,piVar2);
  _Var1 = __niter_wrap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int*>
                    (param_3,piVar2);
  return _Var1;
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
/* int* std::__copy_move_a2<true, int*, int*>(int*, int*, int*) */

int * std::__copy_move_a2<true,int*,int*>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<int>
                     (param_1,param_2,param_3);
  return piVar1;
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
/* void std::__fill_a<int*, int>(int*, int*, int const&) */

void std::__fill_a<int*,int>(int *param_1,int *param_2,int *param_3)

{
  __fill_a1<int*,int>(param_1,param_2,param_3);
  return;
}



/* int* std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int
   const*, int*) */

int * std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<int>
                (int *param_1,int *param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return param_3 + lVar1;
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

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_begin_catch@CXXABI_1.3 */
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

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_rethrow@CXXABI_1.3 */
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

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_end_catch@CXXABI_1.3 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZnwmRKSt9nothrow_t@GLIBCXX_3.4 */
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


