
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
  (*(code *)PTR_00105f40)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_00105f48)();
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00105f50)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00105f58)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00105f60)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00105f68)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00105f70)();
  return tVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00105f78)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00105f80)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00105f88)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00105f90)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00105f98)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105fa0)();
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



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00105fb8)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00105fc0)();
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



/* WARNING: Removing unreachable block (ram,0x00101283) */
/* WARNING: Removing unreachable block (ram,0x0010128f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001012c4) */
/* WARNING: Removing unreachable block (ram,0x001012d0) */

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



/* random_gen(int) */

ulong random_gen(int param_1)

{
  int iVar1;
  
  iVar1 = rand();
  return (long)iVar1 % (long)param_1 & 0xffffffff;
}



undefined8 main(void)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  time_t tVar3;
  ulong uVar4;
  int *piVar5;
  basic_ostream *pbVar6;
  long in_FS_OFFSET;
  int local_8c;
  int local_88;
  int local_84;
  allocator<int> local_80 [8];
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
  local_58 = 1;
  local_54 = 3;
  local_50 = 2;
  local_4c = 4;
  local_48 = 5;
  local_44 = 6;
  local_40 = 7;
  local_3c = 9;
  std::allocator<int>::allocator();
                    /* try { // try from 001013d6 to 001013da has its CatchHandler @ 00101664 */
  std::vector<int,std::allocator<int>>::vector((initializer_list)local_78,(allocator *)&local_58);
  std::allocator<int>::~allocator(local_80);
  tVar3 = time((time_t *)0x0);
  srand((uint)tVar3);
                    /* try { // try from 0010140c to 0010163f has its CatchHandler @ 00101682 */
  std::operator<<((basic_ostream *)std::cout,"Vector : ");
  local_8c = 0;
  while( true ) {
    uVar4 = std::vector<int,std::allocator<int>>::size();
    if (uVar4 <= (ulong)(long)local_8c) break;
    piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[](local_78,(long)local_8c);
    pbVar6 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
    std::operator<<(pbVar6," ");
    local_8c = local_8c + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  _Var1 = std::vector<int,std::allocator<int>>::end();
  _Var2 = std::vector<int,std::allocator<int>>::begin();
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int(&)(int)>
            (_Var2,_Var1,random_gen);
  std::operator<<((basic_ostream *)std::cout,"After random shuffling, Vector : ");
  local_88 = 0;
  while( true ) {
    uVar4 = std::vector<int,std::allocator<int>>::size();
    if (uVar4 <= (ulong)(long)local_88) break;
    piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[](local_78,(long)local_88);
    pbVar6 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
    std::operator<<(pbVar6," ");
    local_88 = local_88 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::
  linear_congruential_engine
            ((linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *)local_80,0);
  _Var1 = std::vector<int,std::allocator<int>>::end();
  _Var2 = std::vector<int,std::allocator<int>>::begin();
  std::
  shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>>
            (_Var2,_Var1,(linear_congruential_engine *)local_80);
  std::operator<<((basic_ostream *)std::cout,"After shuffling, Vector : ");
  local_84 = 0;
  while( true ) {
    uVar4 = std::vector<int,std::allocator<int>>::size();
    if (uVar4 <= (ulong)(long)local_84) break;
    piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[](local_78,(long)local_84);
    pbVar6 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
    std::operator<<(pbVar6," ");
    local_84 = local_84 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
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
    __cxa_atexit(PTR__Init_00105ff8,&std::__ioinit,&__dso_handle);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* random_gen(int) */

void _GLOBAL__sub_I_random_gen(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
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
                    /* try { // try from 00101801 to 00101805 has its CatchHandler @ 00101808 */
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
/* void std::random_shuffle<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>
   > >, int (&)(int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int (&)(int)) */

void std::
     random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int(&)(int)>
               (__normal_iterator param_1,__normal_iterator param_2,_func_int_int *param_3)

{
  bool bVar1;
  difference_type dVar2;
  int iVar3;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)local_40,(__normal_iterator *)&local_48);
  if (!bVar1) {
    local_30 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                         ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40,1
                         );
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_48), bVar1)
    {
      dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_30,(__normal_iterator *)local_40);
      iVar3 = (*param_3)(dVar2 + 1);
      local_28 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_40
                            ,(long)iVar3);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_30,(__normal_iterator)local_28);
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_30);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::linear_congruential_engine<unsigned long, 16807ul, 0ul,
   2147483647ul>::linear_congruential_engine(unsigned long) */

void __thiscall
std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::linear_congruential_engine
          (linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *this,ulong param_1)

{
  seed(this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::shuffle<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   std::linear_congruential_engine<unsigned long, 16807ul, 0ul, 2147483647ul>
   >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >,
   std::linear_congruential_engine<unsigned long, 16807ul, 0ul, 2147483647ul>&&) */

void std::
     shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>>
               (__normal_iterator param_1,__normal_iterator param_2,
               linear_congruential_engine *param_3)

{
  undefined auVar1 [16];
  bool bVar2;
  difference_type dVar3;
  __normal_iterator _Var4;
  __normal_iterator _Var5;
  pair pVar6;
  undefined4 extraout_var;
  ulong uVar7;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  long extraout_RDX;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48 [2];
  long local_38;
  long local_30;
  long local_20;
  
  local_70 = CONCAT44(in_register_0000003c,param_1);
  local_78 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)&local_78);
  if (!bVar2) {
    local_60 = 0x7ffffffd;
    dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    local_58 = CONCAT44(extraout_var,dVar3);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_58;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7ffffffd)) / auVar1,0) < local_58) {
      uniform_int_distribution<unsigned_long>::uniform_int_distribution();
      local_68 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                           ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                            &local_70,1);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_78),
            bVar2) {
        dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_68,(__normal_iterator *)&local_70);
        uniform_int_distribution<unsigned_long>::param_type::param_type
                  ((param_type *)&local_38,0,CONCAT44(extraout_var_02,dVar3));
        uVar7 = uniform_int_distribution<unsigned_long>::operator()
                          ((linear_congruential_engine *)local_48,(param_type *)param_3);
        _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_70
                           ,uVar7);
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  ((__normal_iterator)local_68,_Var4);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_68);
      }
    }
    else {
      local_48[0] = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator+((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_70,1);
      if ((local_58 & 1) == 0) {
        uniform_int_distribution<unsigned_long>::uniform_int_distribution
                  ((uniform_int_distribution<unsigned_long> *)&local_38,0,1);
        uVar7 = uniform_int_distribution<unsigned_long>::operator()
                          ((uniform_int_distribution<unsigned_long> *)&local_38,param_3);
        _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_70
                           ,uVar7);
        _Var5 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_48,
                           0);
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  (_Var5,_Var4);
      }
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)local_48,(__normal_iterator *)&local_78), bVar2
            ) {
        dVar3 = __gnu_cxx::operator-((__normal_iterator *)local_48,(__normal_iterator *)&local_70);
        local_50 = CONCAT44(extraout_var_00,dVar3) + 1;
        pVar6 = __gen_two_uniform_ints<unsigned_long,std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>&>
                          (local_50,CONCAT44(extraout_var_00,dVar3) + 2,param_3);
        local_38 = CONCAT44(extraout_var_01,pVar6);
        local_30 = extraout_RDX;
        _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_70
                           ,local_38);
        _Var5 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_48,
                           0);
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  (_Var5,_Var4);
        _Var4 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_70
                           ,local_30);
        _Var5 = __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                          ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)local_48,
                           0);
        iter_swap<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  (_Var5,_Var4);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned long&& std::forward<unsigned long>(std::remove_reference<unsigned long>::type&) */

ulong * std::forward<unsigned_long>(type *param_1)

{
  return (ulong *)param_1;
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



/* std::linear_congruential_engine<unsigned long, 16807ul, 0ul, 2147483647ul>::seed(unsigned long)
    */

void __thiscall
std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::seed
          (linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *this,ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = __detail::__mod<unsigned_long,2147483647ul,1ul,0ul>(0);
  if (uVar2 == 0) {
    uVar2 = __detail::__mod<unsigned_long,2147483647ul,1ul,0ul>(param_1);
    if (uVar2 == 0) {
      bVar1 = true;
      goto LAB_0010215c;
    }
  }
  bVar1 = false;
LAB_0010215c:
  if (bVar1) {
    *(undefined8 *)this = 1;
  }
  else {
    uVar2 = __detail::__mod<unsigned_long,2147483647ul,1ul,0ul>(param_1);
    *(ulong *)this = uVar2;
  }
  return;
}



/* std::uniform_int_distribution<unsigned long>::uniform_int_distribution(unsigned long, unsigned
   long) */

void __thiscall
std::uniform_int_distribution<unsigned_long>::uniform_int_distribution
          (uniform_int_distribution<unsigned_long> *this,ulong param_1,ulong param_2)

{
  param_type::param_type((param_type *)this,param_1,param_2);
  return;
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



/* unsigned long std::uniform_int_distribution<unsigned
   long>::TEMPNAMEPLACEHOLDERVALUE(std::linear_congruential_engine<unsigned long, 16807ul, 0ul,
   2147483647ul>&) */

ulong __thiscall
std::uniform_int_distribution<unsigned_long>::operator()
          (uniform_int_distribution<unsigned_long> *this,linear_congruential_engine *param_1)

{
  ulong uVar1;
  
  uVar1 = operator()((linear_congruential_engine *)this,(param_type *)param_1);
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::pair<unsigned long, unsigned long> std::__gen_two_uniform_ints<unsigned long,
   std::linear_congruential_engine<unsigned long, 16807ul, 0ul, 2147483647ul>&>(unsigned long,
   unsigned long, std::linear_congruential_engine<unsigned long, 16807ul, 0ul, 2147483647ul>&) */

pair std::
     __gen_two_uniform_ints<unsigned_long,std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>&>
               (ulong param_1,ulong param_2,linear_congruential_engine *param_3)

{
  pair pVar1;
  long in_FS_OFFSET;
  ulong local_38;
  ulong local_30;
  ulong local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uniform_int_distribution<unsigned_long>::uniform_int_distribution
            ((uniform_int_distribution<unsigned_long> *)local_28,0,param_1 * param_2 - 1);
  local_30 = uniform_int_distribution<unsigned_long>::operator()
                       ((uniform_int_distribution<unsigned_long> *)local_28,param_3);
  local_28[0] = local_30 % param_2;
  local_38 = local_30 / param_2;
  pVar1 = make_pair<unsigned_long,unsigned_long>(&local_38,local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uniform_int_distribution<unsigned long>::uniform_int_distribution() */

void std::uniform_int_distribution<unsigned_long>::uniform_int_distribution(void)

{
  uniform_int_distribution<unsigned_long> *in_RDI;
  
  uniform_int_distribution(in_RDI,0,0xffffffffffffffff);
  return;
}



/* std::uniform_int_distribution<unsigned long>::param_type::param_type(unsigned long, unsigned
   long) */

void __thiscall
std::uniform_int_distribution<unsigned_long>::param_type::param_type
          (param_type *this,ulong param_1,ulong param_2)

{
  *(ulong *)this = param_1;
  *(ulong *)(this + 8) = param_2;
  return;
}



/* unsigned long std::uniform_int_distribution<unsigned
   long>::TEMPNAMEPLACEHOLDERVALUE(std::linear_congruential_engine<unsigned long, 16807ul, 0ul,
   2147483647ul>&, std::uniform_int_distribution<unsigned long>::param_type const&) */

ulong std::uniform_int_distribution<unsigned_long>::operator()
                (linear_congruential_engine *param_1,param_type *param_2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_88;
  param_type local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = param_type::b();
  lVar3 = param_type::a();
  uVar4 = lVar2 - lVar3;
  if (uVar4 < 0x7ffffffd) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4 + 1;
    local_88 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7ffffffd)) / auVar1,0);
    do {
      lVar2 = linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::operator()
                        ((linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *)
                         param_2);
    } while ((uVar4 + 1) * local_88 <= lVar2 - 1U);
    local_88 = (lVar2 - 1U) / local_88;
  }
  else if (uVar4 < 0x7ffffffe) {
    lVar2 = linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::operator()
                      ((linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *)param_2
                      );
    local_88 = lVar2 - 1;
  }
  else {
    do {
      do {
        param_type::param_type(local_38,0,uVar4 / 0x7ffffffe);
        uVar5 = operator()(param_1,param_2);
        lVar2 = linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::operator()
                          ((linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *)
                           param_2);
        local_88 = (lVar2 + uVar5 * 0x7ffffffe) - 1;
      } while (uVar4 < local_88);
    } while (local_88 < uVar5 * 0x7ffffffe);
  }
  lVar2 = param_type::a();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2 + local_88;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
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



/* unsigned long std::__detail::__mod<unsigned long, 2147483647ul, 1ul, 0ul>(unsigned long) */

ulong std::__detail::__mod<unsigned_long,2147483647ul,1ul,0ul>(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = _Mod<unsigned_long,2147483647ul,1ul,0ul,true,true>::__calc(param_1);
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::pair<std::__strip_reference_wrapper<std::decay<unsigned long>::type>::__type,
   std::__strip_reference_wrapper<std::decay<unsigned long>::type>::__type> std::make_pair<unsigned
   long, unsigned long>(unsigned long&&, unsigned long&&) */

pair std::make_pair<unsigned_long,unsigned_long>(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long in_FS_OFFSET;
  pair local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = forward<unsigned_long>((type *)param_2);
  puVar2 = forward<unsigned_long>((type *)param_1);
  pair<unsigned_long,unsigned_long>::pair<unsigned_long,unsigned_long,true>
            ((pair<unsigned_long,unsigned_long> *)local_38,puVar2,puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38[0];
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uniform_int_distribution<unsigned long>::param_type::b() const */

undefined8 std::uniform_int_distribution<unsigned_long>::param_type::b(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 8);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uniform_int_distribution<unsigned long>::param_type::a() const */

undefined8 std::uniform_int_distribution<unsigned_long>::param_type::a(void)

{
  undefined8 *in_RDI;
  
  return *in_RDI;
}



/* std::linear_congruential_engine<unsigned long, 16807ul, 0ul,
   2147483647ul>::TEMPNAMEPLACEHOLDERVALUE() */

undefined8 __thiscall
std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::operator()
          (linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *this)

{
  ulong uVar1;
  
  uVar1 = __detail::__mod<unsigned_long,2147483647ul,16807ul,0ul>(*(ulong *)this);
  *(ulong *)this = uVar1;
  return *(undefined8 *)this;
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



/* std::__detail::_Mod<unsigned long, 2147483647ul, 1ul, 0ul, true, true>::__calc(unsigned long) */

ulong std::__detail::_Mod<unsigned_long,2147483647ul,1ul,0ul,true,true>::__calc(ulong param_1)

{
  return param_1 % 0x7fffffff;
}



/* std::pair<unsigned long, unsigned long>::pair<unsigned long, unsigned long, true>(unsigned
   long&&, unsigned long&&) */

void __thiscall
std::pair<unsigned_long,unsigned_long>::pair<unsigned_long,unsigned_long,true>
          (pair<unsigned_long,unsigned_long> *this,ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  
  puVar1 = forward<unsigned_long>((type *)param_1);
  *(ulong *)this = *puVar1;
  puVar1 = forward<unsigned_long>((type *)param_2);
  *(ulong *)(this + 8) = *puVar1;
  return;
}



/* unsigned long std::__detail::__mod<unsigned long, 2147483647ul, 16807ul, 0ul>(unsigned long) */

ulong std::__detail::__mod<unsigned_long,2147483647ul,16807ul,0ul>(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = _Mod<unsigned_long,2147483647ul,16807ul,0ul,true,true>::__calc(param_1);
  return uVar1;
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



/* std::__detail::_Mod<unsigned long, 2147483647ul, 16807ul, 0ul, true, true>::__calc(unsigned long)
    */

ulong std::__detail::_Mod<unsigned_long,2147483647ul,16807ul,0ul,true,true>::__calc(ulong param_1)

{
  return (param_1 * 0x41a7) % 0x7fffffff;
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

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* rand@GLIBC_2.2.5 */
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

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* time@GLIBC_2.2.5 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* srand@GLIBC_2.2.5 */
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


