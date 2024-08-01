
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
  (*(code *)PTR_00106f28)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00106fc8)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00106f30)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
  (*(code *)PTR_operator<<_00106f38)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00106f40)();
  return;
}



void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00106f48)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00106f50)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00106f58)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00106f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00106f68)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00106f70)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00106f78)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00106f80)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00106f88)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00106f90)();
  return pbVar1;
}



void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00106f98)();
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



void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00106fb0)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00106fb8)();
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



/* WARNING: Removing unreachable block (ram,0x001012e3) */
/* WARNING: Removing unreachable block (ram,0x001012ef) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101324) */
/* WARNING: Removing unreachable block (ram,0x00101330) */

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
  char cVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  basic_ostream<char,std::char_traits<char>> *this;
  char *pcVar4;
  long in_FS_OFFSET;
  char local_d5;
  int local_d4;
  int local_d0;
  int local_cc;
  queue<char,std::deque<char,std::allocator<char>>> local_c8 [80];
  queue<char,std::deque<char,std::allocator<char>>> local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::queue<char,std::deque<char,std::allocator<char>>>::
  queue<std::deque<char,std::allocator<char>>,void>();
  for (local_d4 = 0; local_d4 < 10; local_d4 = local_d4 + 1) {
    local_78[0] = (queue<char,std::deque<char,std::allocator<char>>>)((char)local_d4 + 'A');
                    /* try { // try from 001013e0 to 0010151a has its CatchHandler @ 001016d9 */
    std::queue<char,std::deque<char,std::allocator<char>>>::push(local_c8,(char *)local_78);
  }
  std::operator<<((basic_ostream *)std::cout,"Queue : ");
  while( true ) {
    cVar1 = std::queue<char,std::deque<char,std::allocator<char>>>::empty();
    if (cVar1 == '\x01') break;
    pcVar4 = (char *)std::queue<char,std::deque<char,std::allocator<char>>>::front();
    pbVar2 = std::operator<<((basic_ostream *)std::cout,*pcVar4);
    std::operator<<(pbVar2," ");
    std::queue<char,std::deque<char,std::allocator<char>>>::pop();
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Size of the queue : ");
  uVar3 = std::queue<char,std::deque<char,std::allocator<char>>>::size();
  this = (basic_ostream<char,std::char_traits<char>> *)
         std::basic_ostream<char,std::char_traits<char>>::operator<<
                   ((basic_ostream<char,std::char_traits<char>> *)pbVar2,uVar3);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (this,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                  PTR_endl<char,std_char_traits<char>>_00106fd0);
  for (local_d0 = 0; local_d0 < 10; local_d0 = local_d0 + 1) {
    local_78[0] = (queue<char,std::deque<char,std::allocator<char>>>)((char)local_d0 + 'A');
    std::queue<char,std::deque<char,std::allocator<char>>>::push(local_c8,(char *)local_78);
  }
  std::queue<char,std::deque<char,std::allocator<char>>>::
  queue<std::deque<char,std::allocator<char>>,void>();
  for (local_cc = 0; local_cc < 10; local_cc = local_cc + 1) {
    local_d5 = (char)local_cc + 'a';
                    /* try { // try from 00101547 to 00101690 has its CatchHandler @ 001016c4 */
    std::queue<char,std::deque<char,std::allocator<char>>>::push(local_78,&local_d5);
  }
  std::queue<char,std::deque<char,std::allocator<char>>>::swap(local_c8,(queue *)local_78);
  std::operator<<((basic_ostream *)std::cout,"Queue 1 : ");
  while( true ) {
    cVar1 = std::queue<char,std::deque<char,std::allocator<char>>>::empty();
    if (cVar1 == '\x01') break;
    pcVar4 = (char *)std::queue<char,std::deque<char,std::allocator<char>>>::front();
    pbVar2 = std::operator<<((basic_ostream *)std::cout,*pcVar4);
    std::operator<<(pbVar2," ");
    std::queue<char,std::deque<char,std::allocator<char>>>::pop();
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  std::operator<<((basic_ostream *)std::cout,"Queue 2 : ");
  while( true ) {
    cVar1 = std::queue<char,std::deque<char,std::allocator<char>>>::empty();
    if (cVar1 == '\x01') break;
    pcVar4 = (char *)std::queue<char,std::deque<char,std::allocator<char>>>::front();
    pbVar2 = std::operator<<((basic_ostream *)std::cout,*pcVar4);
    std::operator<<(pbVar2," ");
    std::queue<char,std::deque<char,std::allocator<char>>>::pop();
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  std::queue<char,std::deque<char,std::allocator<char>>>::~queue(local_78);
  std::queue<char,std::deque<char,std::allocator<char>>>::~queue(local_c8);
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



/* std::queue<char, std::deque<char, std::allocator<char> > >::~queue() */

void __thiscall
std::queue<char,std::deque<char,std::allocator<char>>>::~queue
          (queue<char,std::deque<char,std::allocator<char>>> *this)

{
  deque<char,std::allocator<char>>::~deque((deque<char,std::allocator<char>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::deque() */

void std::deque<char,std::allocator<char>>::deque(void)

{
  _Deque_base<char,std::allocator<char>>::_Deque_base();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::queue<char, std::deque<char, std::allocator<char> > >::queue<std::deque<char,
   std::allocator<char> >, void>() */

void std::queue<char,std::deque<char,std::allocator<char>>>::
     queue<std::deque<char,std::allocator<char>>,void>(void)

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
  deque<char,std::allocator<char>>::deque();
  return;
}



/* std::deque<char, std::allocator<char> >::~deque() */

void __thiscall
std::deque<char,std::allocator<char>>::~deque(deque<char,std::allocator<char>> *this)

{
  long in_FS_OFFSET;
  undefined local_68 [32];
  allocator local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  end();
  begin();
  _M_destroy_data((_Deque_iterator)this,(_Deque_iterator)local_68,local_48);
  _Deque_base<char,std::allocator<char>>::~_Deque_base
            ((_Deque_base<char,std::allocator<char>> *)this);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::queue<char, std::deque<char, std::allocator<char> > >::push(char&&) */

void __thiscall
std::queue<char,std::deque<char,std::allocator<char>>>::push
          (queue<char,std::deque<char,std::allocator<char>>> *this,char *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<char&>(param_1);
  deque<char,std::allocator<char>>::push_back
            ((deque<char,std::allocator<char>> *)this,(char *)ptVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::queue<char, std::deque<char, std::allocator<char> > >::empty() const */

void std::queue<char,std::deque<char,std::allocator<char>>>::empty(void)

{
  deque<char,std::allocator<char>>::empty();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::queue<char, std::deque<char, std::allocator<char> > >::front() */

void std::queue<char,std::deque<char,std::allocator<char>>>::front(void)

{
  deque<char,std::allocator<char>>::front();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::queue<char, std::deque<char, std::allocator<char> > >::pop() */

void std::queue<char,std::deque<char,std::allocator<char>>>::pop(void)

{
  deque<char,std::allocator<char>>::pop_front();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::queue<char, std::deque<char, std::allocator<char> > >::size() const */

void std::queue<char,std::deque<char,std::allocator<char>>>::size(void)

{
  deque<char,std::allocator<char>>::size();
  return;
}



/* std::queue<char, std::deque<char, std::allocator<char> > >::swap(std::queue<char,
   std::deque<char, std::allocator<char> > >&) */

void __thiscall
std::queue<char,std::deque<char,std::allocator<char>>>::swap
          (queue<char,std::deque<char,std::allocator<char>>> *this,queue *param_1)

{
  swap<char,std::allocator<char>>((deque *)this,(deque *)param_1);
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::_Deque_impl::~_Deque_impl() */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_Deque_impl::~_Deque_impl(_Deque_impl *this)

{
  std::allocator<char>::~allocator((allocator<char> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<char, std::allocator<char> >::_Deque_base() */

void std::_Deque_base<char,std::allocator<char>>::_Deque_base(void)

{
  _Deque_impl *in_RDI;
  
  _Deque_impl::_Deque_impl(in_RDI);
                    /* try { // try from 00101a23 to 00101a27 has its CatchHandler @ 00101a2a */
  _M_initialize_map((_Deque_base<char,std::allocator<char>> *)in_RDI,0);
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::~_Deque_base() */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::~_Deque_base
          (_Deque_base<char,std::allocator<char>> *this)

{
  if (*(long *)this != 0) {
    _M_destroy_nodes(this,*(char ***)(this + 0x28),(char **)(*(long *)(this + 0x48) + 8));
    _M_deallocate_map(this,*(char ***)this,*(ulong *)(this + 8));
  }
  _Deque_impl::~_Deque_impl((_Deque_impl *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::begin() */

_Deque_iterator<char,char&,char*> * std::deque<char,std::allocator<char>>::begin(void)

{
  long in_RSI;
  _Deque_iterator<char,char&,char*> *in_RDI;
  
  _Deque_iterator<char,char&,char*>::_Deque_iterator(in_RDI,(_Deque_iterator *)(in_RSI + 0x10));
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::end() */

_Deque_iterator<char,char&,char*> * std::deque<char,std::allocator<char>>::end(void)

{
  long in_RSI;
  _Deque_iterator<char,char&,char*> *in_RDI;
  
  _Deque_iterator<char,char&,char*>::_Deque_iterator(in_RDI,(_Deque_iterator *)(in_RSI + 0x30));
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<char, std::allocator<char> >::_M_get_Tp_allocator() */

undefined8 std::_Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::deque<char, std::allocator<char> >::_M_destroy_data(std::_Deque_iterator<char, char&,
   char*>, std::_Deque_iterator<char, char&, char*>, std::allocator<char> const&) */

void std::deque<char,std::allocator<char>>::_M_destroy_data
               (_Deque_iterator param_1,_Deque_iterator param_2,allocator *param_3)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<char&>::type&& std::move<char&>(char&) */

type * std::move<char&>(char *param_1)

{
  return (type *)param_1;
}



/* std::deque<char, std::allocator<char> >::push_back(char&&) */

void __thiscall
std::deque<char,std::allocator<char>>::push_back
          (deque<char,std::allocator<char>> *this,char *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<char&>(param_1);
  emplace_back<char>(this,(char *)ptVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::empty() const */

void std::deque<char,std::allocator<char>>::empty(void)

{
  long in_RDI;
  
  operator==((_Deque_iterator *)(in_RDI + 0x30),(_Deque_iterator *)(in_RDI + 0x10));
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::front() */

void std::deque<char,std::allocator<char>>::front(void)

{
  long in_FS_OFFSET;
  _Deque_iterator<char,char&,char*> local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  begin();
  _Deque_iterator<char,char&,char*>::operator*(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::pop_front() */

void std::deque<char,std::allocator<char>>::pop_front(void)

{
  char *pcVar1;
  allocator *paVar2;
  long in_RDI;
  
  if (*(long *)(in_RDI + 0x10) == *(long *)(in_RDI + 0x20) + -1) {
    _M_pop_front_aux();
  }
  else {
    pcVar1 = *(char **)(in_RDI + 0x10);
    paVar2 = (allocator *)_Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator();
    allocator_traits<std::allocator<char>>::destroy<char>(paVar2,pcVar1);
    *(long *)(in_RDI + 0x10) = *(long *)(in_RDI + 0x10) + 1;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::size() const */

void std::deque<char,std::allocator<char>>::size(void)

{
  long in_RDI;
  
  operator-((_Deque_iterator *)(in_RDI + 0x30),(_Deque_iterator *)(in_RDI + 0x10));
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::swap<char, std::allocator<char> >(std::deque<char, std::allocator<char> >&,
   std::deque<char, std::allocator<char> >&) */

void std::swap<char,std::allocator<char>>(deque *param_1,deque *param_2)

{
  deque<char,std::allocator<char>>::swap((deque<char,std::allocator<char>> *)param_1,param_2);
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::_Deque_impl::_Deque_impl() */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_Deque_impl::_Deque_impl(_Deque_impl *this)

{
  std::allocator<char>::allocator();
  _Deque_impl_data::_Deque_impl_data((_Deque_impl_data *)this);
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::_M_initialize_map(unsigned long) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_M_initialize_map
          (_Deque_base<char,std::allocator<char>> *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong local_48;
  ulong local_40;
  long local_38;
  char **local_30;
  char **local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = __deque_buf_size(1);
  local_38 = param_1 / uVar2 + 1;
  local_40 = param_1 / uVar2 + 3;
  local_48 = 8;
  puVar3 = max<unsigned_long>(&local_48,&local_40);
  *(ulong *)(this + 8) = *puVar3;
  uVar4 = _M_allocate_map(this,*(ulong *)(this + 8));
  *(undefined8 *)this = uVar4;
  local_30 = (char **)(((ulong)(*(long *)(this + 8) - local_38) >> 1) * 8 + *(long *)this);
  local_28 = local_30 + local_38;
                    /* try { // try from 00101e11 to 00101e15 has its CatchHandler @ 00101e9d */
  _M_create_nodes(this,local_30,local_28);
  _Deque_iterator<char,char&,char*>::_M_set_node
            ((_Deque_iterator<char,char&,char*> *)(this + 0x10),local_30);
  _Deque_iterator<char,char&,char*>::_M_set_node
            ((_Deque_iterator<char,char&,char*> *)(this + 0x30),local_28 + -1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
  lVar1 = *(long *)(this + 0x38);
  uVar2 = __deque_buf_size(1);
  *(ulong *)(this + 0x30) = lVar1 + param_1 % uVar2;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::_M_destroy_nodes(char**, char**) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_M_destroy_nodes
          (_Deque_base<char,std::allocator<char>> *this,char **param_1,char **param_2)

{
  char **local_10;
  
  for (local_10 = param_1; local_10 < param_2; local_10 = local_10 + 1) {
    _M_deallocate_node(this,*local_10);
  }
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::_M_deallocate_map(char**, unsigned long) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_M_deallocate_map
          (_Deque_base<char,std::allocator<char>> *this,char **param_1,ulong param_2)

{
  long in_FS_OFFSET;
  allocator local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _M_get_map_allocator();
  allocator_traits<std::allocator<char*>>::deallocate(&local_11,param_1,param_2);
  allocator<char*>::~allocator((allocator<char*> *)&local_11);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Deque_iterator<char, char&, char*>::_Deque_iterator(std::_Deque_iterator<char, char&,
   char*> const&) */

void __thiscall
std::_Deque_iterator<char,char&,char*>::_Deque_iterator
          (_Deque_iterator<char,char&,char*> *this,_Deque_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 6);
  return;
}



/* char& std::deque<char, std::allocator<char> >::emplace_back<char>(char&&) */

char * __thiscall
std::deque<char,std::allocator<char>>::emplace_back<char>
          (deque<char,std::allocator<char>> *this,char *param_1)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x30) == *(long *)(this + 0x40) + -1) {
    pcVar1 = forward<char>((type *)param_1);
    _M_push_back_aux<char>(this,pcVar1);
  }
  else {
    pcVar1 = forward<char>((type *)param_1);
    allocator_traits<std::allocator<char>>::construct<char,char>
              ((allocator *)this,*(char **)(this + 0x30),pcVar1);
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  }
  pcVar1 = (char *)back();
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Deque_iterator<char, char&, char*> const&,
   std::_Deque_iterator<char, char&, char*> const&) */

undefined8 std::operator==(_Deque_iterator *param_1,_Deque_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}



/* std::_Deque_iterator<char, char&, char*>::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
std::_Deque_iterator<char,char&,char*>::operator*(_Deque_iterator<char,char&,char*> *this)

{
  return *(undefined8 *)this;
}



/* void std::allocator_traits<std::allocator<char> >::destroy<char>(std::allocator<char>&, char*) */

void std::allocator_traits<std::allocator<char>>::destroy<char>(allocator *param_1,char *param_2)

{
  __gnu_cxx::new_allocator<char>::destroy<char>((char *)param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::_M_pop_front_aux() */

void std::deque<char,std::allocator<char>>::_M_pop_front_aux(void)

{
  char *pcVar1;
  allocator *paVar2;
  _Deque_base<char,std::allocator<char>> *in_RDI;
  
  pcVar1 = *(char **)(in_RDI + 0x10);
  paVar2 = (allocator *)_Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  allocator_traits<std::allocator<char>>::destroy<char>(paVar2,pcVar1);
  _Deque_base<char,std::allocator<char>>::_M_deallocate_node(in_RDI,*(char **)(in_RDI + 0x18));
  _Deque_iterator<char,char&,char*>::_M_set_node
            ((_Deque_iterator<char,char&,char*> *)(in_RDI + 0x10),
             (char **)(*(long *)(in_RDI + 0x28) + 8));
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDI + 0x18);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Deque_iterator<char, char&, char*> const&,
   std::_Deque_iterator<char, char&, char*> const&) */

long std::operator-(_Deque_iterator *param_1,_Deque_iterator *param_2)

{
  long lVar1;
  
  lVar1 = _Deque_iterator<char,char&,char*>::_S_buffer_size();
  return lVar1 * ((*(long *)(param_1 + 6) - *(long *)(param_2 + 6) >> 3) -
                 (ulong)(*(long *)(param_1 + 6) != 0)) + (*(long *)param_1 - *(long *)(param_1 + 2))
         + (*(long *)(param_2 + 4) - *(long *)param_2);
}



/* std::deque<char, std::allocator<char> >::swap(std::deque<char, std::allocator<char> >&) */

void __thiscall
std::deque<char,std::allocator<char>>::swap(deque<char,std::allocator<char>> *this,deque *param_1)

{
  allocator *paVar1;
  allocator *paVar2;
  
  _Deque_base<char,std::allocator<char>>::_Deque_impl_data::_M_swap_data
            ((_Deque_impl_data *)this,(_Deque_impl_data *)param_1);
  paVar1 = (allocator *)_Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  paVar2 = (allocator *)_Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  __gnu_cxx::__alloc_traits<std::allocator<char>,char>::_S_on_swap(paVar2,paVar1);
  return;
}



/* std::allocator_traits<std::allocator<char> >::deallocate(std::allocator<char>&, char*, unsigned
   long) */

void std::allocator_traits<std::allocator<char>>::deallocate
               (allocator *param_1,char *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<char>::deallocate((new_allocator<char> *)param_1,param_2,param_3);
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::_Deque_impl_data::_Deque_impl_data() */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data::_Deque_impl_data
          (_Deque_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  _Deque_iterator<char,char&,char*>::_Deque_iterator();
  _Deque_iterator<char,char&,char*>::_Deque_iterator();
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



/* std::_Deque_base<char, std::allocator<char> >::_M_allocate_map(unsigned long) */

undefined8 __thiscall
std::_Deque_base<char,std::allocator<char>>::_M_allocate_map
          (_Deque_base<char,std::allocator<char>> *this,ulong param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _M_get_map_allocator();
                    /* try { // try from 00102363 to 00102367 has its CatchHandler @ 0010238c */
  uVar1 = allocator_traits<std::allocator<char*>>::allocate(&local_21,param_1);
  allocator<char*>::~allocator((allocator<char*> *)&local_21);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* std::_Deque_base<char, std::allocator<char> >::_M_create_nodes(char**, char**) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_M_create_nodes
          (_Deque_base<char,std::allocator<char>> *this,char **param_1,char **param_2)

{
  char *pcVar1;
  char **local_20;
  
  for (local_20 = param_1; local_20 < param_2; local_20 = local_20 + 1) {
                    /* try { // try from 001023e0 to 001023e4 has its CatchHandler @ 001023fd */
    pcVar1 = (char *)_M_allocate_node();
    *local_20 = pcVar1;
  }
  return;
}



/* std::_Deque_iterator<char, char&, char*>::_M_set_node(char**) */

void __thiscall
std::_Deque_iterator<char,char&,char*>::_M_set_node
          (_Deque_iterator<char,char&,char*> *this,char **param_1)

{
  long lVar1;
  long lVar2;
  
  *(char ***)(this + 0x18) = param_1;
  *(char **)(this + 8) = *param_1;
  lVar1 = *(long *)(this + 8);
  lVar2 = _S_buffer_size();
  *(long *)(this + 0x10) = lVar1 + lVar2;
  return;
}



/* std::_Deque_base<char, std::allocator<char> >::_M_deallocate_node(char*) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_M_deallocate_node
          (_Deque_base<char,std::allocator<char>> *this,char *param_1)

{
  ulong uVar1;
  
  uVar1 = __deque_buf_size(1);
  allocator_traits<std::allocator<char>>::deallocate((allocator *)this,param_1,uVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<char, std::allocator<char> >::_M_get_map_allocator() const */

allocator * std::_Deque_base<char,std::allocator<char>>::_M_get_map_allocator(void)

{
  allocator *in_RDI;
  
  _M_get_Tp_allocator();
  allocator<char*>::allocator<char>(in_RDI);
  return in_RDI;
}



/* std::allocator<char*>::~allocator() */

void __thiscall std::allocator<char*>::~allocator(allocator<char*> *this)

{
  __gnu_cxx::new_allocator<char*>::~new_allocator((new_allocator<char*> *)this);
  return;
}



/* std::allocator_traits<std::allocator<char*> >::deallocate(std::allocator<char*>&, char**,
   unsigned long) */

void std::allocator_traits<std::allocator<char*>>::deallocate
               (allocator *param_1,char **param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<char*>::deallocate((new_allocator<char*> *)param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char&& std::forward<char>(std::remove_reference<char>::type&) */

char * std::forward<char>(type *param_1)

{
  return (char *)param_1;
}



/* void std::allocator_traits<std::allocator<char> >::construct<char, char>(std::allocator<char>&,
   char*, char&&) */

void std::allocator_traits<std::allocator<char>>::construct<char,char>
               (allocator *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = forward<char>((type *)param_3);
  __gnu_cxx::new_allocator<char>::construct<char,char>
            ((new_allocator<char> *)param_1,param_2,pcVar1);
  return;
}



/* void std::deque<char, std::allocator<char> >::_M_push_back_aux<char>(char&&) */

void __thiscall
std::deque<char,std::allocator<char>>::_M_push_back_aux<char>
          (deque<char,std::allocator<char>> *this,char *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  lVar1 = size();
  lVar2 = max_size();
  if (lVar1 == lVar2) {
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  _M_reserve_map_at_back(this,1);
  lVar1 = *(long *)(this + 0x48);
  uVar3 = _Deque_base<char,std::allocator<char>>::_M_allocate_node();
  *(undefined8 *)(lVar1 + 8) = uVar3;
  pcVar4 = forward<char>((type *)param_1);
  allocator_traits<std::allocator<char>>::construct<char,char>
            ((allocator *)this,*(char **)(this + 0x30),pcVar4);
  _Deque_iterator<char,char&,char*>::_M_set_node
            ((_Deque_iterator<char,char&,char*> *)(this + 0x30),
             (char **)(*(long *)(this + 0x48) + 8));
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x38);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::back() */

void std::deque<char,std::allocator<char>>::back(void)

{
  long in_FS_OFFSET;
  _Deque_iterator<char,char&,char*> local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  end();
  _Deque_iterator<char,char&,char*>::operator--(local_38);
  _Deque_iterator<char,char&,char*>::operator*(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void __gnu_cxx::new_allocator<char>::destroy<char>(char*) */

void __gnu_cxx::new_allocator<char>::destroy<char>(char *param_1)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_iterator<char, char&, char*>::_S_buffer_size() */

void std::_Deque_iterator<char,char&,char*>::_S_buffer_size(void)

{
  __deque_buf_size(1);
  return;
}



/* std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data::_M_swap_data(std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data&) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data::_M_swap_data
          (_Deque_impl_data *this,_Deque_impl_data *param_1)

{
  swap<std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data>(this,param_1);
  return;
}



/* __gnu_cxx::__alloc_traits<std::allocator<char>, char>::_S_on_swap(std::allocator<char>&,
   std::allocator<char>&) */

void __gnu_cxx::__alloc_traits<std::allocator<char>,char>::_S_on_swap
               (allocator *param_1,allocator *param_2)

{
  std::__alloc_on_swap<std::allocator<char>>(param_1,param_2);
  return;
}



/* __gnu_cxx::new_allocator<char>::deallocate(char*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<char>::deallocate(new_allocator<char> *this,char *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
  return;
}



/* std::allocator_traits<std::allocator<char> >::max_size(std::allocator<char> const&) */

void std::allocator_traits<std::allocator<char>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<char>::max_size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_iterator<char, char&, char*>::_Deque_iterator() */

void std::_Deque_iterator<char,char&,char*>::_Deque_iterator(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  in_RDI[3] = 0;
  return;
}



/* std::allocator_traits<std::allocator<char*> >::allocate(std::allocator<char*>&, unsigned long) */

void std::allocator_traits<std::allocator<char*>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<char*>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<char, std::allocator<char> >::_M_allocate_node() */

void std::_Deque_base<char,std::allocator<char>>::_M_allocate_node(void)

{
  ulong uVar1;
  allocator *in_RDI;
  
  uVar1 = __deque_buf_size(1);
  allocator_traits<std::allocator<char>>::allocate(in_RDI,uVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Deque_base<char, std::allocator<char> >::_M_get_Tp_allocator() const */

undefined8 std::_Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::allocator<char*>::allocator<char>(std::allocator<char> const&) */

void std::allocator<char*>::allocator<char>(allocator *param_1)

{
  __gnu_cxx::new_allocator<char*>::new_allocator();
  return;
}



/* __gnu_cxx::new_allocator<char*>::~new_allocator() */

void __thiscall __gnu_cxx::new_allocator<char*>::~new_allocator(new_allocator<char*> *this)

{
  return;
}



/* __gnu_cxx::new_allocator<char*>::deallocate(char**, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<char*>::deallocate(new_allocator<char*> *this,char **param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 8);
  return;
}



/* void __gnu_cxx::new_allocator<char>::construct<char, char>(char*, char&&) */

void __thiscall
__gnu_cxx::new_allocator<char>::construct<char,char>
          (new_allocator<char> *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = std::forward<char>((type *)param_2);
  cVar1 = *pcVar2;
  pcVar2 = (char *)operator_new(1,param_1);
  *pcVar2 = cVar1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::deque<char, std::allocator<char> >::max_size() const */

void std::deque<char,std::allocator<char>>::max_size(void)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Deque_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  _S_max_size(paVar1);
  return;
}



/* std::deque<char, std::allocator<char> >::_M_reserve_map_at_back(unsigned long) */

void __thiscall
std::deque<char,std::allocator<char>>::_M_reserve_map_at_back
          (deque<char,std::allocator<char>> *this,ulong param_1)

{
  if ((ulong)(*(long *)(this + 8) - (*(long *)(this + 0x48) - *(long *)this >> 3)) < param_1 + 1) {
    _M_reallocate_map(this,param_1,false);
  }
  return;
}



/* std::_Deque_iterator<char, char&, char*>::TEMPNAMEPLACEHOLDERVALUE() */

_Deque_iterator<char,char&,char*> * __thiscall
std::_Deque_iterator<char,char&,char*>::operator--(_Deque_iterator<char,char&,char*> *this)

{
  if (*(long *)this == *(long *)(this + 8)) {
    _M_set_node(this,(char **)(*(long *)(this + 0x18) + -8));
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  *(long *)this = *(long *)this + -1;
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__and_<std::__not_<std::__is_tuple_like<std::_Deque_base<char,
   std::allocator<char> >::_Deque_impl_data> >, std::is_move_constructible<std::_Deque_base<char,
   std::allocator<char> >::_Deque_impl_data>, std::is_move_assignable<std::_Deque_base<char,
   std::allocator<char> >::_Deque_impl_data> >::value, void>::type std::swap<std::_Deque_base<char,
   std::allocator<char> >::_Deque_impl_data>(std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data&, std::_Deque_base<char, std::allocator<char> >::_Deque_impl_data&) */

type std::swap<std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data>
               (_Deque_impl_data *param_1,_Deque_impl_data *param_2)

{
  undefined8 uVar1;
  type *ptVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  _Deque_impl_data local_78 [88];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar2 = move<std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data&>(param_1);
  _Deque_base<char,std::allocator<char>>::_Deque_impl_data::_Deque_impl_data
            (local_78,(_Deque_impl_data *)ptVar2);
  puVar3 = (undefined8 *)
           move<std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data&>(param_2);
  uVar1 = puVar3[1];
  *(undefined8 *)param_1 = *puVar3;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = puVar3[3];
  *(undefined8 *)(param_1 + 0x10) = puVar3[2];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = puVar3[5];
  *(undefined8 *)(param_1 + 0x20) = puVar3[4];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = puVar3[7];
  *(undefined8 *)(param_1 + 0x30) = puVar3[6];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = puVar3[9];
  *(undefined8 *)(param_1 + 0x40) = puVar3[8];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  puVar3 = (undefined8 *)
           move<std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data&>(local_78);
  uVar1 = puVar3[1];
  *(undefined8 *)param_2 = *puVar3;
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = puVar3[3];
  *(undefined8 *)(param_2 + 0x10) = puVar3[2];
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = puVar3[5];
  *(undefined8 *)(param_2 + 0x20) = puVar3[4];
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar1 = puVar3[7];
  *(undefined8 *)(param_2 + 0x30) = puVar3[6];
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  uVar1 = puVar3[9];
  *(undefined8 *)(param_2 + 0x40) = puVar3[8];
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__alloc_on_swap<std::allocator<char> >(std::allocator<char>&, std::allocator<char>&) */

void std::__alloc_on_swap<std::allocator<char>>(allocator *param_1,allocator *param_2)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char>::max_size() const */

void __gnu_cxx::new_allocator<char>::max_size(void)

{
  _M_max_size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char*>::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<char*>::_M_max_size(void)

{
  return 0xfffffffffffffff;
}



/* __gnu_cxx::new_allocator<char*>::allocate(unsigned long, void const*) */

void __gnu_cxx::new_allocator<char*>::allocate(ulong param_1,void *param_2)

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



/* std::allocator_traits<std::allocator<char> >::allocate(std::allocator<char>&, unsigned long) */

void std::allocator_traits<std::allocator<char>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<char>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char*>::new_allocator() */

void __gnu_cxx::new_allocator<char*>::new_allocator(void)

{
  return;
}



/* std::deque<char, std::allocator<char> >::_S_max_size(std::allocator<char> const&) */

ulong std::deque<char,std::allocator<char>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x7fffffffffffffff;
  local_18 = allocator_traits<std::allocator<char>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}



/* std::deque<char, std::allocator<char> >::_M_reallocate_map(unsigned long, bool) */

void __thiscall
std::deque<char,std::allocator<char>>::_M_reallocate_map
          (deque<char,std::allocator<char>> *this,ulong param_1,bool param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong local_58;
  long *local_50;
  char **local_40;
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
    local_40 = (char **)(lVar1 + ((ulong)(*(long *)(this + 8) - local_30) >> 1) * 8 + *(long *)this)
    ;
    if (local_40 < *(char ***)(this + 0x28)) {
      copy<char**,char**>(*(char ***)(this + 0x28),(char **)(*(long *)(this + 0x48) + 8),local_40);
    }
    else {
      copy_backward<char**,char**>
                (*(char ***)(this + 0x28),(char **)(*(long *)(this + 0x48) + 8),local_40 + local_38)
      ;
    }
  }
  else {
    lVar1 = *(long *)(this + 8);
    puVar2 = max<unsigned_long>((ulong *)(this + 8),&local_58);
    local_28 = *puVar2 + lVar1 + 2;
    local_20 = _Deque_base<char,std::allocator<char>>::_M_allocate_map
                         ((_Deque_base<char,std::allocator<char>> *)local_50,local_28);
    if (param_2) {
      lVar1 = local_58 << 3;
    }
    else {
      lVar1 = 0;
    }
    local_40 = (char **)(local_20 + (local_28 - local_30 >> 1) * 8 + lVar1);
    copy<char**,char**>((char **)local_50[5],(char **)(local_50[9] + 8),local_40);
    _Deque_base<char,std::allocator<char>>::_M_deallocate_map
              ((_Deque_base<char,std::allocator<char>> *)local_50,(char **)*local_50,local_50[1]);
    *local_50 = local_20;
    local_50[1] = local_28;
  }
  _Deque_iterator<char,char&,char*>::_M_set_node
            ((_Deque_iterator<char,char&,char*> *)(local_50 + 2),local_40);
  _Deque_iterator<char,char&,char*>::_M_set_node
            ((_Deque_iterator<char,char&,char*> *)(local_50 + 6),local_40 + local_38 + -1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::_Deque_base<char, std::allocator<char> >::_Deque_impl_data&>::type&&
   std::move<std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data&>(std::_Deque_base<char, std::allocator<char> >::_Deque_impl_data&) */

type * std::move<std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data&>
                 (_Deque_impl_data *param_1)

{
  return (type *)param_1;
}



/* std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data::_Deque_impl_data(std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data const&) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data::_Deque_impl_data
          (_Deque_impl_data *this,_Deque_impl_data *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  _Deque_iterator<char,char&,char*>::_Deque_iterator
            ((_Deque_iterator<char,char&,char*> *)(this + 0x10),(_Deque_iterator *)(param_1 + 0x10))
  ;
  _Deque_iterator<char,char&,char*>::_Deque_iterator
            ((_Deque_iterator<char,char&,char*> *)(this + 0x30),(_Deque_iterator *)(param_1 + 0x30))
  ;
  return;
}



/* std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data::_Deque_impl_data(std::_Deque_base<char, std::allocator<char>
   >::_Deque_impl_data&&) */

void __thiscall
std::_Deque_base<char,std::allocator<char>>::_Deque_impl_data::_Deque_impl_data
          (_Deque_impl_data *this,_Deque_impl_data *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Deque_impl_data(this,param_1);
  _Deque_impl_data((_Deque_impl_data *)&local_78);
  *(undefined8 *)param_1 = local_78;
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = local_68;
  *(undefined8 *)(param_1 + 0x18) = local_60;
  *(undefined8 *)(param_1 + 0x20) = local_58;
  *(undefined8 *)(param_1 + 0x28) = local_50;
  *(undefined8 *)(param_1 + 0x30) = local_48;
  *(undefined8 *)(param_1 + 0x38) = local_40;
  *(undefined8 *)(param_1 + 0x40) = local_38;
  *(undefined8 *)(param_1 + 0x48) = local_30;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char>::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<char>::_M_max_size(void)

{
  return 0x7fffffffffffffff;
}



/* __gnu_cxx::new_allocator<char>::allocate(unsigned long, void const*) */

void __gnu_cxx::new_allocator<char>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((ulong)param_2);
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
/* char** std::copy<char**, char**>(char**, char**, char**) */

char ** std::copy<char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  
  ppcVar1 = __miter_base<char**>(param_2);
  ppcVar2 = __miter_base<char**>(param_1);
  ppcVar1 = __copy_move_a<false,char**,char**>(ppcVar2,ppcVar1,param_3);
  return ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::copy_backward<char**, char**>(char**, char**, char**) */

char ** std::copy_backward<char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  
  ppcVar1 = __miter_base<char**>(param_2);
  ppcVar2 = __miter_base<char**>(param_1);
  ppcVar1 = __copy_move_backward_a<false,char**,char**>(ppcVar2,ppcVar1,param_3);
  return ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__miter_base<char**>(char**) */

char ** std::__miter_base<char**>(char **param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_a<false, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_a<false,char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **local_30;
  char **local_28;
  char **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppcVar1 = __niter_base<char**>(param_3);
  ppcVar2 = __niter_base<char**>(local_28);
  ppcVar3 = __niter_base<char**>(local_20);
  ppcVar1 = __copy_move_a1<false,char**,char**>(ppcVar3,ppcVar2,ppcVar1);
  ppcVar1 = __niter_wrap<char**>(&local_30,ppcVar1);
  return ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_backward_a<false, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_backward_a<false,char**,char**>
                  (char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **local_30;
  char **local_28;
  char **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppcVar1 = __niter_base<char**>(param_3);
  ppcVar2 = __niter_base<char**>(local_28);
  ppcVar3 = __niter_base<char**>(local_20);
  ppcVar1 = __copy_move_backward_a1<false,char**,char**>(ppcVar3,ppcVar2,ppcVar1);
  ppcVar1 = __niter_wrap<char**>(&local_30,ppcVar1);
  return ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__niter_base<char**>(char**) */

char ** std::__niter_base<char**>(char **param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_a1<false, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_a1<false,char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __copy_move_a2<false,char**,char**>(param_1,param_2,param_3);
  return ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__niter_wrap<char**>(char** const&, char**) */

char ** std::__niter_wrap<char**>(char ***param_1,char **param_2)

{
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_backward_a1<false, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_backward_a1<false,char**,char**>
                  (char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __copy_move_backward_a2<false,char**,char**>(param_1,param_2,param_3);
  return ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_a2<false, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_a2<false,char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char*>
                      (param_1,param_2,param_3);
  return ppcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_backward_a2<false, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_backward_a2<false,char**,char**>
                  (char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<char*>
                      (param_1,param_2,param_3);
  return ppcVar1;
}



/* char** std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<char*>(char*
   const*, char* const*, char**) */

char ** std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char*>
                  (char **param_1,char **param_2,char **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}



/* char** std::__copy_move_backward<false, true,
   std::random_access_iterator_tag>::__copy_move_b<char*>(char* const*, char* const*, char**) */

char ** std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<char*>
                  (char **param_1,char **param_2,char **param_3)

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

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcED2Ev@GLIBCXX_3.4 */
  halt_baddata();
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@GLIBCXX_3.4 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC2Ev@GLIBCXX_3.4 */
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


