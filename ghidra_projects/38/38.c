
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
  (*(code *)PTR_00105f28)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_hook(_List_node_base *param_1)

{
  (*(code *)PTR__M_hook_00105f30)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_00105f38)();
  return iVar1;
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

void std::__detail::_List_node_base::_M_transfer(_List_node_base *param_1,_List_node_base *param_2)

{
  (*(code *)PTR__M_transfer_00105f50)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00105f58)();
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



void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00105fa8)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00105fb0)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00105fb8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::swap(_List_node_base *param_1,_List_node_base *param_2)

{
  (*(code *)PTR_swap_00105fc0)();
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
  int iVar2;
  int *piVar3;
  basic_ostream *pbVar4;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  list<int,std::allocator<int>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::list<int,std::allocator<int>>::list();
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    iVar2 = rand();
    local_40 = CONCAT44(local_40._4_4_,iVar2);
                    /* try { // try from 001013d0 to 0010154a has its CatchHandler @ 0010156f */
    std::__cxx11::list<int,std::allocator<int>>::push_back(local_38,(int *)&local_40);
  }
  std::operator<<((basic_ostream *)std::cout,"Contents of the list : ");
  local_48 = std::__cxx11::list<int,std::allocator<int>>::begin();
  while( true ) {
    local_40 = std::__cxx11::list<int,std::allocator<int>>::end();
    cVar1 = std::operator!=((_List_iterator *)&local_48,(_List_iterator *)&local_40);
    if (cVar1 == '\0') break;
    piVar3 = (int *)std::_List_iterator<int>::operator*((_List_iterator<int> *)&local_48);
    pbVar4 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar3);
    std::operator<<(pbVar4," ");
    std::_List_iterator<int>::operator++((_List_iterator<int> *)&local_48,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  std::__cxx11::list<int,std::allocator<int>>::sort();
  std::operator<<((basic_ostream *)std::cout,"Sorted Contents : ");
  local_48 = std::__cxx11::list<int,std::allocator<int>>::begin();
  while( true ) {
    local_40 = std::__cxx11::list<int,std::allocator<int>>::end();
    cVar1 = std::operator!=((_List_iterator *)&local_48,(_List_iterator *)&local_40);
    if (cVar1 == '\0') break;
    piVar3 = (int *)std::_List_iterator<int>::operator*((_List_iterator<int> *)&local_48);
    pbVar4 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar3);
    std::operator<<(pbVar4," ");
    std::_List_iterator<int>::operator++((_List_iterator<int> *)&local_48,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00105fd0);
  std::__cxx11::list<int,std::allocator<int>>::~list(local_38);
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



/* std::__detail::_List_node_header::_List_node_header() */

void __thiscall std::__detail::_List_node_header::_List_node_header(_List_node_header *this)

{
  _M_init();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__detail::_List_node_header::_M_init() */

void std::__detail::_List_node_header::_M_init(void)

{
  undefined8 *in_RDI;
  
  in_RDI[1] = in_RDI;
  *in_RDI = in_RDI[1];
  in_RDI[2] = 0;
  return;
}



/* std::__cxx11::_List_base<int, std::allocator<int> >::_List_impl::~_List_impl() */

void __thiscall
std::__cxx11::_List_base<int,std::allocator<int>>::_List_impl::~_List_impl(_List_impl *this)

{
  allocator<std::_List_node<int>>::~allocator((allocator<std::_List_node<int>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::_List_base<int, std::allocator<int> >::_List_base() */

void std::__cxx11::_List_base<int,std::allocator<int>>::_List_base(void)

{
  _List_impl *in_RDI;
  
  _List_impl::_List_impl(in_RDI);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::list<int, std::allocator<int> >::list() */

void std::__cxx11::list<int,std::allocator<int>>::list(void)

{
  _List_base<int,std::allocator<int>>::_List_base();
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::~list() */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::~list(list<int,std::allocator<int>> *this)

{
  _List_base<int,std::allocator<int>>::~_List_base((_List_base<int,std::allocator<int>> *)this);
  return;
}



/* std::__cxx11::_List_base<int, std::allocator<int> >::_List_impl::_List_impl() */

void __thiscall
std::__cxx11::_List_base<int,std::allocator<int>>::_List_impl::_List_impl(_List_impl *this)

{
  allocator<std::_List_node<int>>::allocator();
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}



/* std::allocator<std::_List_node<int> >::~allocator() */

void __thiscall
std::allocator<std::_List_node<int>>::~allocator(allocator<std::_List_node<int>> *this)

{
  __gnu_cxx::new_allocator<std::_List_node<int>>::~new_allocator
            ((new_allocator<std::_List_node<int>> *)this);
  return;
}



/* std::__cxx11::_List_base<int, std::allocator<int> >::~_List_base() */

void __thiscall
std::__cxx11::_List_base<int,std::allocator<int>>::~_List_base
          (_List_base<int,std::allocator<int>> *this)

{
  _M_clear();
  _List_impl::~_List_impl((_List_impl *)this);
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::push_back(int&&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::push_back
          (list<int,std::allocator<int>> *this,int *param_1)

{
  type *ptVar1;
  undefined8 uVar2;
  
  ptVar1 = move<int&>(param_1);
  uVar2 = end();
  _M_insert<int>(this,uVar2,ptVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::list<int, std::allocator<int> >::begin() */

undefined8 std::__cxx11::list<int,std::allocator<int>>::begin(void)

{
  _List_node_base **in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<int>::_List_iterator((_List_iterator<int> *)&local_18,*in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::list<int, std::allocator<int> >::end() */

undefined8 std::__cxx11::list<int,std::allocator<int>>::end(void)

{
  _List_node_base *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<int>::_List_iterator((_List_iterator<int> *)&local_18,in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_iterator<int> const&, std::_List_iterator<int> const&)
    */

undefined8 std::operator!=(_List_iterator *param_1,_List_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}



/* std::_List_iterator<int>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_iterator<int>::operator*(_List_iterator<int> *this)

{
  _List_node<int>::_M_valptr();
  return;
}



/* std::_List_iterator<int>::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall std::_List_iterator<int>::operator++(_List_iterator<int> *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)this;
  *(undefined8 *)this = **(undefined8 **)this;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::list<int, std::allocator<int> >::sort() */

void std::__cxx11::list<int,std::allocator<int>>::sort(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  list<int,std::allocator<int>> *this;
  long *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  list *local_658;
  list *local_650;
  list<int,std::allocator<int>> local_648 [32];
  list local_628 [24];
  list<int,std::allocator<int>> alStack_610 [1512];
  list<int,std::allocator<int>> alStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((long *)*in_RDI != in_RDI) && (*(long **)*in_RDI != in_RDI)) {
    list();
    for (lVar3 = 0x3f; -1 < lVar3; lVar3 = lVar3 + -1) {
      list();
    }
    local_658 = local_628;
LAB_00101996:
    local_670 = begin();
    _List_const_iterator<int>::_List_const_iterator
              ((_List_const_iterator<int> *)&local_660,(_List_iterator *)&local_670);
    local_678 = begin();
    _List_const_iterator<int>::_List_const_iterator
              ((_List_const_iterator<int> *)&local_668,(_List_iterator *)&local_678);
    splice(local_648,(_List_const_iterator)local_668,(list *)in_RDI,(_List_const_iterator)local_660)
    ;
    local_650 = local_628;
    do {
      if (local_650 == local_658) {
LAB_00101a8f:
        bVar1 = false;
      }
      else {
        cVar2 = empty();
        if (cVar2 == '\x01') goto LAB_00101a8f;
        bVar1 = true;
      }
      if (!bVar1) goto code_r0x00101a98;
                    /* try { // try from 00101a3c to 00101b13 has its CatchHandler @ 00101b86 */
      merge((list<int,std::allocator<int>> *)local_650,(list *)local_648);
      swap(local_648,local_650);
      local_650 = local_650 + 0x18;
    } while( true );
  }
code_r0x00101ccd:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00101a98:
  swap(local_648,local_650);
  if (local_650 == local_658) {
    local_658 = local_658 + 0x18;
  }
  cVar2 = empty();
  if (cVar2 == '\x01') goto code_r0x00101ae3;
  goto LAB_00101996;
code_r0x00101ae3:
  for (local_650 = (list *)alStack_610; local_650 != local_658; local_650 = local_650 + 0x18) {
    merge((list<int,std::allocator<int>> *)local_650,local_650 + -0x18);
  }
  swap((list<int,std::allocator<int>> *)in_RDI,local_658 + -0x18);
  this = alStack_28;
  while (this != (list<int,std::allocator<int>> *)local_628) {
    this = this + -0x18;
    ~list(this);
  }
  ~list(local_648);
  goto code_r0x00101ccd;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<int> >::allocator() */

void std::allocator<std::_List_node<int>>::allocator(void)

{
  __gnu_cxx::new_allocator<std::_List_node<int>>::new_allocator();
  return;
}



/* __gnu_cxx::new_allocator<std::_List_node<int> >::~new_allocator() */

void __thiscall
__gnu_cxx::new_allocator<std::_List_node<int>>::~new_allocator
          (new_allocator<std::_List_node<int>> *this)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_clear() */

void std::__cxx11::_List_base<int,std::allocator<int>>::_M_clear(void)

{
  undefined8 *puVar1;
  int *piVar2;
  allocator *paVar3;
  undefined8 *in_RDI;
  undefined8 *local_20;
  
  local_20 = (undefined8 *)*in_RDI;
  while (local_20 != in_RDI) {
    puVar1 = (undefined8 *)*local_20;
    piVar2 = (int *)_List_node<int>::_M_valptr();
    paVar3 = (allocator *)_M_get_Node_allocator();
    allocator_traits<std::allocator<std::_List_node<int>>>::destroy<int>(paVar3,piVar2);
    _M_put_node((_List_base<int,std::allocator<int>> *)in_RDI,(_List_node *)local_20);
    local_20 = puVar1;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int&>::type&& std::move<int&>(int&) */

type * std::move<int&>(int *param_1)

{
  return (type *)param_1;
}



/* void std::__cxx11::list<int, std::allocator<int> >::_M_insert<int>(std::_List_iterator<int>,
   int&&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::_M_insert<int>
          (list<int,std::allocator<int>> *this,undefined8 param_2,type *param_3)

{
  int *piVar1;
  _List_node *p_Var2;
  
  piVar1 = forward<int>(param_3);
  p_Var2 = _M_create_node<int>(this,piVar1);
  std::__detail::_List_node_base::_M_hook((_List_node_base *)p_Var2);
  _List_base<int,std::allocator<int>>::_M_inc_size((_List_base<int,std::allocator<int>> *)this,1);
  return;
}



/* std::_List_iterator<int>::_List_iterator(std::__detail::_List_node_base*) */

void __thiscall
std::_List_iterator<int>::_List_iterator(_List_iterator<int> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_List_node<int>::_M_valptr() */

void std::_List_node<int>::_M_valptr(void)

{
  __gnu_cxx::__aligned_membuf<int>::_M_ptr();
  return;
}



/* std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&) */

void __thiscall
std::_List_const_iterator<int>::_List_const_iterator
          (_List_const_iterator<int> *this,_List_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>,
   std::__cxx11::list<int, std::allocator<int> >&, std::_List_const_iterator<int>) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::splice
          (list<int,std::allocator<int>> *this,_List_const_iterator param_1,list *param_2,
          _List_const_iterator param_3)

{
  type *ptVar1;
  
  ptVar1 = move<std::__cxx11::list<int,std::allocator<int>>&>(param_2);
  splice(this,param_1,(list *)ptVar1,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::list<int, std::allocator<int> >::empty() const */

bool std::__cxx11::list<int,std::allocator<int>>::empty(void)

{
  long *in_RDI;
  
  return (long *)*in_RDI == in_RDI;
}



/* std::__cxx11::list<int, std::allocator<int> >::merge(std::__cxx11::list<int, std::allocator<int>
   >&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::merge
          (list<int,std::allocator<int>> *this,list *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<std::__cxx11::list<int,std::allocator<int>>&>(param_1);
  merge(this,(list *)ptVar1);
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::swap(std::__cxx11::list<int, std::allocator<int>
   >&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::swap(list<int,std::allocator<int>> *this,list *param_1)

{
  ulong uVar1;
  ulong uVar2;
  allocator *paVar3;
  allocator *paVar4;
  
  std::__detail::_List_node_base::swap((_List_node_base *)this,(_List_node_base *)param_1);
  uVar1 = _List_base<int,std::allocator<int>>::_M_get_size();
  uVar2 = _List_base<int,std::allocator<int>>::_M_get_size();
  _List_base<int,std::allocator<int>>::_M_set_size
            ((_List_base<int,std::allocator<int>> *)param_1,uVar2);
  _List_base<int,std::allocator<int>>::_M_set_size
            ((_List_base<int,std::allocator<int>> *)this,uVar1);
  paVar3 = (allocator *)_List_base<int,std::allocator<int>>::_M_get_Node_allocator();
  paVar4 = (allocator *)_List_base<int,std::allocator<int>>::_M_get_Node_allocator();
  __gnu_cxx::__alloc_traits<std::allocator<std::_List_node<int>>,std::_List_node<int>>::_S_on_swap
            (paVar4,paVar3);
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>,
   std::__cxx11::list<int, std::allocator<int> >&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::splice
          (list<int,std::allocator<int>> *this,_List_const_iterator param_1,list *param_2)

{
  type *ptVar1;
  
  ptVar1 = move<std::__cxx11::list<int,std::allocator<int>>&>(param_2);
  splice(this,param_1,(list *)ptVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<std::_List_node<int> >::new_allocator() */

void __gnu_cxx::new_allocator<std::_List_node<int>>::new_allocator(void)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_get_Node_allocator() */

undefined8 std::__cxx11::_List_base<int,std::allocator<int>>::_M_get_Node_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* void std::allocator_traits<std::allocator<std::_List_node<int> >
   >::destroy<int>(std::allocator<std::_List_node<int> >&, int*) */

void std::allocator_traits<std::allocator<std::_List_node<int>>>::destroy<int>
               (allocator *param_1,int *param_2)

{
  __gnu_cxx::new_allocator<std::_List_node<int>>::destroy<int>((int *)param_1);
  return;
}



/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_put_node(std::_List_node<int>*) */

void __thiscall
std::__cxx11::_List_base<int,std::allocator<int>>::_M_put_node
          (_List_base<int,std::allocator<int>> *this,_List_node *param_1)

{
  allocator_traits<std::allocator<std::_List_node<int>>>::deallocate((allocator *)this,param_1,1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int>(std::remove_reference<int>::type&) */

int * std::forward<int>(type *param_1)

{
  return (int *)param_1;
}



/* std::_List_node<int>* std::__cxx11::list<int, std::allocator<int> >::_M_create_node<int>(int&&)
    */

_List_node * __thiscall
std::__cxx11::list<int,std::allocator<int>>::_M_create_node<int>
          (list<int,std::allocator<int>> *this,int *param_1)

{
  _List_node *p_Var1;
  allocator *paVar2;
  int *piVar3;
  int *piVar4;
  long in_FS_OFFSET;
  __allocated_ptr<std::allocator<std::_List_node<int>>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var1 = (_List_node *)_List_base<int,std::allocator<int>>::_M_get_node();
  paVar2 = (allocator *)_List_base<int,std::allocator<int>>::_M_get_Node_allocator();
  __allocated_ptr<std::allocator<std::_List_node<int>>>::__allocated_ptr(local_38,paVar2,p_Var1);
  piVar3 = forward<int>((type *)param_1);
  piVar4 = (int *)_List_node<int>::_M_valptr();
  allocator_traits<std::allocator<std::_List_node<int>>>::construct<int,int>(paVar2,piVar4,piVar3);
  __allocated_ptr<std::allocator<std::_List_node<int>>>::operator=
            (local_38,(_func_decltype_nullptr *)0x0);
  __allocated_ptr<std::allocator<std::_List_node<int>>>::~__allocated_ptr(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return p_Var1;
}



/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_inc_size(unsigned long) */

void __thiscall
std::__cxx11::_List_base<int,std::allocator<int>>::_M_inc_size
          (_List_base<int,std::allocator<int>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<int>::_M_ptr() */

void __gnu_cxx::__aligned_membuf<int>::_M_ptr(void)

{
  _M_addr();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::__cxx11::list<int, std::allocator<int> >&>::type&&
   std::move<std::__cxx11::list<int, std::allocator<int> >&>(std::__cxx11::list<int,
   std::allocator<int> >&) */

type * std::move<std::__cxx11::list<int,std::allocator<int>>&>(list *param_1)

{
  return (type *)param_1;
}



/* std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>,
   std::__cxx11::list<int, std::allocator<int> >&&, std::_List_const_iterator<int>) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::splice
          (list<int,std::allocator<int>> *this,_List_const_iterator param_1,list *param_2,
          _List_const_iterator param_3)

{
  bool bVar1;
  char cVar2;
  list *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined8 local_58;
  list *local_50;
  undefined8 local_48;
  list<int,std::allocator<int>> *local_40;
  undefined8 local_30;
  _List_const_iterator local_28 [2];
  long local_20;
  
  local_48 = CONCAT44(in_register_00000034,param_1);
  local_58 = CONCAT44(in_register_0000000c,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_2;
  local_40 = this;
  local_30 = _List_const_iterator<int>::_M_const_cast();
  _List_iterator<int>::operator++((_List_iterator<int> *)&local_30);
  cVar2 = operator==((_List_const_iterator *)&local_48,(_List_const_iterator *)&local_58);
  if (cVar2 == '\0') {
    _List_const_iterator<int>::_List_const_iterator
              ((_List_const_iterator<int> *)local_28,(_List_iterator *)&local_30);
    cVar2 = operator==((_List_const_iterator *)&local_48,local_28);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010222b;
    }
  }
  bVar1 = true;
LAB_0010222b:
  if (!bVar1) {
    plVar3 = __addressof<std::__cxx11::list<int,std::allocator<int>>>(local_50);
    if (local_40 != (list<int,std::allocator<int>> *)plVar3) {
      _M_check_equal_allocators((list *)local_40);
    }
    uVar4 = _List_const_iterator<int>::_M_const_cast();
    uVar5 = _List_const_iterator<int>::_M_const_cast();
    _M_transfer(local_40,uVar5,uVar4,local_30);
    _List_base<int,std::allocator<int>>::_M_inc_size
              ((_List_base<int,std::allocator<int>> *)local_40,1);
    _List_base<int,std::allocator<int>>::_M_dec_size
              ((_List_base<int,std::allocator<int>> *)local_50,1);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::merge(std::__cxx11::list<int, std::allocator<int>
   >&&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::merge
          (list<int,std::allocator<int>> *this,list *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  list *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  _Finalize_merge local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = __addressof<std::__cxx11::list<int,std::allocator<int>>>(param_1);
  if (this != (list<int,std::allocator<int>> *)plVar4) {
    _M_check_equal_allocators((list *)this);
    local_60 = begin();
    local_58 = end();
    local_50 = begin();
    local_48 = end();
    _Finalize_merge::_Finalize_merge(local_38,(list *)this,param_1,(_List_iterator *)&local_50);
LAB_001023e5:
    cVar3 = operator!=((_List_iterator *)&local_60,(_List_iterator *)&local_58);
    if (cVar3 == '\0') {
LAB_0010241a:
      bVar2 = false;
    }
    else {
      cVar3 = operator!=((_List_iterator *)&local_50,(_List_iterator *)&local_48);
      if (cVar3 == '\0') goto LAB_0010241a;
      bVar2 = true;
    }
    if (bVar2) {
      piVar5 = (int *)_List_iterator<int>::operator*((_List_iterator<int> *)&local_50);
      iVar1 = *piVar5;
      piVar5 = (int *)_List_iterator<int>::operator*((_List_iterator<int> *)&local_60);
      if (iVar1 < *piVar5) {
        local_40 = local_50;
        puVar6 = (undefined8 *)_List_iterator<int>::operator++((_List_iterator<int> *)&local_40);
        _M_transfer(this,local_60,local_50,*puVar6);
        local_50 = local_40;
      }
      else {
        _List_iterator<int>::operator++((_List_iterator<int> *)&local_60);
      }
      goto LAB_001023e5;
    }
    cVar3 = operator!=((_List_iterator *)&local_50,(_List_iterator *)&local_48);
    if (cVar3 != '\0') {
      _M_transfer(this,local_58,local_50,local_48);
      local_50 = local_48;
    }
    _Finalize_merge::~_Finalize_merge(local_38);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_get_size() const */

undefined8 std::__cxx11::_List_base<int,std::allocator<int>>::_M_get_size(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 0x10);
}



/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_set_size(unsigned long) */

void __thiscall
std::__cxx11::_List_base<int,std::allocator<int>>::_M_set_size
          (_List_base<int,std::allocator<int>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = param_1;
  return;
}



/* __gnu_cxx::__alloc_traits<std::allocator<std::_List_node<int> >, std::_List_node<int>
   >::_S_on_swap(std::allocator<std::_List_node<int> >&, std::allocator<std::_List_node<int> >&) */

void __gnu_cxx::__alloc_traits<std::allocator<std::_List_node<int>>,std::_List_node<int>>::
     _S_on_swap(allocator *param_1,allocator *param_2)

{
  std::__alloc_on_swap<std::allocator<std::_List_node<int>>>(param_1,param_2);
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>,
   std::__cxx11::list<int, std::allocator<int> >&&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::splice
          (list<int,std::allocator<int>> *this,_List_const_iterator param_1,list *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  cVar1 = empty();
  if (cVar1 != '\x01') {
    _M_check_equal_allocators((list *)this);
    uVar2 = end();
    uVar3 = begin();
    uVar4 = _List_const_iterator<int>::_M_const_cast();
    _M_transfer(this,uVar4,uVar3,uVar2);
    uVar5 = _List_base<int,std::allocator<int>>::_M_get_size();
    _List_base<int,std::allocator<int>>::_M_inc_size
              ((_List_base<int,std::allocator<int>> *)this,uVar5);
    _List_base<int,std::allocator<int>>::_M_set_size
              ((_List_base<int,std::allocator<int>> *)param_2,0);
  }
  return;
}



/* void __gnu_cxx::new_allocator<std::_List_node<int> >::destroy<int>(int*) */

void __gnu_cxx::new_allocator<std::_List_node<int>>::destroy<int>(int *param_1)

{
  return;
}



/* std::allocator_traits<std::allocator<std::_List_node<int> >
   >::deallocate(std::allocator<std::_List_node<int> >&, std::_List_node<int>*, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<int>>>::deallocate
               (allocator *param_1,_List_node *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<std::_List_node<int>>::deallocate
            ((new_allocator<std::_List_node<int>> *)param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_get_node() */

void std::__cxx11::_List_base<int,std::allocator<int>>::_M_get_node(void)

{
  allocator *in_RDI;
  
  allocator_traits<std::allocator<std::_List_node<int>>>::allocate(in_RDI,1);
  return;
}



/* std::__allocated_ptr<std::allocator<std::_List_node<int> >
   >::__allocated_ptr(std::allocator<std::_List_node<int> >&, std::_List_node<int>*) */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<int>>>::__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<int>>> *this,allocator *param_1,
          _List_node *param_2)

{
  allocator *paVar1;
  
  paVar1 = __addressof<std::allocator<std::_List_node<int>>>(param_1);
  *(allocator **)this = paVar1;
  *(_List_node **)(this + 8) = param_2;
  return;
}



/* std::__allocated_ptr<std::allocator<std::_List_node<int> > >::~__allocated_ptr() */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<int>>>::~__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<int>>> *this)

{
  if (*(long *)(this + 8) != 0) {
    allocator_traits<std::allocator<std::_List_node<int>>>::deallocate
              (*(allocator **)this,*(_List_node **)(this + 8),1);
  }
  return;
}



/* void std::allocator_traits<std::allocator<std::_List_node<int> > >::construct<int,
   int>(std::allocator<std::_List_node<int> >&, int*, int&&) */

void std::allocator_traits<std::allocator<std::_List_node<int>>>::construct<int,int>
               (allocator *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_3);
  __gnu_cxx::new_allocator<std::_List_node<int>>::construct<int,int>
            ((new_allocator<std::_List_node<int>> *)param_1,param_2,piVar1);
  return;
}



/* std::__allocated_ptr<std::allocator<std::_List_node<int> >
   >::TEMPNAMEPLACEHOLDERVALUE(decltype(nullptr)) */

__allocated_ptr<std::allocator<std::_List_node<int>>> * __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<int>>>::operator=
          (__allocated_ptr<std::allocator<std::_List_node<int>>> *this,
          _func_decltype_nullptr *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<int>::_M_addr() */

undefined8 __gnu_cxx::__aligned_membuf<int>::_M_addr(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_List_const_iterator<int>::_M_const_cast() const */

undefined8 std::_List_const_iterator<int>::_M_const_cast(void)

{
  _List_node_base **in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<int>::_List_iterator((_List_iterator<int> *)&local_18,*in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* std::_List_iterator<int>::TEMPNAMEPLACEHOLDERVALUE() */

_List_iterator<int> * __thiscall std::_List_iterator<int>::operator++(_List_iterator<int> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<int> const&,
   std::_List_const_iterator<int> const&) */

undefined8 std::operator==(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::list<int, std::allocator<int> >* std::__addressof<std::__cxx11::list<int,
   std::allocator<int> > >(std::__cxx11::list<int, std::allocator<int> >&) */

list * std::__addressof<std::__cxx11::list<int,std::allocator<int>>>(list *param_1)

{
  return param_1;
}



/* std::__cxx11::list<int, std::allocator<int> >::_M_check_equal_allocators(std::__cxx11::list<int,
   std::allocator<int> >&) */

void std::__cxx11::list<int,std::allocator<int>>::_M_check_equal_allocators(list *param_1)

{
  char cVar1;
  allocator *paVar2;
  allocator *paVar3;
  
  paVar2 = (allocator *)_List_base<int,std::allocator<int>>::_M_get_Node_allocator();
  paVar3 = (allocator *)_List_base<int,std::allocator<int>>::_M_get_Node_allocator();
  cVar1 = __alloc_neq<std::allocator<std::_List_node<int>>,true>::_S_do_it(paVar3,paVar2);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::_M_transfer(std::_List_iterator<int>,
   std::_List_iterator<int>, std::_List_iterator<int>) */

void std::__cxx11::list<int,std::allocator<int>>::_M_transfer
               (undefined8 param_1,_List_node_base *param_2,_List_node_base *param_3)

{
  std::__detail::_List_node_base::_M_transfer(param_2,param_3);
  return;
}



/* std::__cxx11::_List_base<int, std::allocator<int> >::_M_dec_size(unsigned long) */

void __thiscall
std::__cxx11::_List_base<int,std::allocator<int>>::_M_dec_size
          (_List_base<int,std::allocator<int>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) - param_1;
  return;
}



/* std::__cxx11::list<int, std::allocator<int>
   >::_Finalize_merge::_Finalize_merge(std::__cxx11::list<int, std::allocator<int> >&,
   std::__cxx11::list<int, std::allocator<int> >&, std::_List_iterator<int> const&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::_Finalize_merge::_Finalize_merge
          (_Finalize_merge *this,list *param_1,list *param_2,_List_iterator *param_3)

{
  *(list **)this = param_1;
  *(list **)(this + 8) = param_2;
  *(_List_iterator **)(this + 0x10) = param_3;
  return;
}



/* std::__cxx11::list<int, std::allocator<int> >::_Finalize_merge::~_Finalize_merge() */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::_Finalize_merge::~_Finalize_merge
          (_Finalize_merge *this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = end();
  uVar2 = distance<std::_List_iterator<int>>(**(undefined8 **)(this + 0x10),uVar1);
  lVar3 = _List_base<int,std::allocator<int>>::_M_get_size();
  _List_base<int,std::allocator<int>>::_M_inc_size
            (*(_List_base<int,std::allocator<int>> **)this,lVar3 - uVar2);
  _List_base<int,std::allocator<int>>::_M_set_size
            (*(_List_base<int,std::allocator<int>> **)(this + 8),uVar2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__alloc_on_swap<std::allocator<std::_List_node<int> >
   >(std::allocator<std::_List_node<int> >&, std::allocator<std::_List_node<int> >&) */

void std::__alloc_on_swap<std::allocator<std::_List_node<int>>>
               (allocator *param_1,allocator *param_2)

{
  return;
}



/* __gnu_cxx::new_allocator<std::_List_node<int> >::deallocate(std::_List_node<int>*, unsigned long)
    */

void __thiscall
__gnu_cxx::new_allocator<std::_List_node<int>>::deallocate
          (new_allocator<std::_List_node<int>> *this,_List_node *param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 0x18);
  return;
}



/* std::allocator_traits<std::allocator<std::_List_node<int> >
   >::allocate(std::allocator<std::_List_node<int> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<int>>>::allocate
               (allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<std::_List_node<int>>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<int> >* std::__addressof<std::allocator<std::_List_node<int> >
   >(std::allocator<std::_List_node<int> >&) */

allocator * std::__addressof<std::allocator<std::_List_node<int>>>(allocator *param_1)

{
  return param_1;
}



/* void __gnu_cxx::new_allocator<std::_List_node<int> >::construct<int, int>(int*, int&&) */

void __thiscall
__gnu_cxx::new_allocator<std::_List_node<int>>::construct<int,int>
          (new_allocator<std::_List_node<int>> *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = std::forward<int>((type *)param_2);
  iVar1 = *piVar2;
  piVar2 = (int *)operator_new(4,param_1);
  *piVar2 = iVar1;
  return;
}



/* std::__alloc_neq<std::allocator<std::_List_node<int> >,
   true>::_S_do_it(std::allocator<std::_List_node<int> > const&, std::allocator<std::_List_node<int>
   > const&) */

undefined8
std::__alloc_neq<std::allocator<std::_List_node<int>>,true>::_S_do_it
          (allocator *param_1,allocator *param_2)

{
  return 0;
}



/* std::iterator_traits<std::_List_iterator<int> >::difference_type
   std::distance<std::_List_iterator<int> >(std::_List_iterator<int>, std::_List_iterator<int>) */

void std::distance<std::_List_iterator<int>>(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20[0] = param_1;
  __iterator_category<std::_List_iterator<int>>((_List_iterator *)local_20);
  __distance<int>(local_20[0],param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<std::_List_node<int> >::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<std::_List_node<int>>::_M_max_size(void)

{
  return 0x555555555555555;
}



/* __gnu_cxx::new_allocator<std::_List_node<int> >::allocate(unsigned long, void const*) */

void __gnu_cxx::new_allocator<std::_List_node<int>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    if ((void *)0xaaaaaaaaaaaaaaa < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x18);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<std::_List_iterator<int> >::iterator_category
   std::__iterator_category<std::_List_iterator<int> >(std::_List_iterator<int> const&) */

iterator_category std::__iterator_category<std::_List_iterator<int>>(_List_iterator *param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* long std::__distance<int>(std::_List_iterator<int>, std::_List_iterator<int>,
   std::input_iterator_tag) */

void std::__distance<int>(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30 [2];
  _List_const_iterator local_20 [2];
  _List_const_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30[0] = param_1;
  _List_const_iterator<int>::_List_const_iterator
            ((_List_const_iterator<int> *)local_18,(_List_iterator *)&local_38);
  _List_const_iterator<int>::_List_const_iterator
            ((_List_const_iterator<int> *)local_20,(_List_iterator *)local_30);
  __distance<int>(local_20[0],local_18[0],local_18[0]);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long std::__distance<int>(std::_List_const_iterator<int>, std::_List_const_iterator<int>,
   std::input_iterator_tag) */

long std::__distance<int>
               (_List_const_iterator param_1,_List_const_iterator param_2,input_iterator_tag param_3
               )

{
  char cVar1;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_21;
  undefined8 local_20;
  long local_18;
  long local_10;
  
  local_30 = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = local_38;
  _List_const_iterator<int>::operator++((_List_const_iterator<int> *)&local_20);
  local_21 = operator==((_List_const_iterator *)&local_30,(_List_const_iterator *)&local_20);
  local_18 = 0;
  while( true ) {
    cVar1 = operator!=((_List_const_iterator *)&local_30,(_List_const_iterator *)&local_38);
    if (cVar1 == '\0') break;
    _List_const_iterator<int>::operator++((_List_const_iterator<int> *)&local_30);
    local_18 = local_18 + 1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* std::_List_const_iterator<int>::TEMPNAMEPLACEHOLDERVALUE() */

_List_const_iterator<int> * __thiscall
std::_List_const_iterator<int>::operator++(_List_const_iterator<int> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<int> const&,
   std::_List_const_iterator<int> const&) */

undefined8 std::operator!=(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_hook(_List_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8__detail15_List_node_base7_M_hookEPS0_@GLIBCXX_3.4.15 */
  halt_baddata();
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

void std::__detail::_List_node_base::_M_transfer(_List_node_base *param_1,_List_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8__detail15_List_node_base11_M_transferEPS0_S1_@GLIBCXX_3.4.15 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* abort@GLIBC_2.2.5 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::swap(_List_node_base *param_1,_List_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt8__detail15_List_node_base4swapERS0_S1_@GLIBCXX_3.4.15 */
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


