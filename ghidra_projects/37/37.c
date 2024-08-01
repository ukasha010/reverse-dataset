
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00103fe8;
  if (PTR___gmon_start___00103fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00103fe8)();
  }
  return (int)puVar1;
}



void FUN_00101020(void)

{
  (*(code *)PTR_00103f60)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__detail::_List_node_base::_M_hook(_List_node_base *param_1)

{
  (*(code *)PTR__M_hook_00103f68)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00103f70)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00103f78)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00103f80)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00103f88)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103f90)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00103f98)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103fa0)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fa8)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00103fb0)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fb8)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fc0)();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00101203) */
/* WARNING: Removing unreachable block (ram,0x0010120f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101244) */
/* WARNING: Removing unreachable block (ram,0x00101250) */

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00103fc8 != (undefined *)0x0) {
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
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 extraout_var;
  int *piVar2;
  basic_ostream *pbVar3;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  list<int,std::allocator<int>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::list<int,std::allocator<int>>::list();
  for (local_40._0_4_ = 0; (int)local_40 < 10; local_40._0_4_ = (int)local_40 + 1) {
                    /* try { // try from 001012e8 to 0010145d has its CatchHandler @ 00101482 */
    std::__cxx11::list<int,std::allocator<int>>::push_back(local_38,(int *)&local_40);
  }
  local_48 = std::__cxx11::list<int,std::allocator<int>>::begin();
  std::operator<<((basic_ostream *)std::cout,"List : ");
  while( true ) {
    std::__cxx11::list<int,std::allocator<int>>::end();
    local_40._0_4_ = extraout_EAX;
    local_40._4_4_ = extraout_var;
    cVar1 = std::operator!=((_List_iterator *)&local_48,(_List_iterator *)&local_40);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::_List_iterator<int>::operator*((_List_iterator<int> *)&local_48);
    pbVar3 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar2);
    std::operator<<(pbVar3," ");
    std::_List_iterator<int>::operator++((_List_iterator<int> *)&local_48,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
  local_48 = std::__cxx11::list<int,std::allocator<int>>::end();
  std::operator<<((basic_ostream *)std::cout,"List : ");
  while( true ) {
    std::__cxx11::list<int,std::allocator<int>>::begin();
    local_40._0_4_ = extraout_EAX_00;
    local_40._4_4_ = extraout_var_00;
    cVar1 = std::operator!=((_List_iterator *)&local_48,(_List_iterator *)&local_40);
    if (cVar1 == '\0') break;
    std::_List_iterator<int>::operator--((_List_iterator<int> *)&local_48,0);
    piVar2 = (int *)std::_List_iterator<int>::operator*((_List_iterator<int> *)&local_48);
    pbVar3 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar2);
    std::operator<<(pbVar3," ");
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00103fd0);
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
    __cxa_atexit(PTR__Init_00103ff8,&std::__ioinit,&__dso_handle);
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



/* std::__cxx11::list<int, std::allocator<int> >::push_back(int const&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::push_back
          (list<int,std::allocator<int>> *this,int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = end();
  _M_insert<int_const&>(this,uVar1,param_1);
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



/* std::_List_iterator<int>::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall std::_List_iterator<int>::operator--(_List_iterator<int> *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)this;
  *(undefined8 *)this = *(undefined8 *)(*(long *)this + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* void std::__cxx11::list<int, std::allocator<int> >::_M_insert<int
   const&>(std::_List_iterator<int>, int const&) */

void __thiscall
std::__cxx11::list<int,std::allocator<int>>::_M_insert<int_const&>
          (list<int,std::allocator<int>> *this,undefined8 param_2,type *param_3)

{
  int *piVar1;
  _List_node *p_Var2;
  
  piVar1 = forward<int_const&>(param_3);
  p_Var2 = _M_create_node<int_const&>(this,piVar1);
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
/* int const& std::forward<int const&>(std::remove_reference<int const&>::type&) */

int * std::forward<int_const&>(type *param_1)

{
  return (int *)param_1;
}



/* std::_List_node<int>* std::__cxx11::list<int, std::allocator<int> >::_M_create_node<int
   const&>(int const&) */

_List_node * __thiscall
std::__cxx11::list<int,std::allocator<int>>::_M_create_node<int_const&>
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
  piVar3 = forward<int_const&>((type *)param_1);
  piVar4 = (int *)_List_node<int>::_M_valptr();
  allocator_traits<std::allocator<std::_List_node<int>>>::construct<int,int_const&>
            (paVar2,piVar4,piVar3);
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



/* void std::allocator_traits<std::allocator<std::_List_node<int> > >::construct<int, int
   const&>(std::allocator<std::_List_node<int> >&, int*, int const&) */

void std::allocator_traits<std::allocator<std::_List_node<int>>>::construct<int,int_const&>
               (allocator *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = forward<int_const&>((type *)param_3);
  __gnu_cxx::new_allocator<std::_List_node<int>>::construct<int,int_const&>
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



/* void __gnu_cxx::new_allocator<std::_List_node<int> >::construct<int, int const&>(int*, int
   const&) */

void __thiscall
__gnu_cxx::new_allocator<std::_List_node<int>>::construct<int,int_const&>
          (new_allocator<std::_List_node<int>> *this,int *param_1,int *param_2)

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


