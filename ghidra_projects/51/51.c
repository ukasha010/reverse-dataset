
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
  (*(code *)PTR_00106f48)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00106fc8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  (*(code *)PTR__Rb_tree_insert_and_rebalance_00106f50)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
  (*(code *)PTR_operator<<_00106f58)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00106f60)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  (*(code *)PTR__Rb_tree_rebalance_for_erase_00106f68)();
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_00106fa8)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00106fb0)();
  return;
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
  basic_ostream<char,std::char_traits<char>> *pbVar4;
  int *piVar5;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  multiset<int,std::less<int>,std::allocator<int>> local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::multiset<int,std::less<int>,std::allocator<int>>::multiset();
  local_60._0_4_ = 4;
                    /* try { // try from 00101346 to 00101683 has its CatchHandler @ 001016a8 */
  std::multiset<int,std::less<int>,std::allocator<int>>::insert(local_58,(int *)&local_60);
  local_60._0_4_ = 1;
  std::multiset<int,std::less<int>,std::allocator<int>>::insert(local_58,(int *)&local_60);
  local_60._0_4_ = 5;
  std::multiset<int,std::less<int>,std::allocator<int>>::insert(local_58,(int *)&local_60);
  local_60._0_4_ = 0x16;
  std::multiset<int,std::less<int>,std::allocator<int>>::insert(local_58,(int *)&local_60);
  local_60._0_4_ = 0x2a;
  std::multiset<int,std::less<int>,std::allocator<int>>::insert(local_58,(int *)&local_60);
  local_60 = CONCAT44(local_60._4_4_,3);
  std::multiset<int,std::less<int>,std::allocator<int>>::insert(local_58,(int *)&local_60);
  std::operator<<((basic_ostream *)std::cout,"Multi set : \n");
  std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator();
  local_70 = std::multiset<int,std::less<int>,std::allocator<int>>::begin();
  while( true ) {
    local_60 = std::multiset<int,std::less<int>,std::allocator<int>>::end();
    cVar1 = std::operator!=((_Rb_tree_const_iterator *)&local_70,
                            (_Rb_tree_const_iterator *)&local_60);
    if (cVar1 == '\0') break;
    piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                              ((_Rb_tree_const_iterator<int> *)&local_70);
    pbVar2 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
    std::operator<<(pbVar2," ");
    std::_Rb_tree_const_iterator<int>::operator++((_Rb_tree_const_iterator<int> *)&local_70,0);
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Deleting 5 from the multi set...!");
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar2,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_60 = CONCAT44(local_60._4_4_,5);
  std::multiset<int,std::less<int>,std::allocator<int>>::erase(local_58,(int *)&local_60);
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Finding 5 in the multi set...!");
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)pbVar2,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_60 = std::multiset<int,std::less<int>,std::allocator<int>>::end();
  local_74 = 5;
  local_68 = std::multiset<int,std::less<int>,std::allocator<int>>::find(local_58,&local_74);
  cVar1 = std::operator!=((_Rb_tree_const_iterator *)&local_68,(_Rb_tree_const_iterator *)&local_60)
  ;
  if (cVar1 == '\0') {
    pbVar2 = std::operator<<((basic_ostream *)std::cout,"Element not found!!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar2,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  else {
    pbVar2 = std::operator<<((basic_ostream *)std::cout,"Element found!");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar2,
               (_func_basic_ostream_ptr_basic_ostream_ptr *)
               PTR_endl<char,std_char_traits<char>>_00106fd0);
  }
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Size of the multi set : ");
  uVar3 = std::multiset<int,std::less<int>,std::allocator<int>>::size();
  pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar2,uVar3);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00106fd0);
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"Count of 3 : ");
  local_60 = CONCAT44(local_60._4_4_,3);
  uVar3 = std::multiset<int,std::less<int>,std::allocator<int>>::count(local_58,(int *)&local_60);
  pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar2,uVar3);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00106fd0);
  local_70 = std::multiset<int,std::less<int>,std::allocator<int>>::begin();
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"First element : ");
  piVar5 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                            ((_Rb_tree_const_iterator<int> *)&local_70);
  pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar2,*piVar5);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00106fd0);
  std::multiset<int,std::less<int>,std::allocator<int>>::~multiset(local_58);
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



/* std::_Rb_tree_header::_Rb_tree_header() */

void __thiscall std::_Rb_tree_header::_Rb_tree_header(_Rb_tree_header *this)

{
  *(undefined4 *)this = 0;
  _M_reset();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_header::_M_reset() */

void std::_Rb_tree_header::_M_reset(void)

{
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  *(long *)(in_RDI + 0x10) = in_RDI;
  *(long *)(in_RDI + 0x18) = in_RDI;
  *(undefined8 *)(in_RDI + 0x20) = 0;
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_Rb_tree_impl<std::less<int>, true>::~_Rb_tree_impl() */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::
_Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl(_Rb_tree_impl<std::less<int>,true> *this)

{
  allocator<std::_Rb_tree_node<int>>::~allocator((allocator<std::_Rb_tree_node<int>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_Rb_tree() */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Rb_tree(void)

{
  _Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multiset<int, std::less<int>, std::allocator<int> >::multiset() */

void std::multiset<int,std::less<int>,std::allocator<int>>::multiset(void)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Rb_tree();
  return;
}



/* std::multiset<int, std::less<int>, std::allocator<int> >::~multiset() */

void __thiscall
std::multiset<int,std::less<int>,std::allocator<int>>::~multiset
          (multiset<int,std::less<int>,std::allocator<int>> *this)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::~_Rb_tree
            ((_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int>(std::remove_reference<int>::type&) */

int * std::forward<int>(type *param_1)

{
  return (int *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_Rb_tree_impl<std::less<int>, true>::_Rb_tree_impl() */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::
     _Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl(void)

{
  long in_RDI;
  
  allocator<std::_Rb_tree_node<int>>::allocator();
  _Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare();
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(in_RDI + 8));
  return;
}



/* std::allocator<std::_Rb_tree_node<int> >::~allocator() */

void __thiscall
std::allocator<std::_Rb_tree_node<int>>::~allocator(allocator<std::_Rb_tree_node<int>> *this)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::~new_allocator
            ((new_allocator<std::_Rb_tree_node<int>> *)this);
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::~_Rb_tree()
    */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::~_Rb_tree
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)_M_begin();
  _M_erase(this,p_Var1);
  _Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl((_Rb_tree_impl<std::less<int>,true> *)this);
  return;
}



/* std::multiset<int, std::less<int>, std::allocator<int> >::insert(int&&) */

undefined8 __thiscall
std::multiset<int,std::less<int>,std::allocator<int>>::insert
          (multiset<int,std::less<int>,std::allocator<int>> *this,int *param_1)

{
  _Rb_tree_iterator _Var1;
  int *piVar2;
  undefined4 extraout_var;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)move<int&>(param_1);
  _Var1 = _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::
          _M_insert_equal<int>
                    ((_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *)
                     this,piVar2);
  local_30 = CONCAT44(extraout_var,_Var1);
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_28,(_Rb_tree_iterator *)&local_30);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator() */

void std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multiset<int, std::less<int>, std::allocator<int> >::begin() const */

void std::multiset<int,std::less<int>,std::allocator<int>>::begin(void)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::begin();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multiset<int, std::less<int>, std::allocator<int> >::end() const */

void std::multiset<int,std::less<int>,std::allocator<int>>::end(void)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::end();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_const_iterator<int> const&,
   std::_Rb_tree_const_iterator<int> const&) */

undefined8 std::operator!=(_Rb_tree_const_iterator *param_1,_Rb_tree_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}



/* std::_Rb_tree_const_iterator<int>::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall
std::_Rb_tree_const_iterator<int>::operator++(_Rb_tree_const_iterator<int> *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)this;
  uVar3 = std::_Rb_tree_increment(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar3;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* std::_Rb_tree_const_iterator<int>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_Rb_tree_const_iterator<int>::operator*(_Rb_tree_const_iterator<int> *this)

{
  _Rb_tree_node<int>::_M_valptr();
  return;
}



/* std::multiset<int, std::less<int>, std::allocator<int> >::erase(int const&) */

void __thiscall
std::multiset<int,std::less<int>,std::allocator<int>>::erase
          (multiset<int,std::less<int>,std::allocator<int>> *this,int *param_1)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::erase
            ((_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *)this,
             param_1);
  return;
}



/* std::multiset<int, std::less<int>, std::allocator<int> >::find(int const&) */

undefined8 __thiscall
std::multiset<int,std::less<int>,std::allocator<int>>::find
          (multiset<int,std::less<int>,std::allocator<int>> *this,int *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::find
                       ((_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *)
                        this,param_1);
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_18,(_Rb_tree_iterator *)&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multiset<int, std::less<int>, std::allocator<int> >::size() const */

void std::multiset<int,std::less<int>,std::allocator<int>>::size(void)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::size();
  return;
}



/* std::multiset<int, std::less<int>, std::allocator<int> >::count(int const&) const */

void __thiscall
std::multiset<int,std::less<int>,std::allocator<int>>::count
          (multiset<int,std::less<int>,std::allocator<int>> *this,int *param_1)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::count
            ((_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *)this,
             param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_Rb_tree_node<int> >::allocator() */

void std::allocator<std::_Rb_tree_node<int>>::allocator(void)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::new_allocator();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_key_compare<std::less<int> >::_Rb_tree_key_compare() */

void std::_Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare(void)

{
  return;
}



/* __gnu_cxx::new_allocator<std::_Rb_tree_node<int> >::~new_allocator() */

void __thiscall
__gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::~new_allocator
          (new_allocator<std::_Rb_tree_node<int>> *this)

{
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_erase(std::_Rb_tree_node<int>*) */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node *local_28;
  
  local_28 = param_1;
  while (local_28 != (_Rb_tree_node *)0x0) {
    p_Var1 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_28);
    _M_erase(this,p_Var1);
    p_Var2 = (_Rb_tree_node_base *)_S_left((_Rb_tree_node_base *)local_28);
    _M_drop_node(this,local_28);
    local_28 = (_Rb_tree_node *)p_Var2;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_begin() */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_begin(void)

{
  _M_mbegin();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int&>::type&& std::move<int&>(int&) */

type * std::move<int&>(int *param_1)

{
  return (type *)param_1;
}



/* std::_Rb_tree_iterator<int> std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   std::allocator<int> >::_M_insert_equal<int>(int&&) */

_Rb_tree_iterator __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_insert_equal<int>
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  _Rb_tree_iterator _Var1;
  int *piVar2;
  long in_FS_OFFSET;
  _Identity<int> local_30 [8];
  undefined local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)_Identity<int>::operator()(local_30,param_1);
  local_28._0_16_ = _M_get_insert_equal_pos(this,piVar2);
  _Alloc_node::_Alloc_node((_Alloc_node *)local_30,(_Rb_tree *)this);
  piVar2 = forward<int>((type *)param_1);
  _Var1 = _M_insert_<int,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Alloc_node>
                    (this,(_Rb_tree_node_base *)local_28._0_8_,(_Rb_tree_node_base *)local_28._8_8_,
                     piVar2,(_Alloc_node *)local_30);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var1;
}



/* std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator(std::_Rb_tree_iterator<int> const&) */

void __thiscall
std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
          (_Rb_tree_const_iterator<int> *this,_Rb_tree_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::begin() const
    */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::begin(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_18,*(_Rb_tree_node_base **)(in_RDI + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::end() const
    */

undefined8 std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::end(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_18,(_Rb_tree_node_base *)(in_RDI + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<int>::_M_valptr() const */

void std::_Rb_tree_node<int>::_M_valptr(void)

{
  __gnu_cxx::__aligned_membuf<int>::_M_ptr();
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::erase(int
   const&) */

long __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::erase
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined local_28 [8];
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _local_28 = equal_range(this,param_1);
  local_30 = size();
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_38,(_Rb_tree_iterator *)local_20);
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_40,(_Rb_tree_iterator *)local_28);
  _M_erase_aux(this,local_40,local_38);
  lVar1 = size();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_30 - lVar1;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::find(int
   const&) */

_Rb_tree_node_base * __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::find
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  char cVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node *p_Var3;
  int *piVar4;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var2 = (_Rb_tree_node_base *)_M_end();
  p_Var3 = (_Rb_tree_node *)_M_begin();
  local_30 = (_Rb_tree_node_base *)_M_lower_bound(this,p_Var3,p_Var2,param_1);
  local_28 = end();
  cVar1 = operator==((_Rb_tree_iterator *)&local_30,(_Rb_tree_iterator *)&local_28);
  if (cVar1 == '\0') {
    piVar4 = (int *)_S_key(local_30);
    cVar1 = less<int>::operator()((less<int> *)this,param_1,piVar4);
    p_Var2 = local_30;
    if (cVar1 == '\0') goto LAB_00101f0f;
  }
  p_Var2 = (_Rb_tree_node_base *)end();
LAB_00101f0f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::size() const
    */

undefined8 std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::size(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 0x28);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::count(int
   const&) const */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::count
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined auVar3 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  auVar3 = equal_range(this,param_1);
  uVar2 = distance<std::_Rb_tree_const_iterator<int>>(auVar3._0_8_,auVar3._8_8_);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<std::_Rb_tree_node<int> >::new_allocator() */

void __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::new_allocator(void)

{
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_S_right(std::_Rb_tree_node_base*) */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_S_right
          (_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_S_left(std::_Rb_tree_node_base*) */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_S_left
          (_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_drop_node(std::_Rb_tree_node<int>*) */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_drop_node
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1)

{
  _M_destroy_node((_Rb_tree_node *)this);
  _M_put_node(this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_mbegin()
   const */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_mbegin(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 0x10);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_get_insert_equal_pos(int const&) */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::
_M_get_insert_equal_pos
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  _Rb_tree_node *local_48;
  _Rb_tree_node *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (_Rb_tree_node *)_M_begin();
  local_40 = (_Rb_tree_node *)_M_end();
  while (local_48 != (_Rb_tree_node *)0x0) {
    local_40 = local_48;
    piVar2 = (int *)_S_key(local_48);
    cVar1 = less<int>::operator()((less<int> *)this,param_1,piVar2);
    if (cVar1 == '\0') {
      local_48 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_48);
    }
    else {
      local_48 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_48);
    }
  }
  pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
  pair<std::_Rb_tree_node<int>*&,std::_Rb_tree_node_base*&,true>
            ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_48,
             (_Rb_tree_node_base **)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Identity<int>::TEMPNAMEPLACEHOLDERVALUE(int&) const */

int * __thiscall std::_Identity<int>::operator()(_Identity<int> *this,int *param_1)

{
  return param_1;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_Alloc_node::_Alloc_node(std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   std::allocator<int> >&) */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Alloc_node::
_Alloc_node(_Alloc_node *this,_Rb_tree *param_1)

{
  *(_Rb_tree **)this = param_1;
  return;
}



/* std::_Rb_tree_iterator<int> std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   std::allocator<int> >::_M_insert_<int, std::_Rb_tree<int, int, std::_Identity<int>,
   std::less<int>, std::allocator<int> >::_Alloc_node>(std::_Rb_tree_node_base*,
   std::_Rb_tree_node_base*, int&&, std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   std::allocator<int> >::_Alloc_node&) */

_Rb_tree_iterator __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::
_M_insert_<int,std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Alloc_node>
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,int *param_3,_Alloc_node *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  _Rb_tree_iterator local_30 [2];
  _Rb_tree_node *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)_M_end();
    if (param_2 != p_Var3) {
      piVar4 = (int *)_S_key(param_2);
      piVar5 = (int *)_Identity<int>::operator()((_Identity<int> *)local_30,param_3);
      cVar1 = less<int>::operator()((less<int> *)this,piVar5,piVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021d7;
      }
    }
  }
  bVar2 = true;
LAB_001021d7:
  piVar4 = forward<int>((type *)param_3);
  local_28 = _Alloc_node::operator()(param_4,piVar4);
  std::_Rb_tree_insert_and_rebalance
            (bVar2,(_Rb_tree_node_base *)local_28,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  _Rb_tree_iterator<int>::_Rb_tree_iterator
            ((_Rb_tree_iterator<int> *)local_30,(_Rb_tree_node_base *)local_28);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_30[0];
}



/* std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator(std::_Rb_tree_node_base const*) */

void __thiscall
std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
          (_Rb_tree_const_iterator<int> *this,_Rb_tree_node_base *param_1)

{
  *(_Rb_tree_node_base **)this = param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<int>::_M_ptr() const */

void __gnu_cxx::__aligned_membuf<int>::_M_ptr(void)

{
  _M_addr();
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::equal_range(int const&) */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::equal_range
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  _Rb_tree_node *local_58;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (_Rb_tree_node *)_M_begin();
  local_50 = (_Rb_tree_node_base *)_M_end();
LAB_001023f7:
  do {
    if (local_58 == (_Rb_tree_node *)0x0) {
      _Rb_tree_iterator<int>::_Rb_tree_iterator((_Rb_tree_iterator<int> *)&local_60,local_50);
      _Rb_tree_iterator<int>::_Rb_tree_iterator((_Rb_tree_iterator<int> *)&local_68,local_50);
      pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>>::
      pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>,true>
                ((pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>> *)local_38,
                 (_Rb_tree_iterator *)&local_68,(_Rb_tree_iterator *)&local_60);
LAB_00102447:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_38[0];
    }
    piVar2 = (int *)_S_key(local_58);
    cVar1 = less<int>::operator()((less<int> *)this,piVar2,param_1);
    if (cVar1 != '\0') {
      local_58 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_58);
      goto LAB_001023f7;
    }
    piVar2 = (int *)_S_key(local_58);
    cVar1 = less<int>::operator()((less<int> *)this,param_1,piVar2);
    if (cVar1 == '\0') {
      local_48 = local_58;
      local_40 = local_50;
      local_50 = (_Rb_tree_node_base *)local_58;
      local_58 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_58);
      local_48 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_48);
      local_60 = _M_upper_bound(this,local_48,local_40,param_1);
      local_68 = _M_lower_bound(this,local_58,local_50,param_1);
      pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>>::
      pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>,true>
                ((pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>> *)local_38,
                 (_Rb_tree_iterator *)&local_68,(_Rb_tree_iterator *)&local_60);
      goto LAB_00102447;
    }
    local_50 = (_Rb_tree_node_base *)local_58;
    local_58 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_58);
  } while( true );
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_erase_aux(std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>) */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase_aux
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *local_40;
  undefined8 local_30;
  _Rb_tree_const_iterator<int> local_28 [8];
  undefined8 local_20;
  _Rb_tree_const_iterator<int> local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_3;
  local_48 = param_2;
  local_40 = this;
  local_30 = begin();
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)&local_30);
  cVar2 = operator==((_Rb_tree_const_iterator *)&local_48,(_Rb_tree_const_iterator *)local_28);
  if (cVar2 != '\0') {
    local_20 = end();
    _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator(local_18,(_Rb_tree_iterator *)&local_20);
    cVar2 = operator==((_Rb_tree_const_iterator *)&local_50,(_Rb_tree_const_iterator *)local_18);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_00102509;
    }
  }
  bVar1 = false;
LAB_00102509:
  if (bVar1) {
    clear();
  }
  else {
    while( true ) {
      cVar2 = operator!=((_Rb_tree_const_iterator *)&local_48,(_Rb_tree_const_iterator *)&local_50);
      if (cVar2 == '\0') break;
      uVar3 = _Rb_tree_const_iterator<int>::operator++((_Rb_tree_const_iterator<int> *)&local_48,0);
      _M_erase_aux(local_40,uVar3);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_end() */

long std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_end(void)

{
  long in_RDI;
  
  return in_RDI + 8;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_lower_bound(std::_Rb_tree_node<int>*, std::_Rb_tree_node_base*, int const&) */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_lower_bound
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1,_Rb_tree_node_base *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node *local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_38 = param_1;
  while (local_38 != (_Rb_tree_node *)0x0) {
    piVar2 = (int *)_S_key(local_38);
    cVar1 = less<int>::operator()((less<int> *)this,piVar2,param_3);
    if (cVar1 == '\x01') {
      local_38 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_38);
    }
    else {
      local_40 = (_Rb_tree_node_base *)local_38;
      local_38 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_38);
    }
  }
  _Rb_tree_iterator<int>::_Rb_tree_iterator((_Rb_tree_iterator<int> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::end() */

undefined8 std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::end(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<int>::_Rb_tree_iterator
            ((_Rb_tree_iterator<int> *)&local_18,(_Rb_tree_node_base *)(in_RDI + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_iterator<int> const&, std::_Rb_tree_iterator<int>
   const&) */

undefined8 std::operator==(_Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_S_key(std::_Rb_tree_node_base const*) */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_S_key
               (_Rb_tree_node_base *param_1)

{
  _S_key((_Rb_tree_node *)param_1);
  return;
}



/* std::less<int>::TEMPNAMEPLACEHOLDERVALUE(int const&, int const&) const */

undefined4 __thiscall std::less<int>::operator()(less<int> *this,int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::equal_range(int const&) const */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::equal_range
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  _Rb_tree_node *local_58;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (_Rb_tree_node *)_M_begin();
  local_50 = (_Rb_tree_node_base *)_M_end();
LAB_00102855:
  do {
    if (local_58 == (_Rb_tree_node *)0x0) {
      _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<int> *)&local_60,local_50);
      _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<int> *)&local_68,local_50);
      pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>>::
      pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>,true>
                ((pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>> *)
                 local_38,(_Rb_tree_const_iterator *)&local_68,(_Rb_tree_const_iterator *)&local_60)
      ;
LAB_001028a5:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_38[0];
    }
    piVar2 = (int *)_S_key(local_58);
    cVar1 = less<int>::operator()((less<int> *)this,piVar2,param_1);
    if (cVar1 != '\0') {
      local_58 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_58);
      goto LAB_00102855;
    }
    piVar2 = (int *)_S_key(local_58);
    cVar1 = less<int>::operator()((less<int> *)this,param_1,piVar2);
    if (cVar1 == '\0') {
      local_48 = local_58;
      local_40 = local_50;
      local_50 = (_Rb_tree_node_base *)local_58;
      local_58 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_58);
      local_48 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_48);
      local_60 = _M_upper_bound(this,local_48,local_40,param_1);
      local_68 = _M_lower_bound(this,local_58,local_50,param_1);
      pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>>::
      pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>,true>
                ((pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>> *)
                 local_38,(_Rb_tree_const_iterator *)&local_68,(_Rb_tree_const_iterator *)&local_60)
      ;
      goto LAB_001028a5;
    }
    local_50 = (_Rb_tree_node_base *)local_58;
    local_58 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_58);
  } while( true );
}



/* std::iterator_traits<std::_Rb_tree_const_iterator<int> >::difference_type
   std::distance<std::_Rb_tree_const_iterator<int> >(std::_Rb_tree_const_iterator<int>,
   std::_Rb_tree_const_iterator<int>) */

void std::distance<std::_Rb_tree_const_iterator<int>>(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20[0] = param_1;
  __iterator_category<std::_Rb_tree_const_iterator<int>>((_Rb_tree_const_iterator *)local_20);
  __distance<std::_Rb_tree_const_iterator<int>>(local_20[0],param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_destroy_node(std::_Rb_tree_node<int>*) */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_destroy_node
               (_Rb_tree_node *param_1)

{
  int *piVar1;
  allocator *paVar2;
  
  piVar1 = (int *)_Rb_tree_node<int>::_M_valptr();
  paVar2 = (allocator *)_M_get_Node_allocator();
  allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::destroy<int>(paVar2,piVar1);
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_put_node(std::_Rb_tree_node<int>*) */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_put_node
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator();
  allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::deallocate(paVar1,param_1,1);
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_S_key(std::_Rb_tree_node<int> const*) */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_S_key
               (_Rb_tree_node *param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  _Identity<int> local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)_Rb_tree_node<int>::_M_valptr();
  _Identity<int>::operator()(&local_11,piVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<int>*&,
   std::_Rb_tree_node_base*&, true>(std::_Rb_tree_node<int>*&, std::_Rb_tree_node_base*&) */

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair<std::_Rb_tree_node<int>*&,std::_Rb_tree_node_base*&,true>
          (pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *this,_Rb_tree_node **param_1,
          _Rb_tree_node_base **param_2)

{
  _Rb_tree_node **pp_Var1;
  _Rb_tree_node_base **pp_Var2;
  
  pp_Var1 = forward<std::_Rb_tree_node<int>*&>((type *)param_1);
  *(_Rb_tree_node **)this = *pp_Var1;
  pp_Var2 = forward<std::_Rb_tree_node_base*&>((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var2;
  return;
}



/* std::_Rb_tree_node<int>* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   std::allocator<int> >::_Alloc_node::TEMPNAMEPLACEHOLDERVALUE(int&&) const */

_Rb_tree_node * __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_Alloc_node::
operator()(_Alloc_node *this,int *param_1)

{
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this_00;
  int *piVar1;
  _Rb_tree_node *p_Var2;
  
  this_00 = *(_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> **)this;
  piVar1 = forward<int>((type *)param_1);
  p_Var2 = _M_create_node<int>(this_00,piVar1);
  return p_Var2;
}



/* std::_Rb_tree_iterator<int>::_Rb_tree_iterator(std::_Rb_tree_node_base*) */

void __thiscall
std::_Rb_tree_iterator<int>::_Rb_tree_iterator
          (_Rb_tree_iterator<int> *this,_Rb_tree_node_base *param_1)

{
  *(_Rb_tree_node_base **)this = param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<int>::_M_addr() const */

undefined8 __gnu_cxx::__aligned_membuf<int>::_M_addr(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_upper_bound(std::_Rb_tree_node<int>*, std::_Rb_tree_node_base*, int const&) */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_upper_bound
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1,_Rb_tree_node_base *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node *local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_38 = param_1;
  while (local_38 != (_Rb_tree_node *)0x0) {
    piVar2 = (int *)_S_key(local_38);
    cVar1 = less<int>::operator()((less<int> *)this,param_3,piVar2);
    if (cVar1 == '\0') {
      local_38 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_38);
    }
    else {
      local_40 = (_Rb_tree_node_base *)local_38;
      local_38 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_38);
    }
  }
  _Rb_tree_iterator<int>::_Rb_tree_iterator((_Rb_tree_iterator<int> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* std::pair<std::_Rb_tree_iterator<int>, std::_Rb_tree_iterator<int>
   >::pair<std::_Rb_tree_iterator<int>, std::_Rb_tree_iterator<int>,
   true>(std::_Rb_tree_iterator<int>&&, std::_Rb_tree_iterator<int>&&) */

void __thiscall
std::pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>>::
pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>,true>
          (pair<std::_Rb_tree_iterator<int>,std::_Rb_tree_iterator<int>> *this,
          _Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)forward<std::_Rb_tree_iterator<int>>((type *)param_1);
  *(undefined8 *)this = *puVar1;
  puVar1 = (undefined8 *)forward<std::_Rb_tree_iterator<int>>((type *)param_2);
  *(undefined8 *)(this + 8) = *puVar1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::begin() */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::begin(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<int>::_Rb_tree_iterator
            ((_Rb_tree_iterator<int> *)&local_18,*(_Rb_tree_node_base **)(in_RDI + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_const_iterator<int> const&,
   std::_Rb_tree_const_iterator<int> const&) */

undefined8 std::operator==(_Rb_tree_const_iterator *param_1,_Rb_tree_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::clear() */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::clear(void)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *in_RDI;
  
  p_Var1 = (_Rb_tree_node *)_M_begin();
  _M_erase(in_RDI,p_Var1);
  _Rb_tree_header::_M_reset();
  return;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_erase_aux(std::_Rb_tree_const_iterator<int>) */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase_aux
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node_base *param_2)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)
           std::_Rb_tree_rebalance_for_erase(param_2,(_Rb_tree_node_base *)(this + 8));
  _M_drop_node(this,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_begin()
   const */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_begin(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 0x10);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_end()
   const */

long std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_end(void)

{
  long in_RDI;
  
  return in_RDI + 8;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_S_right(std::_Rb_tree_node_base const*) */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_S_right
          (_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_S_left(std::_Rb_tree_node_base const*) */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_S_left
          (_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_lower_bound(std::_Rb_tree_node<int> const*, std::_Rb_tree_node_base const*, int const&)
   const */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_lower_bound
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1,_Rb_tree_node_base *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node *local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_38 = param_1;
  while (local_38 != (_Rb_tree_node *)0x0) {
    piVar2 = (int *)_S_key(local_38);
    cVar1 = less<int>::operator()((less<int> *)this,piVar2,param_3);
    if (cVar1 == '\x01') {
      local_38 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_38);
    }
    else {
      local_40 = (_Rb_tree_node_base *)local_38;
      local_38 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_38);
    }
  }
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_upper_bound(std::_Rb_tree_node<int> const*, std::_Rb_tree_node_base const*, int const&)
   const */

undefined8 __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_upper_bound
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1,_Rb_tree_node_base *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node *local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_38 = param_1;
  while (local_38 != (_Rb_tree_node *)0x0) {
    piVar2 = (int *)_S_key(local_38);
    cVar1 = less<int>::operator()((less<int> *)this,param_3,piVar2);
    if (cVar1 == '\0') {
      local_38 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_38);
    }
    else {
      local_40 = (_Rb_tree_node_base *)local_38;
      local_38 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_38);
    }
  }
  _Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<int> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* std::pair<std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>
   >::pair<std::_Rb_tree_const_iterator<int>, std::_Rb_tree_const_iterator<int>,
   true>(std::_Rb_tree_const_iterator<int>&&, std::_Rb_tree_const_iterator<int>&&) */

void __thiscall
std::pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>>::
pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>,true>
          (pair<std::_Rb_tree_const_iterator<int>,std::_Rb_tree_const_iterator<int>> *this,
          _Rb_tree_const_iterator *param_1,_Rb_tree_const_iterator *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)forward<std::_Rb_tree_const_iterator<int>>((type *)param_1);
  *(undefined8 *)this = *puVar1;
  puVar1 = (undefined8 *)forward<std::_Rb_tree_const_iterator<int>>((type *)param_2);
  *(undefined8 *)(this + 8) = *puVar1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<std::_Rb_tree_const_iterator<int> >::iterator_category
   std::__iterator_category<std::_Rb_tree_const_iterator<int> >(std::_Rb_tree_const_iterator<int>
   const&) */

iterator_category
std::__iterator_category<std::_Rb_tree_const_iterator<int>>(_Rb_tree_const_iterator *param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* std::iterator_traits<std::_Rb_tree_const_iterator<int> >::difference_type
   std::__distance<std::_Rb_tree_const_iterator<int> >(std::_Rb_tree_const_iterator<int>,
   std::_Rb_tree_const_iterator<int>, std::input_iterator_tag) */

long std::__distance<std::_Rb_tree_const_iterator<int>>(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = 0;
  local_28 = param_2;
  local_20[0] = param_1;
  while( true ) {
    cVar1 = operator!=((_Rb_tree_const_iterator *)local_20,(_Rb_tree_const_iterator *)&local_28);
    if (cVar1 == '\0') break;
    _Rb_tree_const_iterator<int>::operator++((_Rb_tree_const_iterator<int> *)local_20);
    local_10 = local_10 + 1;
  }
  return local_10;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_get_Node_allocator() */

undefined8
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_get_Node_allocator
          (void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<int>::_M_valptr() */

void std::_Rb_tree_node<int>::_M_valptr(void)

{
  __gnu_cxx::__aligned_membuf<int>::_M_ptr();
  return;
}



/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<int> >
   >::destroy<int>(std::allocator<std::_Rb_tree_node<int> >&, int*) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::destroy<int>
               (allocator *param_1,int *param_2)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::destroy<int>((int *)param_1);
  return;
}



/* std::allocator_traits<std::allocator<std::_Rb_tree_node<int> >
   >::deallocate(std::allocator<std::_Rb_tree_node<int> >&, std::_Rb_tree_node<int>*, unsigned long)
    */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::deallocate
               (allocator *param_1,_Rb_tree_node *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::deallocate
            ((new_allocator<std::_Rb_tree_node<int>> *)param_1,param_2,param_3);
  return;
}



/* std::_Identity<int>::TEMPNAMEPLACEHOLDERVALUE(int const&) const */

int * __thiscall std::_Identity<int>::operator()(_Identity<int> *this,int *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<int>*&
   std::forward<std::_Rb_tree_node<int>*&>(std::remove_reference<std::_Rb_tree_node<int>*&>::type&)
    */

_Rb_tree_node ** std::forward<std::_Rb_tree_node<int>*&>(type *param_1)

{
  return (_Rb_tree_node **)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node_base*&
   std::forward<std::_Rb_tree_node_base*&>(std::remove_reference<std::_Rb_tree_node_base*&>::type&)
    */

_Rb_tree_node_base ** std::forward<std::_Rb_tree_node_base*&>(type *param_1)

{
  return (_Rb_tree_node_base **)param_1;
}



/* std::_Rb_tree_node<int>* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>,
   std::allocator<int> >::_M_create_node<int>(int&&) */

_Rb_tree_node * __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_create_node<int>
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          int *param_1)

{
  _Rb_tree_node *p_Var1;
  int *piVar2;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node();
  piVar2 = forward<int>((type *)param_1);
  _M_construct_node<int>(this,p_Var1,piVar2);
  return p_Var1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_iterator<int>&& std::forward<std::_Rb_tree_iterator<int>
   >(std::remove_reference<std::_Rb_tree_iterator<int> >::type&) */

_Rb_tree_iterator * std::forward<std::_Rb_tree_iterator<int>>(type *param_1)

{
  return (_Rb_tree_iterator *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_const_iterator<int>&& std::forward<std::_Rb_tree_const_iterator<int>
   >(std::remove_reference<std::_Rb_tree_const_iterator<int> >::type&) */

_Rb_tree_const_iterator * std::forward<std::_Rb_tree_const_iterator<int>>(type *param_1)

{
  return (_Rb_tree_const_iterator *)param_1;
}



/* std::_Rb_tree_const_iterator<int>::TEMPNAMEPLACEHOLDERVALUE() */

_Rb_tree_const_iterator<int> * __thiscall
std::_Rb_tree_const_iterator<int>::operator++(_Rb_tree_const_iterator<int> *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<int>::_M_ptr() */

void __gnu_cxx::__aligned_membuf<int>::_M_ptr(void)

{
  _M_addr();
  return;
}



/* void __gnu_cxx::new_allocator<std::_Rb_tree_node<int> >::destroy<int>(int*) */

void __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::destroy<int>(int *param_1)

{
  return;
}



/* __gnu_cxx::new_allocator<std::_Rb_tree_node<int> >::deallocate(std::_Rb_tree_node<int>*, unsigned
   long) */

void __thiscall
__gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::deallocate
          (new_allocator<std::_Rb_tree_node<int>> *this,_Rb_tree_node *param_1,ulong param_2)

{
  operator_delete(param_1,param_2 * 0x28);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >::_M_get_node()
    */

void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_get_node
               (void)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator();
  allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::allocate(paVar1,1);
  return;
}



/* void std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_construct_node<int>(std::_Rb_tree_node<int>*, int&&) */

void __thiscall
std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::
_M_construct_node<int>
          (_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>> *this,
          _Rb_tree_node *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  allocator *paVar3;
  
  operator_new(0x28,param_1);
  piVar1 = forward<int>((type *)param_2);
  piVar2 = (int *)_Rb_tree_node<int>::_M_valptr();
  paVar3 = (allocator *)_M_get_Node_allocator();
  allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::construct<int,int>
            (paVar3,piVar2,piVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<int>::_M_addr() */

undefined8 __gnu_cxx::__aligned_membuf<int>::_M_addr(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::allocator_traits<std::allocator<std::_Rb_tree_node<int> >
   >::allocate(std::allocator<std::_Rb_tree_node<int> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::allocate
               (allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::allocate((ulong)param_1,(void *)param_2);
  return;
}



/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<int> > >::construct<int,
   int>(std::allocator<std::_Rb_tree_node<int> >&, int*, int&&) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<int>>>::construct<int,int>
               (allocator *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_3);
  __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::construct<int,int>
            ((new_allocator<std::_Rb_tree_node<int>> *)param_1,param_2,piVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<std::_Rb_tree_node<int> >::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::_M_max_size(void)

{
  return 0x333333333333333;
}



/* __gnu_cxx::new_allocator<std::_Rb_tree_node<int> >::allocate(unsigned long, void const*) */

void __gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    if ((void *)0x666666666666666 < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x28);
  return;
}



/* void __gnu_cxx::new_allocator<std::_Rb_tree_node<int> >::construct<int, int>(int*, int&&) */

void __thiscall
__gnu_cxx::new_allocator<std::_Rb_tree_node<int>>::construct<int,int>
          (new_allocator<std::_Rb_tree_node<int>> *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = std::forward<int>((type *)param_2);
  iVar1 = *piVar2;
  piVar2 = (int *)operator_new(4,param_1);
  *piVar2 = iVar1;
  return;
}



void _fini(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_@GLIBCXX_3.4
                        */
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

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_@GLIBCXX_3.4 */
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

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base@GLIBCXX_3.4 */
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


