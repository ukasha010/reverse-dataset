
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

void std::_Rb_tree_insert_and_rebalance
               (bool param_1,_Rb_tree_node_base *param_2,_Rb_tree_node_base *param_3,
               _Rb_tree_node_base *param_4)

{
  (*(code *)PTR__Rb_tree_insert_and_rebalance_00105f30)();
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

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  (*(code *)PTR__Rb_tree_rebalance_for_erase_00105f50)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_00105f58)();
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
  (*(code *)PTR__Rb_tree_increment_00105f98)();
  return;
}



void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00105fa0)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00105fa8)();
  return;
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
  basic_ostream *pbVar2;
  ulong uVar3;
  basic_ostream<char,std::char_traits<char>> *pbVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap();
  local_68._0_4_ = 0x1e;
  local_70._0_4_ = 1;
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
                    /* try { // try from 001013e4 to 00101a2d has its CatchHandler @ 00101a52 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  local_68._0_4_ = 0x28;
  local_70._0_4_ = 2;
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  local_68._0_4_ = 0x46;
  local_70._0_4_ = 5;
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  local_68._0_4_ = 10;
  local_70._0_4_ = 2;
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  local_68._0_4_ = 0x5a;
  local_70._0_4_ = 5;
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  local_68._0_4_ = 0;
  local_70._0_4_ = 4;
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  local_68 = CONCAT44(local_68._4_4_,0x50);
  local_70 = CONCAT44(local_70._4_4_,3);
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator();
  std::operator<<((basic_ostream *)std::cout,"Multimap :\n");
  local_80 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin()
  ;
  while( true ) {
    local_60 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end()
    ;
    cVar1 = std::operator!=((_Rb_tree_iterator *)&local_80,(_Rb_tree_iterator *)&local_60);
    if (cVar1 == '\0') break;
    piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80);
    pbVar2 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
    pbVar2 = std::operator<<(pbVar2," : ");
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80);
    pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)pbVar2,*(int *)(lVar6 + 4));
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                      PTR_endl<char,std_char_traits<char>>_00105fd0);
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80,0);
  }
  local_68._0_4_ = 100;
  local_70 = local_70 & 0xffffffff00000000;
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  local_68 = CONCAT44(local_68._4_4_,0x50);
  local_70 = CONCAT44(local_70._4_4_,4);
  std::pair<int,int>::pair<int,int,true>
            ((pair<int,int> *)&local_60,(int *)&local_70,(int *)&local_68);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
  insert<std::pair<int,int>>(local_58,(pair *)&local_60);
  std::operator<<((basic_ostream *)std::cout,"\nUpdated Multimap :\n");
  local_80 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin()
  ;
  while( true ) {
    local_60 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end()
    ;
    cVar1 = std::operator!=((_Rb_tree_iterator *)&local_80,(_Rb_tree_iterator *)&local_60);
    if (cVar1 == '\0') break;
    piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80);
    pbVar2 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
    pbVar2 = std::operator<<(pbVar2," : ");
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80);
    pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)pbVar2,*(int *)(lVar6 + 4));
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                      PTR_endl<char,std_char_traits<char>>_00105fd0);
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80,0);
  }
  pbVar2 = std::operator<<((basic_ostream *)std::cout,"\nSize of the multi map : ");
  uVar3 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size();
  pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar2,uVar3);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00105fd0);
  local_84 = 3;
  local_70 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                       (local_58,&local_84);
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_60,
             (_Rb_tree_iterator *)&local_70);
  local_78 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin()
  ;
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_68,
             (_Rb_tree_iterator *)&local_78);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
            (local_58,(_Rb_tree_const_iterator)local_68,(_Rb_tree_const_iterator)local_60);
  std::operator<<((basic_ostream *)std::cout,"\nUpdated Multimap :\n");
  local_80 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin()
  ;
  while( true ) {
    local_60 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end()
    ;
    cVar1 = std::operator!=((_Rb_tree_iterator *)&local_80,(_Rb_tree_iterator *)&local_60);
    if (cVar1 == '\0') break;
    piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80);
    pbVar2 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
    pbVar2 = std::operator<<(pbVar2," : ");
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80);
    pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)pbVar2,*(int *)(lVar6 + 4));
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                      PTR_endl<char,std_char_traits<char>>_00105fd0);
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_80,0);
  }
  std::operator<<((basic_ostream *)std::cout,"\n\nUpper bound:\n");
  local_78._0_4_ = 4;
  local_68 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
             upper_bound(local_58,(int *)&local_78);
  piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_68);
  pbVar2 = (basic_ostream *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
  pbVar2 = std::operator<<(pbVar2," : ");
  local_70._0_4_ = 4;
  local_60 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
             upper_bound(local_58,(int *)&local_70);
  lVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_60);
  pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar2,*(int *)(lVar6 + 4));
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00105fd0);
  std::operator<<((basic_ostream *)std::cout,"\nLower Bound:\n");
  local_78 = CONCAT44(local_78._4_4_,4);
  local_68 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
             lower_bound(local_58,(int *)&local_78);
  piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_68);
  pbVar2 = (basic_ostream *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)std::cout,*piVar5);
  pbVar2 = std::operator<<(pbVar2," : ");
  local_70 = CONCAT44(local_70._4_4_,4);
  local_60 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
             lower_bound(local_58,(int *)&local_70);
  lVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_60);
  pbVar4 = (basic_ostream<char,std::char_traits<char>> *)
           std::basic_ostream<char,std::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::char_traits<char>> *)pbVar2,*(int *)(lVar6 + 4));
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (pbVar4,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                    PTR_endl<char,std_char_traits<char>>_00105fd0);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            (local_58);
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



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree_impl<std::less<int>,
   true>::~_Rb_tree_impl() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl(_Rb_tree_impl<std::less<int>,true> *this)

{
  allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~allocator
            ((allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree() */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_Rb_tree(void)

{
  _Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::multimap()
    */

void std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap(void)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::_Rb_tree();
  return;
}



/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::~multimap()
    */

void __thiscall
std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
          (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::~_Rb_tree((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               *)this);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int>(std::remove_reference<int>::type&) */

int * std::forward<int>(type *param_1)

{
  return (int *)param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree_impl<std::less<int>,
   true>::_Rb_tree_impl() */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl(void)

{
  long in_RDI;
  
  allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocator();
  _Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare();
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(in_RDI + 8));
  return;
}



/* std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >::~allocator() */

void __thiscall
std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~allocator
          (allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~new_allocator
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)this);
  return;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::~_Rb_tree() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::~_Rb_tree(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
            *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)_M_begin();
  _M_erase(this,p_Var1);
  _Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl((_Rb_tree_impl<std::less<int>,true> *)this);
  return;
}



/* std::pair<int, int>::pair<int, int, true>(int&&, int&&) */

void __thiscall
std::pair<int,int>::pair<int,int,true>(pair<int,int> *this,int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_1);
  *(int *)this = *piVar1;
  piVar1 = forward<int>((type *)param_2);
  *(int *)(this + 4) = *piVar1;
  return;
}



/* std::enable_if<std::is_constructible<std::pair<int const, int>, std::pair<int, int> >::value,
   std::_Rb_tree_iterator<std::pair<int const, int> > >::type std::multimap<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >::insert<std::pair<int, int>
   >(std::pair<int, int>&&) */

type __thiscall
std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
insert<std::pair<int,int>>
          (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,
          pair *param_1)

{
  type tVar1;
  pair *ppVar2;
  
  ppVar2 = forward<std::pair<int,int>>((type *)param_1);
  tVar1 = _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
          ::_M_emplace_equal<std::pair<int,int>>
                    ((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                      *)this,ppVar2);
  return tVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_iterator<std::pair<int const, int> >::_Rb_tree_iterator() */

void std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator(void)

{
  undefined8 *in_RDI;
  
  *in_RDI = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::begin() */

void std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(void)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::begin();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::end() */

void std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(void)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::end();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_iterator<std::pair<int const, int> > const&,
   std::_Rb_tree_iterator<std::pair<int const, int> > const&) */

undefined8 std::operator!=(_Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}



/* std::_Rb_tree_iterator<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall
std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
          (_Rb_tree_iterator<std::pair<int_const,int>> *this,int param_1)

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



/* std::_Rb_tree_iterator<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
          (_Rb_tree_iterator<std::pair<int_const,int>> *this)

{
  _Rb_tree_node<std::pair<int_const,int>>::_M_valptr();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::size()
   const */

void std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size(void)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::size();
  return;
}



/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::find(int
   const&) */

void __thiscall
std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
          (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,
          int *param_1)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::find((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
          *)this,param_1);
  return;
}



/* std::_Rb_tree_const_iterator<std::pair<int const, int>
   >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, int> > const&) */

void __thiscall
std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
          (_Rb_tree_const_iterator<std::pair<int_const,int>> *this,_Rb_tree_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> >
   >::erase(std::_Rb_tree_const_iterator<std::pair<int const, int> >,
   std::_Rb_tree_const_iterator<std::pair<int const, int> >) */

void __thiscall
std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
          (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,
          _Rb_tree_const_iterator param_1,_Rb_tree_const_iterator param_2)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::erase_abi_cxx11_((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                      *)this,param_1,param_2);
  return;
}



/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> >
   >::upper_bound(int const&) */

void __thiscall
std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
          (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,
          int *param_1)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::upper_bound((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 *)this,param_1);
  return;
}



/* std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> >
   >::lower_bound(int const&) */

void __thiscall
std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::lower_bound
          (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,
          int *param_1)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::lower_bound((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 *)this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >::allocator() */

void std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocator(void)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::new_allocator();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_key_compare<std::less<int> >::_Rb_tree_key_compare() */

void std::_Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare(void)

{
  return;
}



/* __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::~new_allocator() */

void __thiscall
__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~new_allocator
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this)

{
  return;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_node *param_1)

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
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_begin() */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_M_begin(void)

{
  _M_mbegin();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::pair<int, int>&& std::forward<std::pair<int, int> >(std::remove_reference<std::pair<int,
   int> >::type&) */

pair * std::forward<std::pair<int,int>>(type *param_1)

{
  return (pair *)param_1;
}



/* std::_Rb_tree_iterator<std::pair<int const, int> > std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_emplace_equal<std::pair<int, int> >(std::pair<int, int>&&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_emplace_equal<std::pair<int,int>>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,type *param_1)

{
  pair *ppVar1;
  _Rb_tree_node *p_Var2;
  int *piVar3;
  undefined auVar4 [16];
  
  ppVar1 = forward<std::pair<int,int>>(param_1);
  p_Var2 = _M_create_node<std::pair<int,int>>(this,ppVar1);
                    /* try { // try from 00102014 to 0010204a has its CatchHandler @ 0010204d */
  piVar3 = (int *)_S_key(p_Var2);
  auVar4 = _M_get_insert_equal_pos(this,piVar3);
  _M_insert_node(this,auVar4._0_8_,auVar4._8_8_,p_Var2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::begin() */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::begin(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,
             *(_Rb_tree_node_base **)(in_RDI + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::end() */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::end(void)

{
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,
             (_Rb_tree_node_base *)(in_RDI + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<std::pair<int const, int> >::_M_valptr() */

void std::_Rb_tree_node<std::pair<int_const,int>>::_M_valptr(void)

{
  __gnu_cxx::__aligned_membuf<std::pair<int_const,int>>::_M_ptr();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::size() const */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::size(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 0x28);
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::find(int const&) */

_Rb_tree_node_base * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::find(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
       *this,int *param_1)

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
    if (cVar1 == '\0') goto LAB_00102221;
  }
  p_Var2 = (_Rb_tree_node_base *)end();
LAB_00102221:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::erase[abi:cxx11](std::_Rb_tree_const_iterator<std::pair<int const, int> >,
   std::_Rb_tree_const_iterator<std::pair<int const, int> >) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::erase_abi_cxx11_(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                   *this,_Rb_tree_const_iterator param_1,_Rb_tree_const_iterator param_2)

{
  _M_erase_aux(this,param_1,param_2);
  _Rb_tree_const_iterator<std::pair<int_const,int>>::_M_const_cast();
  return;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::upper_bound(int const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::upper_bound(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *this,int *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end();
  p_Var2 = (_Rb_tree_node *)_M_begin();
  _M_upper_bound(this,p_Var2,p_Var1,param_1);
  return;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::lower_bound(int const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::lower_bound(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *this,int *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end();
  p_Var2 = (_Rb_tree_node *)_M_begin();
  _M_lower_bound(this,p_Var2,p_Var1,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::new_allocator() */

void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::new_allocator(void)

{
  return;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_right(std::_Rb_tree_node_base*)
    */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_S_right(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_left(std::_Rb_tree_node_base*)
    */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_S_left(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_drop_node(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_drop_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               *this,_Rb_tree_node *param_1)

{
  _M_destroy_node((_Rb_tree_node *)this);
  _M_put_node(this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_mbegin() const */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_mbegin(void)

{
  long in_RDI;
  
  return *(undefined8 *)(in_RDI + 0x10);
}



/* std::_Rb_tree_node<std::pair<int const, int> >* std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_create_node<std::pair<int, int> >(std::pair<int, int>&&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_create_node<std::pair<int,int>>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,pair *param_1)

{
  _Rb_tree_node *p_Var1;
  pair *ppVar2;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node();
  ppVar2 = forward<std::pair<int,int>>((type *)param_1);
  _M_construct_node<std::pair<int,int>>(this,p_Var1,ppVar2);
  return p_Var1;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_insert_equal_pos(int const&)
    */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_get_insert_equal_pos
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,int *param_1)

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
  pair<std::_Rb_tree_node<std::pair<int_const,int>>*&,std::_Rb_tree_node_base*&,true>
            ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_48,
             (_Rb_tree_node_base **)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_S_key(std::_Rb_tree_node<std::pair<int const, int> > const*) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_S_key(_Rb_tree_node *param_1)

{
  pair *ppVar1;
  long in_FS_OFFSET;
  _Select1st<std::pair<int_const,int>> local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr();
  _Select1st<std::pair<int_const,int>>::operator()(&local_11,ppVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_insert_node(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*,
   std::_Rb_tree_node<std::pair<int const, int> >*) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_insert_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
                _Rb_tree_node *param_3)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)_M_end();
    if (param_2 != p_Var3) {
      piVar4 = (int *)_S_key(param_2);
      piVar5 = (int *)_S_key(param_3);
      cVar1 = less<int>::operator()((less<int> *)this,piVar5,piVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001025a2;
      }
    }
  }
  bVar2 = true;
LAB_001025a2:
  std::_Rb_tree_insert_and_rebalance
            (bVar2,(_Rb_tree_node_base *)param_3,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_28,(_Rb_tree_node_base *)param_3)
  ;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* std::_Rb_tree_iterator<std::pair<int const, int> >::_Rb_tree_iterator(std::_Rb_tree_node_base*)
    */

void __thiscall
std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
          (_Rb_tree_iterator<std::pair<int_const,int>> *this,_Rb_tree_node_base *param_1)

{
  *(_Rb_tree_node_base **)this = param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<std::pair<int const, int> >::_M_ptr() */

void __gnu_cxx::__aligned_membuf<std::pair<int_const,int>>::_M_ptr(void)

{
  _M_addr();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_end() */

long std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_M_end(void)

{
  long in_RDI;
  
  return in_RDI + 8;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_lower_bound(std::_Rb_tree_node<std::pair<int const, int> >*, std::_Rb_tree_node_base*, int
   const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_lower_bound(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,int *param_3)

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
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_iterator<std::pair<int const, int> > const&,
   std::_Rb_tree_iterator<std::pair<int const, int> > const&) */

undefined8 std::operator==(_Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_key(std::_Rb_tree_node_base
   const*) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_S_key(_Rb_tree_node_base *param_1)

{
  _S_key((_Rb_tree_node *)param_1);
  return;
}



/* std::less<int>::TEMPNAMEPLACEHOLDERVALUE(int const&, int const&) const */

undefined4 __thiscall std::less<int>::operator()(less<int> *this,int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<int const, int> >,
   std::_Rb_tree_const_iterator<std::pair<int const, int> >) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_erase_aux(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               *this,_Rb_tree_const_iterator param_1,_Rb_tree_const_iterator param_2)

{
  bool bVar1;
  char cVar2;
  _Rb_tree_const_iterator _Var3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  *local_40;
  undefined8 local_30;
  _Rb_tree_const_iterator local_28 [2];
  undefined8 local_20;
  _Rb_tree_const_iterator local_18 [2];
  long local_10;
  
  local_48 = CONCAT44(in_register_00000034,param_1);
  local_50 = CONCAT44(in_register_00000014,param_2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = this;
  local_30 = begin();
  _Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_28,
             (_Rb_tree_iterator *)&local_30);
  cVar2 = operator==((_Rb_tree_const_iterator *)&local_48,local_28);
  if (cVar2 != '\0') {
    local_20 = end();
    _Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_18,
               (_Rb_tree_iterator *)&local_20);
    cVar2 = operator==((_Rb_tree_const_iterator *)&local_50,local_18);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_00102829;
    }
  }
  bVar1 = false;
LAB_00102829:
  if (bVar1) {
    clear();
  }
  else {
    while( true ) {
      cVar2 = operator!=((_Rb_tree_const_iterator *)&local_48,(_Rb_tree_const_iterator *)&local_50);
      if (cVar2 == '\0') break;
      _Var3 = _Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                        ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_48,0);
      _M_erase_aux(local_40,_Var3);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_const_iterator<std::pair<int const, int> >::_M_const_cast() const */

undefined8 std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_M_const_cast(void)

{
  _Rb_tree_node_base **in_RDI;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,*in_RDI);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_upper_bound(std::_Rb_tree_node<std::pair<int const, int> >*, std::_Rb_tree_node_base*, int
   const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_upper_bound(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,int *param_3)

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
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_destroy_node(std::_Rb_tree_node<std::pair<int const, int> >*) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_M_destroy_node(_Rb_tree_node *param_1)

{
  pair *ppVar1;
  allocator *paVar2;
  
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr();
  paVar2 = (allocator *)_M_get_Node_allocator();
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
  destroy<std::pair<int_const,int>>(paVar2,ppVar1);
  return;
}



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_put_node(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_put_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *this,_Rb_tree_node *param_1)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator();
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::deallocate
            (paVar1,param_1,1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_node() */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_M_get_node(void)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator();
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::allocate(paVar1,1)
  ;
  return;
}



/* void std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_construct_node<std::pair<int,
   int> >(std::_Rb_tree_node<std::pair<int const, int> >*, std::pair<int, int>&&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_construct_node<std::pair<int,int>>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_node *param_1,pair *param_2)

{
  pair *ppVar1;
  pair *ppVar2;
  allocator *paVar3;
  
  operator_new(0x28,param_1);
  ppVar1 = forward<std::pair<int,int>>((type *)param_2);
  ppVar2 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr();
  paVar3 = (allocator *)_M_get_Node_allocator();
                    /* try { // try from 00102a99 to 00102a9d has its CatchHandler @ 00102aa0 */
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
  construct<std::pair<int_const,int>,std::pair<int,int>>(paVar3,ppVar2,ppVar1);
  return;
}



/* std::pair<std::_Rb_tree_node_base*,
   std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<std::pair<int const, int> >*&,
   std::_Rb_tree_node_base*&, true>(std::_Rb_tree_node<std::pair<int const, int> >*&,
   std::_Rb_tree_node_base*&) */

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair<std::_Rb_tree_node<std::pair<int_const,int>>*&,std::_Rb_tree_node_base*&,true>
          (pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *this,_Rb_tree_node **param_1,
          _Rb_tree_node_base **param_2)

{
  _Rb_tree_node **pp_Var1;
  _Rb_tree_node_base **pp_Var2;
  
  pp_Var1 = forward<std::_Rb_tree_node<std::pair<int_const,int>>*&>((type *)param_1);
  *(_Rb_tree_node **)this = *pp_Var1;
  pp_Var2 = forward<std::_Rb_tree_node_base*&>((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var2;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<std::pair<int const, int> >::_M_valptr() const */

void std::_Rb_tree_node<std::pair<int_const,int>>::_M_valptr(void)

{
  __gnu_cxx::__aligned_membuf<std::pair<int_const,int>>::_M_ptr();
  return;
}



/* std::_Select1st<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE(std::pair<int const, int>
   const&) const */

pair * __thiscall
std::_Select1st<std::pair<int_const,int>>::operator()
          (_Select1st<std::pair<int_const,int>> *this,pair *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<std::pair<int const, int> >::_M_addr() */

undefined8 __gnu_cxx::__aligned_membuf<std::pair<int_const,int>>::_M_addr(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_const_iterator<std::pair<int const, int> > const&,
   std::_Rb_tree_const_iterator<std::pair<int const, int> > const&) */

undefined8 std::operator==(_Rb_tree_const_iterator *param_1,_Rb_tree_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::clear() */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::clear(void)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  *in_RDI;
  
  p_Var1 = (_Rb_tree_node *)_M_begin();
  _M_erase(in_RDI,p_Var1);
  _Rb_tree_header::_M_reset();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_const_iterator<std::pair<int const, int> > const&,
   std::_Rb_tree_const_iterator<std::pair<int const, int> > const&) */

undefined8 std::operator!=(_Rb_tree_const_iterator *param_1,_Rb_tree_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}



/* std::_Rb_tree_const_iterator<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall
std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
          (_Rb_tree_const_iterator<std::pair<int_const,int>> *this,int param_1)

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



/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<int const, int> >) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_erase_aux(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               *this,_Rb_tree_const_iterator param_1)

{
  _Rb_tree_node *p_Var1;
  undefined4 in_register_00000034;
  
  p_Var1 = (_Rb_tree_node *)
           std::_Rb_tree_rebalance_for_erase
                     ((_Rb_tree_node_base *)CONCAT44(in_register_00000034,param_1),
                      (_Rb_tree_node_base *)(this + 8));
  _M_drop_node(this,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_Node_allocator() */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_get_Node_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::destroy<std::pair<int const, int> >(std::allocator<std::_Rb_tree_node<std::pair<int const,
   int> > >&, std::pair<int const, int>*) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
     destroy<std::pair<int_const,int>>(allocator *param_1,pair *param_2)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
  destroy<std::pair<int_const,int>>((pair *)param_1);
  return;
}



/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::deallocate(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >&,
   std::_Rb_tree_node<std::pair<int const, int> >*, unsigned long) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::deallocate
               (allocator *param_1,_Rb_tree_node *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::deallocate
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)param_1,param_2,param_3)
  ;
  return;
}



/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::allocate(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::allocate
               (allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocate
            ((ulong)param_1,(void *)param_2);
  return;
}



/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::construct<std::pair<int const, int>, std::pair<int, int>
   >(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >&, std::pair<int const, int>*,
   std::pair<int, int>&&) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
     construct<std::pair<int_const,int>,std::pair<int,int>>
               (allocator *param_1,pair *param_2,pair *param_3)

{
  pair *ppVar1;
  
  ppVar1 = forward<std::pair<int,int>>((type *)param_3);
  __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
  construct<std::pair<int_const,int>,std::pair<int,int>>
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)param_1,param_2,ppVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<std::pair<int const, int> >*& std::forward<std::_Rb_tree_node<std::pair<int
   const, int> >*&>(std::remove_reference<std::_Rb_tree_node<std::pair<int const, int> >*&>::type&)
    */

_Rb_tree_node ** std::forward<std::_Rb_tree_node<std::pair<int_const,int>>*&>(type *param_1)

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<std::pair<int const, int> >::_M_ptr() const */

void __gnu_cxx::__aligned_membuf<std::pair<int_const,int>>::_M_ptr(void)

{
  _M_addr();
  return;
}



/* void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int const, int> >
   >::destroy<std::pair<int const, int> >(std::pair<int const, int>*) */

void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
     destroy<std::pair<int_const,int>>(pair *param_1)

{
  return;
}



/* __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int const, int> >
   >::deallocate(std::_Rb_tree_node<std::pair<int const, int> >*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::deallocate
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this,_Rb_tree_node *param_1,
          ulong param_2)

{
  operator_delete(param_1,param_2 * 0x28);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::_M_max_size() const */

undefined8 __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::_M_max_size(void)

{
  return 0x333333333333333;
}



/* __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::allocate(unsigned
   long, void const*) */

void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocate
               (ulong param_1,void *param_2)

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



/* void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int const, int> >
   >::construct<std::pair<int const, int>, std::pair<int, int> >(std::pair<int const, int>*,
   std::pair<int, int>&&) */

void __thiscall
__gnu_cxx::new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
construct<std::pair<int_const,int>,std::pair<int,int>>
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this,pair *param_1,
          pair *param_2)

{
  pair *ppVar1;
  pair<int_const,int> *this_00;
  
  ppVar1 = std::forward<std::pair<int,int>>((type *)param_2);
  this_00 = (pair<int_const,int> *)operator_new(8,param_1);
  std::pair<int_const,int>::pair<int,int,true>(this_00,ppVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__aligned_membuf<std::pair<int const, int> >::_M_addr() const */

undefined8 __gnu_cxx::__aligned_membuf<std::pair<int_const,int>>::_M_addr(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* std::pair<int const, int>::pair<int, int, true>(std::pair<int, int>&&) */

void __thiscall
std::pair<int_const,int>::pair<int,int,true>(pair<int_const,int> *this,pair *param_1)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_1);
  *(int *)this = *piVar1;
  piVar1 = forward<int>((type *)(param_1 + 4));
  *(int *)(this + 4) = *piVar1;
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

void std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_@GLIBCXX_3.4 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Rb_tree_increment(_Rb_tree_node_base *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base@GLIBCXX_3.4 */
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


