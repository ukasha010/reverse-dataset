
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



/* isOdd(int) */

bool isOdd(int param_1)

{
  return (param_1 & 1U) != 0;
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
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  int *piVar6;
  basic_ostream *pbVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  allocator local_159;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  vector<int,std::allocator<int>> local_138 [32];
  vector<int,std::allocator<int>> local_118 [32];
  vector<int,std::allocator<int>> local_f8 [32];
  vector<int,std::allocator<int>> local_d8 [32];
  vector<int,std::allocator<int>> local_b8 [32];
  int local_98 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 5;
  local_74 = 3;
  local_70 = 2;
  local_6c = 8;
  local_68 = 0x42;
  local_64 = 2;
  local_60 = 5;
  local_5c = 9;
  local_58 = 10;
  std::allocator<int>::allocator();
                    /* try { // try from 001013a5 to 001013a9 has its CatchHandler @ 00101d4e */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_138,(allocator *)&local_78);
  std::allocator<int>::~allocator((allocator<int> *)local_98);
                    /* try { // try from 001013cd to 00101574 has its CatchHandler @ 00101e53 */
  std::operator<<((basic_ostream *)std::cout,"Vector : ");
  local_158 = 0;
  while( true ) {
    uVar8 = (ulong)local_158;
    uVar5 = std::vector<int,std::allocator<int>>::size();
    if (uVar5 <= uVar8) break;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_138,(long)local_158);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    local_158 = local_158 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_148 = 0;
  local_140 = 0;
  local_98[0] = 5;
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::remove<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                    (_Var3,_Var2,local_98);
  local_148 = CONCAT44(extraout_var,_Var2);
  std::operator<<((basic_ostream *)std::cout,"Updated vector : ");
  local_140 = std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_140,(__normal_iterator *)&local_148);
    if (!bVar1) break;
    piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_140);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_140,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_78 = 3;
  local_74 = 2;
  local_70 = 4;
  local_6c = 5;
  local_68 = 6;
  local_64 = 3;
  local_60 = 4;
  local_5c = 0x58;
  local_58 = 0xc;
  std::allocator<int>::allocator();
                    /* try { // try from 00101607 to 0010160b has its CatchHandler @ 00101d6f */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_118,(allocator *)&local_78);
  std::allocator<int>::~allocator((allocator<int> *)local_98);
                    /* try { // try from 0010162f to 001017b6 has its CatchHandler @ 00101e3b */
  std::operator<<((basic_ostream *)std::cout,"Vector 2 : ");
  local_154 = 0;
  while( true ) {
    uVar8 = (ulong)local_154;
    uVar5 = std::vector<int,std::allocator<int>>::size();
    if (uVar5 <= uVar8) break;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_118,(long)local_154);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    local_154 = local_154 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  _Var2 = std::vector<int,std::allocator<int>>::end();
  _Var3 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::
          remove_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int)>
                    (_Var3,_Var2,isOdd);
  local_148 = CONCAT44(extraout_var_00,_Var2);
  std::operator<<((basic_ostream *)std::cout,"\nUpdated vector 2 : ");
  local_140 = std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_140,(__normal_iterator *)&local_148);
    if (!bVar1) break;
    piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_140);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_140,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_78 = 5;
  local_74 = 6;
  local_70 = 7;
  local_6c = 3;
  local_68 = 4;
  local_64 = 2;
  local_60 = 5;
  local_5c = 4;
  local_58 = 6;
  local_54 = 3;
  local_50 = 7;
  std::allocator<int>::allocator();
                    /* try { // try from 00101846 to 0010184a has its CatchHandler @ 00101d8a */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_f8,(allocator *)&local_78);
  std::allocator<int>::~allocator((allocator<int> *)local_98);
  std::allocator<int>::allocator();
                    /* try { // try from 0010187f to 00101883 has its CatchHandler @ 00101da5 */
  std::vector<int,std::allocator<int>>::vector(local_d8,7,(allocator *)local_98);
  std::allocator<int>::~allocator((allocator<int> *)local_98);
                    /* try { // try from 001018a7 to 00101a4a has its CatchHandler @ 00101e14 */
  std::operator<<((basic_ostream *)std::cout,"\nVector 3 : ");
  local_150 = 0;
  while( true ) {
    uVar8 = (ulong)local_150;
    uVar5 = std::vector<int,std::allocator<int>>::size();
    if (uVar5 <= uVar8) break;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_f8,(long)local_150);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    local_150 = local_150 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_98[0] = 4;
  _Var2 = std::vector<int,std::allocator<int>>::begin();
  _Var3 = std::vector<int,std::allocator<int>>::end();
  _Var4 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::
          remove_copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                    (_Var4,_Var3,_Var2,local_98);
  local_148 = CONCAT44(extraout_var_01,_Var2);
  std::operator<<((basic_ostream *)std::cout,"Updated vector 4 : ");
  local_140 = std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_140,(__normal_iterator *)&local_148);
    if (!bVar1) break;
    piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_140);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_140,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_78 = 5;
  local_74 = 6;
  local_70 = 7;
  local_6c = 3;
  local_68 = 4;
  local_64 = 2;
  local_60 = 5;
  local_5c = 4;
  local_58 = 6;
  local_54 = 3;
  local_50 = 7;
  std::allocator<int>::allocator();
                    /* try { // try from 00101ada to 00101ade has its CatchHandler @ 00101dbd */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_b8,(allocator *)&local_78);
  std::allocator<int>::~allocator((allocator<int> *)local_98);
  std::allocator<int>::allocator();
                    /* try { // try from 00101b13 to 00101b17 has its CatchHandler @ 00101dd5 */
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_98,7,&local_159);
  std::allocator<int>::~allocator((allocator<int> *)&local_159);
                    /* try { // try from 00101b3b to 00101cd4 has its CatchHandler @ 00101ded */
  std::operator<<((basic_ostream *)std::cout,"\nVector 5 : ");
  local_14c = 0;
  while( true ) {
    uVar8 = (ulong)local_14c;
    uVar5 = std::vector<int,std::allocator<int>>::size();
    if (uVar5 <= uVar8) break;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_b8,(long)local_14c);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    local_14c = local_14c + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  _Var2 = std::vector<int,std::allocator<int>>::begin();
  _Var3 = std::vector<int,std::allocator<int>>::end();
  _Var4 = std::vector<int,std::allocator<int>>::begin();
  _Var2 = std::
          remove_copy_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int)>
                    (_Var4,_Var3,_Var2,isOdd);
  local_148 = CONCAT44(extraout_var_02,_Var2);
  std::operator<<((basic_ostream *)std::cout,"Updated vector 6 : ");
  local_140 = std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_140,(__normal_iterator *)&local_148);
    if (!bVar1) break;
    piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_140);
    pbVar7 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar6);
    std::operator<<(pbVar7," ");
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_140,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_98);
  std::vector<int,std::allocator<int>>::~vector(local_b8);
  std::vector<int,std::allocator<int>>::~vector(local_d8);
  std::vector<int,std::allocator<int>>::~vector(local_f8);
  std::vector<int,std::allocator<int>>::~vector(local_118);
  std::vector<int,std::allocator<int>>::~vector(local_138);
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



/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
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
                    /* try { // try from 00102005 to 00102009 has its CatchHandler @ 0010200c */
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
   std::remove<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

__normal_iterator
std::remove<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
          (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  _Iter_equals_val _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __gnu_cxx::__ops::__iter_equals_val<int_const>(param_3);
  _Var2 = __remove_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                    (param_1,param_2,_Var1);
  return _Var2;
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
   std::remove_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool
   (*)(int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int)) */

__normal_iterator
std::remove_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int)>
          (__normal_iterator param_1,__normal_iterator param_2,_func_bool_int *param_3)

{
  _Iter_pred _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __gnu_cxx::__ops::__pred_iter<bool(*)(int)>(param_3);
  _Var2 = __remove_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
                    (param_1,param_2,_Var1);
  return _Var2;
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
                    /* try { // try from 001022fb to 001022ff has its CatchHandler @ 00102302 */
  _M_default_initialize(this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::remove_copy<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */

__normal_iterator
std::
remove_copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          int *param_4)

{
  _Iter_equals_val _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __gnu_cxx::__ops::__iter_equals_val<int_const>(param_4);
  _Var2 = __remove_copy_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                    (param_1,param_2,param_3,_Var1);
  return _Var2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::remove_copy_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool
   (*)(int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int)) */

__normal_iterator
std::
remove_copy_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int)>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          _func_bool_int *param_4)

{
  _Iter_pred _Var1;
  __normal_iterator _Var2;
  
  _Var1 = __gnu_cxx::__ops::__pred_iter<bool(*)(int)>(param_4);
  _Var2 = __remove_copy_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
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
   std::__remove_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_equals_val<int const>) */

__normal_iterator
std::
__remove_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_equals_val param_3)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  undefined4 extraout_var;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Var3 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
                    (param_1,param_2,param_3);
  local_30 = CONCAT44(extraout_var,_Var3);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
  if (bVar2) {
    _Var3 = (__normal_iterator)local_30;
  }
  else {
    local_28 = local_30;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
      if (!bVar2) break;
      bVar2 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                        ((_Iter_equals_val<int_const> *)&local_40,(__normal_iterator)local_30);
      if (!bVar2) {
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_30);
        puVar5 = (undefined4 *)move<int&>(piVar4);
        uVar1 = *puVar5;
        puVar5 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                            &local_28);
        *puVar5 = uVar1;
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    }
    _Var3 = (__normal_iterator)local_28;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__remove_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>) */

__normal_iterator
std::
__remove_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_pred param_3)

{
  undefined4 uVar1;
  bool bVar2;
  __normal_iterator _Var3;
  undefined4 extraout_var;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Var3 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
                    (param_1,param_2,param_3);
  local_30 = CONCAT44(extraout_var,_Var3);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
  if (bVar2) {
    _Var3 = (__normal_iterator)local_30;
  }
  else {
    local_28 = local_30;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
      if (!bVar2) break;
      bVar2 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                        ((_Iter_pred<bool(*)(int)> *)&local_40,(__normal_iterator)local_30);
      if (!bVar2) {
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_30);
        puVar5 = (undefined4 *)move<int&>(piVar4);
        uVar1 = *puVar5;
        puVar5 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                            &local_28);
        *puVar5 = uVar1;
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    }
    _Var3 = (__normal_iterator)local_28;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var3;
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
                    /* try { // try from 0010297c to 00102980 has its CatchHandler @ 00102983 */
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__remove_copy_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_equals_val<int const> >(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_equals_val<int const>) */

__normal_iterator
std::
__remove_copy_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_equals_val<int_const>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          _Iter_equals_val param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_38 = CONCAT44(in_register_0000000c,param_4);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    bVar2 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_38,(__normal_iterator)local_20[0]);
    if (!bVar2) {
      puVar3 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
      uVar1 = *puVar3;
      puVar3 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30)
      ;
      *puVar3 = uVar1;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  return (__normal_iterator)local_30;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__remove_copy_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
   >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>) */

__normal_iterator
std::
__remove_copy_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
          _Iter_pred param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = CONCAT44(in_register_00000014,param_3);
  local_38 = CONCAT44(in_register_0000000c,param_4);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_20,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    bVar2 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_38,(__normal_iterator)local_20[0]);
    if (!bVar2) {
      puVar3 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
      uVar1 = *puVar3;
      puVar3 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30)
      ;
      *puVar3 = uVar1;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  return (__normal_iterator)local_30;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int&>::type&& std::move<int&>(int&) */

type * std::move<int&>(int *param_1)

{
  return (type *)param_1;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>) */

__normal_iterator
std::
__find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_pred param_3)

{
  __normal_iterator _Var1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  __iterator_category<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            ((__normal_iterator *)&local_10);
  _Var1 = __find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
                    ((__normal_iterator)local_10,param_2,param_3,param_2);
  return _Var1;
}



/* bool __gnu_cxx::__ops::_Iter_pred<bool
   (*)(int)>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
          (_Iter_pred<bool(*)(int)> *this,__normal_iterator param_1)

{
  code *pcVar1;
  undefined uVar2;
  undefined4 *puVar3;
  undefined4 in_register_00000034;
  undefined8 local_28;
  _Iter_pred<bool(*)(int)> *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  pcVar1 = *(code **)this;
  local_20 = this;
  puVar3 = (undefined4 *)
           __normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                     ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
  uVar2 = (*pcVar1)(*puVar3);
  return (bool)uVar2;
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
LAB_00103158:
    bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                      ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  else {
    if (3 < lVar3) goto LAB_001031aa;
    if (lVar3 != 1) {
      if (lVar3 != 2) goto LAB_001031aa;
      goto LAB_00103158;
    }
  }
  bVar1 = __gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
                    ((_Iter_equals_val<int_const> *)&local_30,(__normal_iterator)local_20[0]);
  if (bVar1) {
    return (__normal_iterator)local_20[0];
  }
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_001031aa:
  return (__normal_iterator)local_28;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >
   std::__find_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> >(__gnu_cxx::__normal_iterator<int*, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, __gnu_cxx::__ops::_Iter_pred<bool (*)(int)>, std::random_access_iterator_tag) */

__normal_iterator
std::
__find_if<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__ops::_Iter_pred<bool(*)(int)>>
          (__normal_iterator param_1,__normal_iterator param_2,_Iter_pred param_3,
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
    bVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
    bVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
  lVar3 = CONCAT44(extraout_var_00,dVar2);
  if (lVar3 == 3) {
    bVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_00103302:
    bVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                      ((_Iter_pred<bool(*)(int)> *)&local_30,(__normal_iterator)local_20[0]);
    if (bVar1) {
      return (__normal_iterator)local_20[0];
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
  }
  else {
    if (3 < lVar3) goto LAB_00103354;
    if (lVar3 != 1) {
      if (lVar3 != 2) goto LAB_00103354;
      goto LAB_00103302;
    }
  }
  bVar1 = __gnu_cxx::__ops::_Iter_pred<bool(*)(int)>::operator()
                    ((_Iter_pred<bool(*)(int)> *)&local_30,(__normal_iterator)local_20[0]);
  if (bVar1) {
    return (__normal_iterator)local_20[0];
  }
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
            ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_20);
LAB_00103354:
  return (__normal_iterator)local_28;
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
/* void std::__fill_a<int*, int>(int*, int*, int const&) */

void std::__fill_a<int*,int>(int *param_1,int *param_2,int *param_3)

{
  __fill_a1<int*,int>(param_1,param_2,param_3);
  return;
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


