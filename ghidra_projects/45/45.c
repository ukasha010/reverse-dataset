
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
  (*(code *)PTR_00105f30)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fc8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
  (*(code *)PTR_operator<<_00105f38)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00105f40)();
  return;
}



void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00105f48)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00105f50)();
  return;
}



void __thiscall
std::basic_istream<char,std::char_traits<char>>::operator>>
          (basic_istream<char,std::char_traits<char>> *this,int *param_1)

{
  (*(code *)PTR_operator>>_00105f58)();
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

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00105f70)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00105f78)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00105f80)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00105f88)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105f90)();
  return;
}



void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00105f98)();
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



void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00105fb0)();
  return;
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



/* WARNING: Removing unreachable block (ram,0x001012c3) */
/* WARNING: Removing unreachable block (ram,0x001012cf) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101304) */
/* WARNING: Removing unreachable block (ram,0x00101310) */

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
  char cVar1;
  basic_ostream *this;
  ulong uVar2;
  basic_ostream<char,std::char_traits<char>> *pbVar3;
  int *piVar4;
  long in_FS_OFFSET;
  int local_80;
  int local_7c;
  stack<int,std::deque<int,std::allocator<int>>> local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::stack<int,std::deque<int,std::allocator<int>>>::
  stack<std::deque<int,std::allocator<int>>,void>();
                    /* try { // try from 001013a5 to 00101488 has its CatchHandler @ 001014cc */
  std::operator<<((basic_ostream *)std::cout,"Enter the n : ");
  std::basic_istream<char,std::char_traits<char>>::operator>>
            ((basic_istream<char,std::char_traits<char>> *)std::cin,&local_80);
  this = std::operator<<((basic_ostream *)std::cout,"Enter the elements into the stack : ");
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)this,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  for (; local_80 != 0; local_80 = local_80 + -1) {
    std::basic_istream<char,std::char_traits<char>>::operator>>
              ((basic_istream<char,std::char_traits<char>> *)std::cin,&local_7c);
    std::stack<int,std::deque<int,std::allocator<int>>>::push(local_78,&local_7c);
  }
  uVar2 = std::stack<int,std::deque<int,std::allocator<int>>>::size();
  pbVar3 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,uVar2);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar3,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00105fd0);
  while( true ) {
    cVar1 = std::stack<int,std::deque<int,std::allocator<int>>>::empty();
    if (cVar1 == '\x01') break;
    piVar4 = (int *)std::stack<int,std::deque<int,std::allocator<int>>>::top();
    pbVar3 = (basic_ostream<char,std::char_traits<char>> *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar4);
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              (pbVar3,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                      PTR_endl<char,std_char_traits<char>>_00105fd0);
    std::stack<int,std::deque<int,std::allocator<int>>>::pop();
  }
  std::stack<int,std::deque<int,std::allocator<int>>>::~stack(local_78);
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
    __cxa_atexit(PTR__Init_00105ff8,&std::__ioinit,&__dso_handle);
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
/* std::__deque_buf_size(unsigned long) */

undefined8 std::__deque_buf_size(ulong param_1)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  
  if (param_1 < 0x200) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    uVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x200)) / auVar1,0);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* std::stack<int, std::deque<int, std::allocator<int> > >::~stack() */

void __thiscall
std::stack<int,std::deque<int,std::allocator<int>>>::~stack
          (stack<int,std::deque<int,std::allocator<int>>> *this)

{
  deque<int,std::allocator<int>>::~deque((deque<int,std::allocator<int>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::deque() */

void std::deque<int,std::allocator<int>>::deque(void)

{
  _Deque_base<int,std::allocator<int>>::_Deque_base();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::stack<int, std::deque<int, std::allocator<int> > >::stack<std::deque<int,
   std::allocator<int> >, void>() */

void std::stack<int,std::deque<int,std::allocator<int>>>::
     stack<std::deque<int,std::allocator<int>>,void>(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  in_RDI[3] = 0;
  in_RDI[4] = 0;
  in_RDI[5] = 0;
  in_RDI[6] = 0;
  in_RDI[7] = 0;
  in_RDI[8] = 0;
  in_RDI[9] = 0;
  deque<int,std::allocator<int>>::deque();
  return;
}



/* std::deque<int, std::allocator<int> >::~deque() */

void __thiscall std::deque<int,std::allocator<int>>::~deque(deque<int,std::allocator<int>> *this)

{
  long in_FS_OFFSET;
  undefined local_68 [32];
  allocator local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Deque_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  end();
  begin();
  _M_destroy_data((_Deque_iterator)this,(_Deque_iterator)local_68,local_48);
  _Deque_base<int,std::allocator<int>>::~_Deque_base((_Deque_base<int,std::allocator<int>> *)this);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::stack<int, std::deque<int, std::allocator<int> > >::push(int const&) */

void __thiscall
std::stack<int,std::deque<int,std::allocator<int>>>::push
          (stack<int,std::deque<int,std::allocator<int>>> *this,int *param_1)

{
  deque<int,std::allocator<int>>::push_back((deque<int,std::allocator<int>> *)this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::stack<int, std::deque<int, std::allocator<int> > >::size() const */

void std::stack<int,std::deque<int,std::allocator<int>>>::size(void)

{
  deque<int,std::allocator<int>>::size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::stack<int, std::deque<int, std::allocator<int> > >::empty() const */

void std::stack<int,std::deque<int,std::allocator<int>>>::empty(void)

{
  deque<int,std::allocator<int>>::empty();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::stack<int, std::deque<int, std::allocator<int> > >::top() */

void std::stack<int,std::deque<int,std::allocator<int>>>::top(void)

{
  deque<int,std::allocator<int>>::back();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::stack<int, std::deque<int, std::allocator<int> > >::pop() */

void std::stack<int,std::deque<int,std::allocator<int>>>::pop(void)

{
  deque<int,std::allocator<int>>::pop_back();
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::_Deque_impl::~_Deque_impl() */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_Deque_impl::~_Deque_impl(_Deque_impl *this)

{
  allocator<int>::~allocator((allocator<int> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<int, std::allocator<int> >::_Deque_base() */

void std::_Deque_base<int,std::allocator<int>>::_Deque_base(void)

{
  _Deque_impl *in_RDI;
  
  _Deque_impl::_Deque_impl(in_RDI);
                    /* try { // try from 001017db to 001017df has its CatchHandler @ 001017e2 */
  _M_initialize_map((_Deque_base<int,std::allocator<int>> *)in_RDI,0);
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::~_Deque_base() */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::~_Deque_base(_Deque_base<int,std::allocator<int>> *this)

{
  if (*(long *)this != 0) {
    _M_destroy_nodes(this,*(int ***)(this + 0x28),(int **)(*(long *)(this + 0x48) + 8));
    _M_deallocate_map(this,*(int ***)this,*(ulong *)(this + 8));
  }
  _Deque_impl::~_Deque_impl((_Deque_impl *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::begin() */

_Deque_iterator<int,int&,int*> * std::deque<int,std::allocator<int>>::begin(void)

{
  long in_RSI;
  _Deque_iterator<int,int&,int*> *in_RDI;
  
  _Deque_iterator<int,int&,int*>::_Deque_iterator(in_RDI,(_Deque_iterator *)(in_RSI + 0x10));
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::end() */

_Deque_iterator<int,int&,int*> * std::deque<int,std::allocator<int>>::end(void)

{
  long in_RSI;
  _Deque_iterator<int,int&,int*> *in_RDI;
  
  _Deque_iterator<int,int&,int*>::_Deque_iterator(in_RDI,(_Deque_iterator *)(in_RSI + 0x30));
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<int, std::allocator<int> >::_M_get_Tp_allocator() */

undefined8 std::_Deque_base<int,std::allocator<int>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::deque<int, std::allocator<int> >::_M_destroy_data(std::_Deque_iterator<int, int&, int*>,
   std::_Deque_iterator<int, int&, int*>, std::allocator<int> const&) */

void std::deque<int,std::allocator<int>>::_M_destroy_data
               (_Deque_iterator param_1,_Deque_iterator param_2,allocator *param_3)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::deque<int, std::allocator<int> >::push_back(int const&) */

void __thiscall
std::deque<int,std::allocator<int>>::push_back(deque<int,std::allocator<int>> *this,int *param_1)

{
  if (*(long *)(this + 0x30) == *(long *)(this + 0x40) + -4) {
    _M_push_back_aux<int_const&>(this,param_1);
  }
  else {
    allocator_traits<std::allocator<int>>::construct<int,int_const&>
              ((allocator *)this,*(int **)(this + 0x30),param_1);
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 4;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::size() const */

void std::deque<int,std::allocator<int>>::size(void)

{
  long in_RDI;
  
  operator-((_Deque_iterator *)(in_RDI + 0x30),(_Deque_iterator *)(in_RDI + 0x10));
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::empty() const */

void std::deque<int,std::allocator<int>>::empty(void)

{
  long in_RDI;
  
  operator==((_Deque_iterator *)(in_RDI + 0x30),(_Deque_iterator *)(in_RDI + 0x10));
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::back() */

void std::deque<int,std::allocator<int>>::back(void)

{
  long in_FS_OFFSET;
  _Deque_iterator<int,int&,int*> local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  end();
  _Deque_iterator<int,int&,int*>::operator--(local_38);
  _Deque_iterator<int,int&,int*>::operator*(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::pop_back() */

void std::deque<int,std::allocator<int>>::pop_back(void)

{
  int *piVar1;
  allocator *paVar2;
  long in_RDI;
  
  if (*(long *)(in_RDI + 0x30) == *(long *)(in_RDI + 0x38)) {
    _M_pop_back_aux();
  }
  else {
    *(long *)(in_RDI + 0x30) = *(long *)(in_RDI + 0x30) + -4;
    piVar1 = *(int **)(in_RDI + 0x30);
    paVar2 = (allocator *)_Deque_base<int,std::allocator<int>>::_M_get_Tp_allocator();
    allocator_traits<std::allocator<int>>::destroy<int>(paVar2,piVar1);
  }
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::_Deque_impl::_Deque_impl() */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_Deque_impl::_Deque_impl(_Deque_impl *this)

{
  allocator<int>::allocator();
  _Deque_impl_data::_Deque_impl_data((_Deque_impl_data *)this);
  return;
}



/* std::allocator<int>::~allocator() */

void __thiscall std::allocator<int>::~allocator(allocator<int> *this)

{
  __gnu_cxx::new_allocator<int>::~new_allocator((new_allocator<int> *)this);
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::_M_initialize_map(unsigned long) */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_M_initialize_map
          (_Deque_base<int,std::allocator<int>> *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong local_48;
  ulong local_40;
  long local_38;
  int **local_30;
  int **local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = __deque_buf_size(4);
  local_38 = param_1 / uVar2 + 1;
  local_40 = param_1 / uVar2 + 3;
  local_48 = 8;
  puVar3 = max<unsigned_long>(&local_48,&local_40);
  *(ulong *)(this + 8) = *puVar3;
  uVar4 = _M_allocate_map(this,*(ulong *)(this + 8));
  *(undefined8 *)this = uVar4;
  local_30 = (int **)(((ulong)(*(long *)(this + 8) - local_38) >> 1) * 8 + *(long *)this);
  local_28 = local_30 + local_38;
                    /* try { // try from 00101bf3 to 00101bf7 has its CatchHandler @ 00101c83 */
  _M_create_nodes(this,local_30,local_28);
  _Deque_iterator<int,int&,int*>::_M_set_node
            ((_Deque_iterator<int,int&,int*> *)(this + 0x10),local_30);
  _Deque_iterator<int,int&,int*>::_M_set_node
            ((_Deque_iterator<int,int&,int*> *)(this + 0x30),local_28 + -1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
  lVar1 = *(long *)(this + 0x38);
  uVar2 = __deque_buf_size(4);
  *(ulong *)(this + 0x30) = lVar1 + (param_1 % uVar2) * 4;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::_M_destroy_nodes(int**, int**) */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_M_destroy_nodes
          (_Deque_base<int,std::allocator<int>> *this,int **param_1,int **param_2)

{
  int **local_10;
  
  for (local_10 = param_1; local_10 < param_2; local_10 = local_10 + 1) {
    _M_deallocate_node(this,*local_10);
  }
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::_M_deallocate_map(int**, unsigned long) */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_M_deallocate_map
          (_Deque_base<int,std::allocator<int>> *this,int **param_1,ulong param_2)

{
  long in_FS_OFFSET;
  allocator local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _M_get_map_allocator();
  allocator_traits<std::allocator<int*>>::deallocate(&local_11,param_1,param_2);
  allocator<int*>::~allocator((allocator<int*> *)&local_11);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Deque_iterator<int, int&, int*>::_Deque_iterator(std::_Deque_iterator<int, int&, int*>
   const&) */

void __thiscall
std::_Deque_iterator<int,int&,int*>::_Deque_iterator
          (_Deque_iterator<int,int&,int*> *this,_Deque_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 6);
  return;
}



/* void std::allocator_traits<std::allocator<int> >::construct<int, int
   const&>(std::allocator<int>&, int*, int const&) */

void std::allocator_traits<std::allocator<int>>::construct<int,int_const&>
               (allocator *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = forward<int_const&>((type *)param_3);
  __gnu_cxx::new_allocator<int>::construct<int,int_const&>
            ((new_allocator<int> *)param_1,param_2,piVar1);
  return;
}



/* void std::deque<int, std::allocator<int> >::_M_push_back_aux<int const&>(int const&) */

void __thiscall
std::deque<int,std::allocator<int>>::_M_push_back_aux<int_const&>
          (deque<int,std::allocator<int>> *this,int *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  lVar1 = size();
  lVar2 = max_size();
  if (lVar1 == lVar2) {
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  _M_reserve_map_at_back(this,1);
  lVar1 = *(long *)(this + 0x48);
  uVar3 = _Deque_base<int,std::allocator<int>>::_M_allocate_node();
  *(undefined8 *)(lVar1 + 8) = uVar3;
  piVar4 = forward<int_const&>((type *)param_1);
  allocator_traits<std::allocator<int>>::construct<int,int_const&>
            ((allocator *)this,*(int **)(this + 0x30),piVar4);
  _Deque_iterator<int,int&,int*>::_M_set_node
            ((_Deque_iterator<int,int&,int*> *)(this + 0x30),(int **)(*(long *)(this + 0x48) + 8));
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x38);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Deque_iterator<int, int&, int*> const&,
   std::_Deque_iterator<int, int&, int*> const&) */

long std::operator-(_Deque_iterator *param_1,_Deque_iterator *param_2)

{
  long lVar1;
  
  lVar1 = _Deque_iterator<int,int&,int*>::_S_buffer_size();
  return (*(long *)(param_2 + 4) - *(long *)param_2 >> 2) +
         lVar1 * ((*(long *)(param_1 + 6) - *(long *)(param_2 + 6) >> 3) -
                 (ulong)(*(long *)(param_1 + 6) != 0)) +
         (*(long *)param_1 - *(long *)(param_1 + 2) >> 2);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Deque_iterator<int, int&, int*> const&,
   std::_Deque_iterator<int, int&, int*> const&) */

undefined8 std::operator==(_Deque_iterator *param_1,_Deque_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}



/* std::_Deque_iterator<int, int&, int*>::TEMPNAMEPLACEHOLDERVALUE() */

_Deque_iterator<int,int&,int*> * __thiscall
std::_Deque_iterator<int,int&,int*>::operator--(_Deque_iterator<int,int&,int*> *this)

{
  if (*(long *)this == *(long *)(this + 8)) {
    _M_set_node(this,(int **)(*(long *)(this + 0x18) + -8));
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  *(long *)this = *(long *)this + -4;
  return this;
}



/* std::_Deque_iterator<int, int&, int*>::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
std::_Deque_iterator<int,int&,int*>::operator*(_Deque_iterator<int,int&,int*> *this)

{
  return *(undefined8 *)this;
}



/* void std::allocator_traits<std::allocator<int> >::destroy<int>(std::allocator<int>&, int*) */

void std::allocator_traits<std::allocator<int>>::destroy<int>(allocator *param_1,int *param_2)

{
  __gnu_cxx::new_allocator<int>::destroy<int>((int *)param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::_M_pop_back_aux() */

void std::deque<int,std::allocator<int>>::_M_pop_back_aux(void)

{
  int *piVar1;
  allocator *paVar2;
  _Deque_base<int,std::allocator<int>> *in_RDI;
  
  _Deque_base<int,std::allocator<int>>::_M_deallocate_node(in_RDI,*(int **)(in_RDI + 0x38));
  _Deque_iterator<int,int&,int*>::_M_set_node
            ((_Deque_iterator<int,int&,int*> *)(in_RDI + 0x30),
             (int **)(*(long *)(in_RDI + 0x48) + -8));
  *(long *)(in_RDI + 0x30) = *(long *)(in_RDI + 0x40) + -4;
  piVar1 = *(int **)(in_RDI + 0x30);
  paVar2 = (allocator *)_Deque_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  allocator_traits<std::allocator<int>>::destroy<int>(paVar2,piVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<int>::allocator() */

void std::allocator<int>::allocator(void)

{
  __gnu_cxx::new_allocator<int>::new_allocator();
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::_Deque_impl_data::_Deque_impl_data() */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_Deque_impl_data::_Deque_impl_data
          (_Deque_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  _Deque_iterator<int,int&,int*>::_Deque_iterator();
  _Deque_iterator<int,int&,int*>::_Deque_iterator();
  return;
}



/* __gnu_cxx::new_allocator<int>::~new_allocator() */

void __thiscall __gnu_cxx::new_allocator<int>::~new_allocator(new_allocator<int> *this)

{
  return;
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



/* std::_Deque_base<int, std::allocator<int> >::_M_allocate_map(unsigned long) */

undefined8 __thiscall
std::_Deque_base<int,std::allocator<int>>::_M_allocate_map
          (_Deque_base<int,std::allocator<int>> *this,ulong param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _M_get_map_allocator();
                    /* try { // try from 001021d9 to 001021dd has its CatchHandler @ 00102202 */
  uVar1 = allocator_traits<std::allocator<int*>>::allocate(&local_21,param_1);
  allocator<int*>::~allocator((allocator<int*> *)&local_21);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* std::_Deque_base<int, std::allocator<int> >::_M_create_nodes(int**, int**) */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_M_create_nodes
          (_Deque_base<int,std::allocator<int>> *this,int **param_1,int **param_2)

{
  int *piVar1;
  int **local_20;
  
  for (local_20 = param_1; local_20 < param_2; local_20 = local_20 + 1) {
                    /* try { // try from 00102256 to 0010225a has its CatchHandler @ 00102273 */
    piVar1 = (int *)_M_allocate_node();
    *local_20 = piVar1;
  }
  return;
}



/* std::_Deque_iterator<int, int&, int*>::_M_set_node(int**) */

void __thiscall
std::_Deque_iterator<int,int&,int*>::_M_set_node(_Deque_iterator<int,int&,int*> *this,int **param_1)

{
  long lVar1;
  long lVar2;
  
  *(int ***)(this + 0x18) = param_1;
  *(int **)(this + 8) = *param_1;
  lVar1 = *(long *)(this + 8);
  lVar2 = _S_buffer_size();
  *(long *)(this + 0x10) = lVar1 + lVar2 * 4;
  return;
}



/* std::_Deque_base<int, std::allocator<int> >::_M_deallocate_node(int*) */

void __thiscall
std::_Deque_base<int,std::allocator<int>>::_M_deallocate_node
          (_Deque_base<int,std::allocator<int>> *this,int *param_1)

{
  ulong uVar1;
  
  uVar1 = __deque_buf_size(4);
  allocator_traits<std::allocator<int>>::deallocate((allocator *)this,param_1,uVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<int, std::allocator<int> >::_M_get_map_allocator() const */

allocator * std::_Deque_base<int,std::allocator<int>>::_M_get_map_allocator(void)

{
  allocator *in_RDI;
  
  _M_get_Tp_allocator();
  allocator<int*>::allocator<int>(in_RDI);
  return in_RDI;
}



/* std::allocator<int*>::~allocator() */

void __thiscall std::allocator<int*>::~allocator(allocator<int*> *this)

{
  __gnu_cxx::new_allocator<int*>::~new_allocator((new_allocator<int*> *)this);
  return;
}



/* std::allocator_traits<std::allocator<int*> >::deallocate(std::allocator<int*>&, int**, unsigned
   long) */

void std::allocator_traits<std::allocator<int*>>::deallocate
               (allocator *param_1,int **param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<int*>::deallocate((new_allocator<int*> *)param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int const& std::forward<int const&>(std::remove_reference<int const&>::type&) */

int * std::forward<int_const&>(type *param_1)

{
  return (int *)param_1;
}



/* void __gnu_cxx::new_allocator<int>::construct<int, int const&>(int*, int const&) */

void __thiscall
__gnu_cxx::new_allocator<int>::construct<int,int_const&>
          (new_allocator<int> *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = std::forward<int_const&>((type *)param_2);
  iVar1 = *piVar2;
  piVar2 = (int *)operator_new(4,param_1);
  *piVar2 = iVar1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<int, std::allocator<int> >::max_size() const */

void std::deque<int,std::allocator<int>>::max_size(void)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Deque_base<int,std::allocator<int>>::_M_get_Tp_allocator();
  _S_max_size(paVar1);
  return;
}



/* std::deque<int, std::allocator<int> >::_M_reserve_map_at_back(unsigned long) */

void __thiscall
std::deque<int,std::allocator<int>>::_M_reserve_map_at_back
          (deque<int,std::allocator<int>> *this,ulong param_1)

{
  if ((ulong)(*(long *)(this + 8) - (*(long *)(this + 0x48) - *(long *)this >> 3)) < param_1 + 1) {
    _M_reallocate_map(this,param_1,false);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<int, std::allocator<int> >::_M_allocate_node() */

void std::_Deque_base<int,std::allocator<int>>::_M_allocate_node(void)

{
  ulong uVar1;
  allocator *in_RDI;
  
  uVar1 = __deque_buf_size(4);
  allocator_traits<std::allocator<int>>::allocate(in_RDI,uVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_iterator<int, int&, int*>::_S_buffer_size() */

void std::_Deque_iterator<int,int&,int*>::_S_buffer_size(void)

{
  __deque_buf_size(4);
  return;
}



/* void __gnu_cxx::new_allocator<int>::destroy<int>(int*) */

void __gnu_cxx::new_allocator<int>::destroy<int>(int *param_1)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<int>::new_allocator() */

void __gnu_cxx::new_allocator<int>::new_allocator(void)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_iterator<int, int&, int*>::_Deque_iterator() */

void std::_Deque_iterator<int,int&,int*>::_Deque_iterator(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  in_RDI[3] = 0;
  return;
}



/* std::allocator_traits<std::allocator<int*> >::allocate(std::allocator<int*>&, unsigned long) */

void std::allocator_traits<std::allocator<int*>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<int*>::allocate((ulong)param_1,(void *)param_2);
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */

undefined8 std::_Deque_base<int,std::allocator<int>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::allocator<int*>::allocator<int>(std::allocator<int> const&) */

void std::allocator<int*>::allocator<int>(allocator *param_1)

{
  __gnu_cxx::new_allocator<int*>::new_allocator();
  return;
}



/* __gnu_cxx::new_allocator<int*>::~new_allocator() */

void __thiscall __gnu_cxx::new_allocator<int*>::~new_allocator(new_allocator<int*> *this)

{
  return;
}



/* __gnu_cxx::new_allocator<int*>::deallocate(int**, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<int*>::deallocate(new_allocator<int*> *this,int **param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 8);
  return;
}



/* std::deque<int, std::allocator<int> >::_S_max_size(std::allocator<int> const&) */

ulong std::deque<int,std::allocator<int>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x7fffffffffffffff;
  local_18 = allocator_traits<std::allocator<int>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}



/* std::deque<int, std::allocator<int> >::_M_reallocate_map(unsigned long, bool) */

void __thiscall
std::deque<int,std::allocator<int>>::_M_reallocate_map
          (deque<int,std::allocator<int>> *this,ulong param_1,bool param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong local_58;
  long *local_50;
  int **local_40;
  long local_38;
  long local_30;
  ulong local_28;
  long local_20;
  
  local_38 = (*(long *)(this + 0x48) - *(long *)(this + 0x28) >> 3) + 1;
  local_30 = local_38 + param_1;
  local_58 = param_1;
  local_50 = (long *)this;
  if ((ulong)(local_30 * 2) < *(ulong *)(this + 8)) {
    if (param_2) {
      lVar1 = param_1 << 3;
    }
    else {
      lVar1 = 0;
    }
    local_40 = (int **)(lVar1 + ((ulong)(*(long *)(this + 8) - local_30) >> 1) * 8 + *(long *)this);
    if (local_40 < *(int ***)(this + 0x28)) {
      copy<int**,int**>(*(int ***)(this + 0x28),(int **)(*(long *)(this + 0x48) + 8),local_40);
    }
    else {
      copy_backward<int**,int**>
                (*(int ***)(this + 0x28),(int **)(*(long *)(this + 0x48) + 8),local_40 + local_38);
    }
  }
  else {
    lVar1 = *(long *)(this + 8);
    puVar2 = max<unsigned_long>((ulong *)(this + 8),&local_58);
    local_28 = *puVar2 + lVar1 + 2;
    local_20 = _Deque_base<int,std::allocator<int>>::_M_allocate_map
                         ((_Deque_base<int,std::allocator<int>> *)local_50,local_28);
    if (param_2) {
      lVar1 = local_58 << 3;
    }
    else {
      lVar1 = 0;
    }
    local_40 = (int **)(local_20 + (local_28 - local_30 >> 1) * 8 + lVar1);
    copy<int**,int**>((int **)local_50[5],(int **)(local_50[9] + 8),local_40);
    _Deque_base<int,std::allocator<int>>::_M_deallocate_map
              ((_Deque_base<int,std::allocator<int>> *)local_50,(int **)*local_50,local_50[1]);
    *local_50 = local_20;
    local_50[1] = local_28;
  }
  _Deque_iterator<int,int&,int*>::_M_set_node
            ((_Deque_iterator<int,int&,int*> *)(local_50 + 2),local_40);
  _Deque_iterator<int,int&,int*>::_M_set_node
            ((_Deque_iterator<int,int&,int*> *)(local_50 + 6),local_40 + local_38 + -1);
  return;
}



/* std::allocator_traits<std::allocator<int> >::allocate(std::allocator<int>&, unsigned long) */

void std::allocator_traits<std::allocator<int>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<int>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<int*>::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<int*>::_M_max_size(void)

{
  return 0xfffffffffffffff;
}



/* __gnu_cxx::new_allocator<int*>::allocate(unsigned long, void const*) */

void __gnu_cxx::new_allocator<int*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    if ((void *)0x1fffffffffffffff < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
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
/* __gnu_cxx::new_allocator<int*>::new_allocator() */

void __gnu_cxx::new_allocator<int*>::new_allocator(void)

{
  return;
}



/* std::allocator_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */

void std::allocator_traits<std::allocator<int>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<int>::max_size();
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
/* int** std::copy<int**, int**>(int**, int**, int**) */

int ** std::copy<int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = __miter_base<int**>(param_2);
  ppiVar2 = __miter_base<int**>(param_1);
  ppiVar1 = __copy_move_a<false,int**,int**>(ppiVar2,ppiVar1,param_3);
  return ppiVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::copy_backward<int**, int**>(int**, int**, int**) */

int ** std::copy_backward<int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = __miter_base<int**>(param_2);
  ppiVar2 = __miter_base<int**>(param_1);
  ppiVar1 = __copy_move_backward_a<false,int**,int**>(ppiVar2,ppiVar1,param_3);
  return ppiVar1;
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
/* __gnu_cxx::new_allocator<int>::max_size() const */

void __gnu_cxx::new_allocator<int>::max_size(void)

{
  _M_max_size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__miter_base<int**>(int**) */

int ** std::__miter_base<int**>(int **param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_a<false, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_a<false,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **local_30;
  int **local_28;
  int **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppiVar1 = __niter_base<int**>(param_3);
  ppiVar2 = __niter_base<int**>(local_28);
  ppiVar3 = __niter_base<int**>(local_20);
  ppiVar1 = __copy_move_a1<false,int**,int**>(ppiVar3,ppiVar2,ppiVar1);
  ppiVar1 = __niter_wrap<int**>(&local_30,ppiVar1);
  return ppiVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_backward_a<false, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_backward_a<false,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **local_30;
  int **local_28;
  int **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppiVar1 = __niter_base<int**>(param_3);
  ppiVar2 = __niter_base<int**>(local_28);
  ppiVar3 = __niter_base<int**>(local_20);
  ppiVar1 = __copy_move_backward_a1<false,int**,int**>(ppiVar3,ppiVar2,ppiVar1);
  ppiVar1 = __niter_wrap<int**>(&local_30,ppiVar1);
  return ppiVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__niter_base<int**>(int**) */

int ** std::__niter_base<int**>(int **param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_a1<false, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_a1<false,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __copy_move_a2<false,int**,int**>(param_1,param_2,param_3);
  return ppiVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__niter_wrap<int**>(int** const&, int**) */

int ** std::__niter_wrap<int**>(int ***param_1,int **param_2)

{
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_backward_a1<false, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_backward_a1<false,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __copy_move_backward_a2<false,int**,int**>(param_1,param_2,param_3);
  return ppiVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_a2<false, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_a2<false,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int*>
                      (param_1,param_2,param_3);
  return ppiVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_backward_a2<false, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_backward_a2<false,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<int*>
                      (param_1,param_2,param_3);
  return ppiVar1;
}



/* int** std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int*>(int* const*,
   int* const*, int**) */

int ** std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int*>
                 (int **param_1,int **param_2,int **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}



/* int** std::__copy_move_backward<false, true,
   std::random_access_iterator_tag>::__copy_move_b<int*>(int* const*, int* const*, int**) */

int ** std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<int*>
                 (int **param_1,int **param_2,int **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEm@GLIBCXX_3.4 */
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

void __thiscall
std::basic_istream<char,std::char_traits<char>>::operator>>
          (basic_istream<char,std::char_traits<char>> *this,int *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSirsERi@GLIBCXX_3.4 */
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


