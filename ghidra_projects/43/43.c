
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
  (*(code *)PTR_00105f48)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fc8)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00105f50)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
  (*(code *)PTR_operator<<_00105f58)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00105f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00105f68)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00105f70)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00105f78)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00105f80)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00105f88)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00105f90)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105f98)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00105fa0)();
  return pbVar1;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00105fb8)();
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



/* WARNING: Removing unreachable block (ram,0x00101263) */
/* WARNING: Removing unreachable block (ram,0x0010126f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x001012a4) */
/* WARNING: Removing unreachable block (ram,0x001012b0) */

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
  basic_ostream *pbVar2;
  ulong uVar3;
  basic_ostream<char,std::char_traits<char>> *this;
  char *pcVar4;
  long in_FS_OFFSET;
  char local_49;
  priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>> local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::
  priority_queue<std::vector<char,std::allocator<char>>,void>();
  local_49 = 'X';
                    /* try { // try from 00101343 to 0010143f has its CatchHandler @ 00101477 */
  std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::push
            (local_48,&local_49);
  local_49 = 'A';
  std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::push
            (local_48,&local_49);
  local_49 = 'S';
  std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::push
            (local_48,&local_49);
  local_49 = 'O';
  std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::push
            (local_48,&local_49);
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Size : ");
  uVar3 = std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::size();
  this = (basic_ostream<char,std::char_traits<char>> *)
         std::basic_ostream<char,std::char_traits<char>>::operator<<
                   ((basic_ostream<char,std::char_traits<char>> *)pbVar2,uVar3);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (this,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                  PTR_endl<char,std_char_traits<char>>_00105fd0);
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Priority Queue : ");
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar2,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  while( true ) {
    cVar1 = std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::empty
                      ();
    if (cVar1 == '\x01') break;
    pcVar4 = (char *)std::
                     priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::
                     top();
    pbVar2 = std::operator<<((basic_ostream *)std::cout,*pcVar4);
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar2,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00105fd0);
    std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::pop();
  }
  std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::~priority_queue
            (local_48);
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
/* unsigned long const& std::min<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * std::min<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char&& std::forward<char>(std::remove_reference<char>::type&) */

char * std::forward<char>(type *param_1)

{
  return (char *)param_1;
}



/* std::priority_queue<char, std::vector<char, std::allocator<char> >, std::less<char>
   >::~priority_queue() */

void __thiscall
std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::~priority_queue
          (priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>> *this)

{
  vector<char,std::allocator<char>>::~vector((vector<char,std::allocator<char>> *)this);
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



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  std::allocator<char>::~allocator((allocator<char> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Vector_base<char, std::allocator<char> >::_Vector_base() */

void std::_Vector_base<char,std::allocator<char>>::_Vector_base(void)

{
  _Vector_impl *in_RDI;
  
  _Vector_impl::_Vector_impl(in_RDI);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::vector() */

void std::vector<char,std::allocator<char>>::vector(void)

{
  _Vector_base<char,std::allocator<char>>::_Vector_base();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::priority_queue<char, std::vector<char, std::allocator<char> >, std::less<char>
   >::priority_queue<std::vector<char, std::allocator<char> >, void>() */

void std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::
     priority_queue<std::vector<char,std::allocator<char>>,void>(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  vector<char,std::allocator<char>>::vector();
  return;
}



/* std::vector<char, std::allocator<char> >::~vector() */

void __thiscall
std::vector<char,std::allocator<char>>::~vector(vector<char,std::allocator<char>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  _Destroy<char*,char>(*(char **)this,*(char **)(this + 8),paVar1);
  _Vector_base<char,std::allocator<char>>::~_Vector_base
            ((_Vector_base<char,std::allocator<char>> *)this);
  return;
}



/* std::priority_queue<char, std::vector<char, std::allocator<char> >, std::less<char>
   >::push(char&&) */

void __thiscall
std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::push
          (priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>> *this,
          char *param_1)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  type *ptVar3;
  less extraout_EDX;
  
  ptVar3 = move<char&>(param_1);
  vector<char,std::allocator<char>>::push_back
            ((vector<char,std::allocator<char>> *)this,(char *)ptVar3);
  _Var1 = vector<char,std::allocator<char>>::end();
  _Var2 = vector<char,std::allocator<char>>::begin();
  push_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,std::less<char>>
            (_Var2,_Var1,extraout_EDX);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::priority_queue<char, std::vector<char, std::allocator<char> >, std::less<char> >::size()
   const */

void std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::size(void)

{
  vector<char,std::allocator<char>>::size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::priority_queue<char, std::vector<char, std::allocator<char> >, std::less<char> >::empty()
   const */

void std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::empty(void)

{
  vector<char,std::allocator<char>>::empty();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::priority_queue<char, std::vector<char, std::allocator<char> >, std::less<char> >::top()
   const */

void std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::top(void)

{
  vector<char,std::allocator<char>>::front();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::priority_queue<char, std::vector<char, std::allocator<char> >, std::less<char> >::pop() */

void std::priority_queue<char,std::vector<char,std::allocator<char>>,std::less<char>>::pop(void)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  less extraout_EDX;
  
  _Var1 = vector<char,std::allocator<char>>::end();
  _Var2 = vector<char,std::allocator<char>>::begin();
  pop_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,std::less<char>>
            (_Var2,_Var1,extraout_EDX);
  vector<char,std::allocator<char>>::pop_back();
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  std::allocator<char>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::~_Vector_base() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::~_Vector_base
          (_Vector_base<char,std::allocator<char>> *this)

{
  _M_deallocate(this,*(char **)this,*(long *)(this + 0x10) - *(long *)this);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Vector_base<char, std::allocator<char> >::_M_get_Tp_allocator() */

undefined8 std::_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<char*, char>(char*, char*, std::allocator<char>&) */

void std::_Destroy<char*,char>(char *param_1,char *param_2,allocator *param_3)

{
  _Destroy<char*>(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<char&>::type&& std::move<char&>(char&) */

type * std::move<char&>(char *param_1)

{
  return (type *)param_1;
}



/* std::vector<char, std::allocator<char> >::push_back(char&&) */

void __thiscall
std::vector<char,std::allocator<char>>::push_back
          (vector<char,std::allocator<char>> *this,char *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<char&>(param_1);
  emplace_back<char>(this,(char *)ptVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::begin() */

undefined8 std::vector<char,std::allocator<char>>::begin(void)

{
  char **in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18,in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::end() */

undefined8 std::vector<char,std::allocator<char>>::end(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18,
             (char **)(in_RDI + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::push_heap<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, std::less<char> >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   std::less<char>) */

void std::
     push_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,std::less<char>>
               (__normal_iterator param_1,__normal_iterator param_2,less param_3)

{
  type tVar1;
  difference_type dVar2;
  char *pcVar3;
  type *ptVar4;
  undefined4 extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  _Iter_comp_val local_2a;
  type local_29;
  undefined8 local_28;
  long local_20;
  
  local_40[0] = CONCAT44(in_register_0000003c,param_1);
  local_48 = CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  move<std::less<char>&>((less *)&local_49);
  __gnu_cxx::__ops::_Iter_comp_val<std::less<char>>::_Iter_comp_val((less)&local_2a);
  local_28 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator-
                       ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_48
                        ,1);
  pcVar3 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                   operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                             &local_28);
  ptVar4 = move<char&>(pcVar3);
  local_29 = *ptVar4;
  ptVar4 = move<char&>((char *)&local_29);
  tVar1 = *ptVar4;
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)local_40);
  __push_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,long,char,__gnu_cxx::__ops::_Iter_comp_val<std::less<char>>>
            ((__normal_iterator)local_40[0],CONCAT44(extraout_var,dVar2) + -1,0,(char)tVar1,
             &local_2a);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::size() const */

long std::vector<char,std::allocator<char>>::size(void)

{
  long *in_RDI;
  
  return in_RDI[1] - *in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::empty() const */

void std::vector<char,std::allocator<char>>::empty(void)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = end();
  local_20 = begin();
  __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::front() const */

void std::vector<char,std::allocator<char>>::front(void)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = begin();
  __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::operator*
            ((__normal_iterator<char_const*,std::vector<char,std::allocator<char>>> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::less<char>&>::type&& std::move<std::less<char>&>(std::less<char>&) */

type * std::move<std::less<char>&>(less *param_1)

{
  return (type *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::pop_heap<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, std::less<char> >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   std::less<char>) */

void std::
     pop_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,std::less<char>>
               (__normal_iterator param_1,__normal_iterator param_2,less param_3)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  _Iter_comp_iter local_11;
  long local_10;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (1 < CONCAT44(extraout_var,dVar1)) {
    __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator--
              ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_28);
    __pop_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>>
              ((__normal_iterator)local_20,(__normal_iterator)local_28,(__normal_iterator)local_28,
               &local_11);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::pop_back() */

void std::vector<char,std::allocator<char>>::pop_back(void)

{
  allocator *in_RDI;
  
  *(long *)(in_RDI + 8) = *(long *)(in_RDI + 8) + -1;
  allocator_traits<std::allocator<char>>::destroy<char>(in_RDI,*(char **)(in_RDI + 8));
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



/* std::allocator_traits<std::allocator<char> >::allocate(std::allocator<char>&, unsigned long) */

void std::allocator_traits<std::allocator<char>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<char>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_M_deallocate(char*, unsigned long) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_M_deallocate
          (_Vector_base<char,std::allocator<char>> *this,char *param_1,ulong param_2)

{
  if (param_1 != (char *)0x0) {
    allocator_traits<std::allocator<char>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<char*>(char*, char*) */

void std::_Destroy<char*>(char *param_1,char *param_2)

{
  _Destroy_aux<true>::__destroy<char*>(param_1,param_2);
  return;
}



/* char& std::vector<char, std::allocator<char> >::emplace_back<char>(char&&) */

char * __thiscall
std::vector<char,std::allocator<char>>::emplace_back<char>
          (vector<char,std::allocator<char>> *this,char *param_1)

{
  char *pcVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    forward<char>((type *)param_1);
    pcVar1 = (char *)end();
    _M_realloc_insert<char>((__normal_iterator)this,pcVar1);
  }
  else {
    pcVar1 = forward<char>((type *)param_1);
    allocator_traits<std::allocator<char>>::construct<char,char>
              ((allocator *)this,*(char **)(this + 8),pcVar1);
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
  }
  pcVar1 = (char *)back();
  return pcVar1;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::__normal_iterator(char* const&) */

void __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,char **param_1)

{
  *(char **)this = *param_1;
  return;
}



/* __gnu_cxx::__ops::_Iter_comp_val<std::less<char> >::_Iter_comp_val(std::less<char>) */

void __gnu_cxx::__ops::_Iter_comp_val<std::less<char>>::_Iter_comp_val(less param_1)

{
  undefined4 in_register_0000003c;
  undefined local_11 [9];
  
  local_11._1_8_ = CONCAT44(in_register_0000003c,param_1);
  std::move<std::less<char>&>((less *)local_11);
  return;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator-
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,long param_1)

{
  long in_FS_OFFSET;
  char *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (char *)(*(long *)this - param_1);
  __normal_iterator((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this)

{
  return *(undefined8 *)this;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >::difference_type
   __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&) */

difference_type __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  return (int)uVar1 - (int)*puVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char>
   > >, long, char, __gnu_cxx::__ops::_Iter_comp_val<std::less<char> >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, long, long,
   char, __gnu_cxx::__ops::_Iter_comp_val<std::less<char> >&) */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,long,char,__gnu_cxx::__ops::_Iter_comp_val<std::less<char>>>
               (__normal_iterator param_1,long param_2,long param_3,char param_4,
               _Iter_comp_val *param_5)

{
  type tVar1;
  bool bVar2;
  __normal_iterator _Var3;
  char *pcVar4;
  type *ptVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  char local_54 [4];
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
  local_54[0] = param_4;
  local_50 = param_3;
  local_48 = param_2;
  do {
    local_28 = local_28 / 2;
    if (local_50 < local_48) {
      _Var3 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                        ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                         &local_40,local_28);
      bVar2 = __gnu_cxx::__ops::_Iter_comp_val<std::less<char>>::operator()
                        ((_Iter_comp_val<std::less<char>> *)param_5,_Var3,local_54);
      if (!bVar2) goto LAB_00101f42;
      bVar2 = true;
    }
    else {
LAB_00101f42:
      bVar2 = false;
    }
    if (!bVar2) {
      ptVar5 = move<char&>(local_54);
      tVar1 = *ptVar5;
      local_30 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                 operator+((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                           &local_40,local_48);
      ptVar5 = (type *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                       operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                                 &local_30);
      *ptVar5 = tVar1;
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_30 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          &local_40,local_28);
    pcVar4 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_30);
    ptVar5 = move<char&>(pcVar4);
    tVar1 = *ptVar5;
    local_38 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          &local_40,local_48);
    ptVar5 = (type *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_38);
    *ptVar5 = tVar1;
    local_48 = local_28;
    local_28 = local_28 + -1;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::begin() const */

undefined8 std::vector<char,std::allocator<char>>::begin(void)

{
  char **in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::
  __normal_iterator((__normal_iterator<char_const*,std::vector<char,std::allocator<char>>> *)
                    &local_18,in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::end() const */

undefined8 std::vector<char,std::allocator<char>>::end(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::
  __normal_iterator((__normal_iterator<char_const*,std::vector<char,std::allocator<char>>> *)
                    &local_18,(char **)(in_RDI + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char const*,
   std::vector<char, std::allocator<char> > > const&, __gnu_cxx::__normal_iterator<char const*,
   std::vector<char, std::allocator<char> > > const&) */

bool __gnu_cxx::operator==(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::base();
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::base();
  return lVar1 == *plVar2;
}



/* __gnu_cxx::__normal_iterator<char const*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::operator*
          (__normal_iterator<char_const*,std::vector<char,std::allocator<char>>> *this)

{
  return *(undefined8 *)this;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE() */

__normal_iterator<char*,std::vector<char,std::allocator<char>>> * __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator--
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this)

{
  *(long *)this = *(long *)this + -1;
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__pop_heap<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, __gnu_cxx::__ops::_Iter_comp_iter<std::less<char> > >(__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__ops::_Iter_comp_iter<std::less<char> >&) */

void std::
     __pop_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>>
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               _Iter_comp_iter *param_4)

{
  type tVar1;
  difference_type dVar2;
  char *pcVar3;
  type *ptVar4;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  type local_21;
  long local_20;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                   operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                             &local_40);
  ptVar4 = move<char&>(pcVar3);
  local_21 = *ptVar4;
  pcVar3 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                   operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                             &local_30);
  ptVar4 = move<char&>(pcVar3);
  tVar1 = *ptVar4;
  ptVar4 = (type *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                   operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                             &local_40);
  *ptVar4 = tVar1;
  ptVar4 = move<char&>((char *)&local_21);
  tVar1 = *ptVar4;
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  __adjust_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,long,char,__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>>
            (local_30,0,dVar2,(int)(char)tVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void std::allocator_traits<std::allocator<char> >::destroy<char>(std::allocator<char>&, char*) */

void std::allocator_traits<std::allocator<char>>::destroy<char>(allocator *param_1,char *param_2)

{
  __gnu_cxx::new_allocator<char>::destroy<char>((char *)param_1);
  return;
}



/* __gnu_cxx::new_allocator<char>::deallocate(char*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<char>::deallocate(new_allocator<char> *this,char *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
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



/* void std::_Destroy_aux<true>::__destroy<char*>(char*, char*) */

void std::_Destroy_aux<true>::__destroy<char*>(char *param_1,char *param_2)

{
  return;
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



/* void std::vector<char, std::allocator<char>
   >::_M_realloc_insert<char>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char&&) */

void std::vector<char,std::allocator<char>>::_M_realloc_insert<char>
               (__normal_iterator param_1,char *param_2)

{
  difference_type dVar1;
  undefined4 extraout_var;
  char *pcVar2;
  char **ppcVar3;
  long lVar4;
  vector<char,std::allocator<char>> **ppvVar5;
  type *in_RDX;
  undefined4 in_register_0000003c;
  allocator *in_R8;
  long in_FS_OFFSET;
  char *local_68;
  vector<char,std::allocator<char>> **local_60;
  undefined8 local_58;
  ulong local_50;
  vector<char,std::allocator<char>> *local_48;
  vector<char,std::allocator<char>> *local_40;
  long local_38;
  vector<char,std::allocator<char>> *local_30;
  vector<char,std::allocator<char>> *local_28;
  long local_20;
  
  local_60 = (vector<char,std::allocator<char>> **)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_50 = _M_check_len((vector<char,std::allocator<char>> *)local_60,1,
                          "vector::_M_realloc_insert");
  local_48 = *local_60;
  local_40 = local_60[1];
  local_58 = begin();
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_68,(__normal_iterator *)&local_58);
  local_38 = CONCAT44(extraout_var,dVar1);
  local_30 = (vector<char,std::allocator<char>> *)
             _Vector_base<char,std::allocator<char>>::_M_allocate
                       ((_Vector_base<char,std::allocator<char>> *)local_60,local_50);
  local_28 = local_30;
  pcVar2 = forward<char>(in_RDX);
  allocator_traits<std::allocator<char>>::construct<char,char>
            ((allocator *)local_60,(char *)(local_30 + local_38),pcVar2);
  local_28 = (vector<char,std::allocator<char>> *)0x0;
  pcVar2 = (char *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  ppcVar3 = (char **)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     base();
  lVar4 = _S_relocate(local_48,*ppcVar3,(char *)local_30,pcVar2,in_R8);
  local_28 = (vector<char,std::allocator<char>> *)(lVar4 + 1);
  pcVar2 = (char *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  ppvVar5 = (vector<char,std::allocator<char>> **)
            __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  local_28 = (vector<char,std::allocator<char>> *)
             _S_relocate(*ppvVar5,(char *)local_40,(char *)local_28,pcVar2,in_R8);
  _Vector_base<char,std::allocator<char>>::_M_deallocate
            ((_Vector_base<char,std::allocator<char>> *)local_60,(char *)local_48,
             (long)local_60[2] - (long)local_48);
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
/* std::vector<char, std::allocator<char> >::back() */

void std::vector<char,std::allocator<char>>::back(void)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = end();
  local_18 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator-
                       ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_20
                        ,1);
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,long param_1)

{
  long in_FS_OFFSET;
  char *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (char *)(param_1 + *(long *)this);
  __normal_iterator((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* bool __gnu_cxx::__ops::_Iter_comp_val<std::less<char>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char&) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_val<std::less<char>>::operator()
          (_Iter_comp_val<std::less<char>> *this,__normal_iterator param_1,char *param_2)

{
  undefined uVar1;
  char *pcVar2;
  undefined4 in_register_00000034;
  undefined8 local_28;
  _Iter_comp_val<std::less<char>> *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  local_20 = this;
  pcVar2 = (char *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                             ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                              &local_28);
  uVar1 = std::less<char>::operator()((less<char> *)this,pcVar2,param_2);
  return (bool)uVar1;
}



/* __gnu_cxx::__normal_iterator<char const*, std::vector<char, std::allocator<char> >
   >::__normal_iterator(char const* const&) */

void __thiscall
__gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::__normal_iterator
          (__normal_iterator<char_const*,std::vector<char,std::allocator<char>>> *this,
          char **param_1)

{
  *(char **)this = *param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char const*, std::vector<char, std::allocator<char> > >::base()
   const */

undefined8
__gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, long, char, __gnu_cxx::__ops::_Iter_comp_iter<std::less<char> >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, long, long,
   char, __gnu_cxx::__ops::_Iter_comp_iter<std::less<char> >) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,long,char,__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>>
               (undefined8 param_1,long param_2,ulong param_3,char param_4)

{
  type tVar1;
  bool bVar2;
  __normal_iterator _Var3;
  __normal_iterator _Var4;
  char *pcVar5;
  type *ptVar6;
  type *ptVar7;
  long in_FS_OFFSET;
  char local_64 [3];
  _Iter_comp_iter<std::less<char>> local_61;
  ulong local_60;
  long local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_64[0] = param_4;
  local_60 = param_3;
  local_50[0] = param_1;
  local_30 = param_2;
  local_28 = param_2;
  while (local_58 = local_30, local_30 < (long)(local_60 - 1) / 2) {
    local_30 = (local_30 + 1) * 2;
    _Var3 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                      ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)local_50,
                       local_30 + -1);
    _Var4 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                      ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)local_50,
                       local_30);
    bVar2 = __gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>::operator()(&local_61,_Var4,_Var3);
    if (bVar2) {
      local_30 = local_30 + -1;
    }
    local_38 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          local_50,local_30);
    pcVar5 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_38);
    ptVar6 = move<char&>(pcVar5);
    tVar1 = *ptVar6;
    local_40 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          local_50,local_58);
    ptVar6 = (type *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_40);
    *ptVar6 = tVar1;
  }
  if (((local_60 & 1) == 0) && (local_30 == (long)(local_60 - 2) / 2)) {
    local_30 = (local_30 + 1) * 2;
    local_38 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          local_50,local_30 + -1);
    pcVar5 = (char *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_38);
    ptVar6 = move<char&>(pcVar5);
    tVar1 = *ptVar6;
    local_40 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                         ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                          local_50,local_58);
    ptVar6 = (type *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     operator*((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                               &local_40);
    *ptVar6 = tVar1;
    local_58 = local_30 + -1;
  }
  ptVar7 = move<__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>&>((_Iter_comp_iter *)&local_61);
  __gnu_cxx::__ops::_Iter_comp_val<std::less<char>>::_Iter_comp_val
            ((_Iter_comp_val<std::less<char>> *)&local_38,(_Iter_comp_iter *)ptVar7);
  ptVar6 = move<char&>(local_64);
  __push_heap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,long,char,__gnu_cxx::__ops::_Iter_comp_val<std::less<char>>>
            ((__normal_iterator)local_50[0],local_58,local_28,(char)*ptVar6,
             (_Iter_comp_val *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* std::allocator_traits<std::allocator<char> >::max_size(std::allocator<char> const&) */

void std::allocator_traits<std::allocator<char>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<char>::max_size();
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



/* std::vector<char, std::allocator<char> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<char,std::allocator<char>>::_M_check_len
          (vector<char,std::allocator<char>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<char,std::allocator<char>> *local_40;
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



/* std::_Vector_base<char, std::allocator<char> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<char,std::allocator<char>>::_M_allocate
          (_Vector_base<char,std::allocator<char>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<char>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



/* std::vector<char, std::allocator<char> >::_S_relocate(char*, char*, char*, std::allocator<char>&)
    */

void __thiscall
std::vector<char,std::allocator<char>>::_S_relocate
          (vector<char,std::allocator<char>> *this,char *param_1,char *param_2,char *param_3,
          allocator *param_4)

{
  _S_do_relocate((char *)this,param_1,param_2,(allocator *)param_3,(integral_constant)param_4);
  return;
}



/* std::less<char>::TEMPNAMEPLACEHOLDERVALUE(char const&, char const&) const */

bool __thiscall std::less<char>::operator()(less<char> *this,char *param_1,char *param_2)

{
  return *param_1 < *param_2;
}



/* bool __gnu_cxx::__ops::_Iter_comp_iter<std::less<char>
   >::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>::operator()
          (_Iter_comp_iter<std::less<char>> *this,__normal_iterator param_1,
          __normal_iterator param_2)

{
  undefined uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined8 local_30;
  undefined8 local_28;
  _Iter_comp_iter<std::less<char>> *local_20;
  
  local_28 = CONCAT44(in_register_00000034,param_1);
  local_30 = CONCAT44(in_register_00000014,param_2);
  local_20 = this;
  pcVar2 = (char *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                             ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                              &local_30);
  pcVar3 = (char *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator*
                             ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                              &local_28);
  uVar1 = std::less<char>::operator()((less<char> *)this,pcVar3,pcVar2);
  return (bool)uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<__gnu_cxx::__ops::_Iter_comp_iter<std::less<char> >&>::type&&
   std::move<__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>
   >&>(__gnu_cxx::__ops::_Iter_comp_iter<std::less<char> >&) */

type * std::move<__gnu_cxx::__ops::_Iter_comp_iter<std::less<char>>&>(_Iter_comp_iter *param_1)

{
  return (type *)param_1;
}



/* __gnu_cxx::__ops::_Iter_comp_val<std::less<char>
   >::_Iter_comp_val(__gnu_cxx::__ops::_Iter_comp_iter<std::less<char> >&&) */

void __thiscall
__gnu_cxx::__ops::_Iter_comp_val<std::less<char>>::_Iter_comp_val
          (_Iter_comp_val<std::less<char>> *this,_Iter_comp_iter *param_1)

{
  std::move<std::less<char>&>((less *)param_1);
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
/* std::vector<char, std::allocator<char> >::max_size() const */

void std::vector<char,std::allocator<char>>::max_size(void)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  _S_max_size(paVar1);
  return;
}



/* std::vector<char, std::allocator<char> >::_S_do_relocate(char*, char*, char*,
   std::allocator<char>&, std::integral_constant<bool, true>) */

void std::vector<char,std::allocator<char>>::_S_do_relocate
               (char *param_1,char *param_2,char *param_3,allocator *param_4,
               integral_constant param_5)

{
  __relocate_a<char*,char*,std::allocator<char>>(param_1,param_2,param_3,param_4);
  return;
}



/* std::vector<char, std::allocator<char> >::_S_max_size(std::allocator<char> const&) */

ulong std::vector<char,std::allocator<char>>::_S_max_size(allocator *param_1)

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Vector_base<char, std::allocator<char> >::_M_get_Tp_allocator() const */

undefined8 std::_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__relocate_a<char*, char*, std::allocator<char> >(char*, char*, char*,
   std::allocator<char>&) */

char * std::__relocate_a<char*,char*,std::allocator<char>>
                 (char *param_1,char *param_2,char *param_3,allocator *param_4)

{
  type tVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 extraout_var;
  
  pcVar2 = __niter_base<char*>(param_3);
  pcVar3 = __niter_base<char*>(param_2);
  pcVar4 = __niter_base<char*>(param_1);
  tVar1 = __relocate_a_1<char,char>(pcVar4,pcVar3,pcVar2,param_4);
  return (char *)CONCAT44(extraout_var,tVar1);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__niter_base<char*>(char*) */

char * std::__niter_base<char*>(char *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__is_bitwise_relocatable<char, void>::value, char*>::type
   std::__relocate_a_1<char, char>(char*, char*, char*, std::allocator<char>&) */

type std::__relocate_a_1<char,char>(char *param_1,char *param_2,char *param_3,allocator *param_4)

{
  size_t __n;
  
  __n = (long)param_2 - (long)param_1;
  if (0 < (long)__n) {
    memmove(param_3,param_1,__n);
  }
  return (int)param_3 + (int)__n;
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


