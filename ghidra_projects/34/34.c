
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
  (*(code *)PTR_00107f10)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00107fc8)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00107f18)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00107f20)();
  return;
}



void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00107f28)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00107f30)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00107f38)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00107f40)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00107f48)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00107f50)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00107f58)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00107f60)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00107f68)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00107f70)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00107f78)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00107f80)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00107f88)();
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00107fb0)();
  return;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00107fb8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00107fc0)();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00107fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

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
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  basic_ostream *pbVar5;
  long in_FS_OFFSET;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  __normal_iterator local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  vector<char,std::allocator<char>> local_68 [32];
  allocator local_48 [28];
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    /* try { // try from 00101426 to 0010142a has its CatchHandler @ 0010184a */
  std::vector<char,std::allocator<char>>::vector(local_68,5,local_48);
  std::allocator<char>::~allocator((allocator<char> *)local_48);
  std::vector<char,std::allocator<char>>::vector();
  local_2c = 0x6f77206f6c6c6568;
  local_24 = 0x646c72;
  local_9c = 0;
  while( true ) {
    uVar1 = std::vector<char,std::allocator<char>>::size();
    if (uVar1 <= (ulong)(long)local_9c) break;
    pcVar4 = (char *)std::vector<char,std::allocator<char>>::operator[](local_68,(long)local_9c);
    *pcVar4 = (char)local_9c + 'a';
    local_9c = local_9c + 1;
  }
  for (local_98 = 0; *(char *)((long)&local_2c + (long)local_98) != '\0'; local_98 = local_98 + 1) {
                    /* try { // try from 001014d4 to 0010181b has its CatchHandler @ 00101868 */
    std::vector<char,std::allocator<char>>::push_back
              ((vector<char,std::allocator<char>> *)local_48,
               (char *)((long)&local_2c + (long)local_98));
  }
  std::operator<<((basic_ostream *)std::cout,"Vector v : ");
  local_94 = 0;
  while( true ) {
    uVar1 = std::vector<char,std::allocator<char>>::size();
    if (uVar1 <= (ulong)(long)local_94) break;
    pcVar4 = (char *)std::vector<char,std::allocator<char>>::operator[](local_68,(long)local_94);
    pbVar5 = std::operator<<((basic_ostream *)std::cout,*pcVar4);
    std::operator<<(pbVar5," ");
    local_94 = local_94 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  local_88 = std::vector<char,std::allocator<char>>::begin();
  local_88 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                       ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_88
                        ,2);
  local_78 = (__normal_iterator)0x58;
  __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::
  __normal_iterator<char*>((__normal_iterator *)&local_70);
  std::vector<char,std::allocator<char>>::insert(local_68,local_70,5,&local_78);
  std::operator<<((basic_ostream *)std::cout,"Vector v : ");
  local_90 = 0;
  while( true ) {
    uVar1 = std::vector<char,std::allocator<char>>::size();
    if (uVar1 <= (ulong)(long)local_90) break;
    pcVar4 = (char *)std::vector<char,std::allocator<char>>::operator[](local_68,(long)local_90);
    pbVar5 = std::operator<<((basic_ostream *)std::cout,*pcVar4);
    std::operator<<(pbVar5," ");
    local_90 = local_90 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  local_88 = std::vector<char,std::allocator<char>>::begin();
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+=
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_88,2);
  local_80 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                       ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_88
                        ,5);
  __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::
  __normal_iterator<char*>((__normal_iterator *)&local_70);
  __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::
  __normal_iterator<char*>(&local_78);
  std::vector<char,std::allocator<char>>::erase(local_68,CONCAT71(uStack_77,local_78),local_70);
  local_88 = std::vector<char,std::allocator<char>>::begin();
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+=
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_88,2);
  uVar2 = std::vector<char,std::allocator<char>>::end();
  uVar3 = std::vector<char,std::allocator<char>>::begin();
  __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::
  __normal_iterator<char*>((__normal_iterator *)&local_70);
  std::vector<char,std::allocator<char>>::
  insert<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,void>
            (local_68,local_70,uVar3,uVar2);
  std::operator<<((basic_ostream *)std::cout,"Vector v : ");
  local_8c = 0;
  while( true ) {
    uVar1 = std::vector<char,std::allocator<char>>::size();
    if (uVar1 <= (ulong)(long)local_8c) break;
    pcVar4 = (char *)std::vector<char,std::allocator<char>>::operator[](local_68,(long)local_8c);
    pbVar5 = std::operator<<((basic_ostream *)std::cout,*pcVar4);
    std::operator<<(pbVar5," ");
    local_8c = local_8c + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00107fd0);
  std::vector<char,std::allocator<char>>::~vector((vector<char,std::allocator<char>> *)local_48);
  std::vector<char,std::allocator<char>>::~vector(local_68);
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
/* std::__size_to_integer(unsigned long) */

ulong std::__size_to_integer(ulong param_1)

{
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



/* std::vector<char, std::allocator<char> >::vector(unsigned long, std::allocator<char> const&) */

void __thiscall
std::vector<char,std::allocator<char>>::vector
          (vector<char,std::allocator<char>> *this,ulong param_1,allocator *param_2)

{
  ulong uVar1;
  
  uVar1 = _S_check_init_len(param_1,param_2);
  _Vector_base<char,std::allocator<char>>::_Vector_base
            ((_Vector_base<char,std::allocator<char>> *)this,uVar1,param_2);
                    /* try { // try from 001019ed to 001019f1 has its CatchHandler @ 001019f4 */
  _M_default_initialize(this,param_1);
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
/* std::vector<char, std::allocator<char> >::size() const */

long std::vector<char,std::allocator<char>>::size(void)

{
  long *in_RDI;
  
  return in_RDI[1] - *in_RDI;
}



/* std::vector<char, std::allocator<char> >::operator[](unsigned long) */

long __thiscall
std::vector<char,std::allocator<char>>::operator[]
          (vector<char,std::allocator<char>> *this,ulong param_1)

{
  return param_1 + *(long *)this;
}



/* std::vector<char, std::allocator<char> >::push_back(char const&) */

void __thiscall
std::vector<char,std::allocator<char>>::push_back
          (vector<char,std::allocator<char>> *this,char *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    uVar1 = end();
    _M_realloc_insert<char_const&>(this,uVar1,param_1);
  }
  else {
    allocator_traits<std::allocator<char>>::construct<char,char_const&>
              ((allocator *)this,*(char **)(this + 8),param_1);
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
  }
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



/* __gnu_cxx::__normal_iterator<char const*, std::vector<char, std::allocator<char> >
   >::__normal_iterator<char*>(__gnu_cxx::__normal_iterator<char*,
   __gnu_cxx::__enable_if<std::__are_same<char*, char*>::__value, std::vector<char,
   std::allocator<char> > >::__type> const&) */

void __gnu_cxx::__normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::
     __normal_iterator<char*>(__normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  *(undefined8 *)param_1 = *puVar1;
  return;
}



/* std::vector<char, std::allocator<char> >::insert(__gnu_cxx::__normal_iterator<char const*,
   std::vector<char, std::allocator<char> > >, unsigned long, char const&) */

void __thiscall
std::vector<char,std::allocator<char>>::insert
          (vector<char,std::allocator<char>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<char,std::allocator<char>> *local_30;
  undefined8 local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = this;
  local_20 = cbegin();
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_20);
  local_18 = CONCAT44(extraout_var,dVar1);
  local_20 = begin();
  uVar2 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                    ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_20,
                     local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin();
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) */

__normal_iterator<char*,std::vector<char,std::allocator<char>>> * __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+=
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,long param_1)

{
  *(long *)this = *(long *)this + param_1;
  return this;
}



/* std::vector<char, std::allocator<char> >::erase(__gnu_cxx::__normal_iterator<char const*,
   std::vector<char, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char const*,
   std::vector<char, std::allocator<char> > >) */

void __thiscall
std::vector<char,std::allocator<char>>::erase
          (vector<char,std::allocator<char>> *this,undefined8 param_2,undefined8 param_3)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined4 extraout_var_00;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  vector<char,std::allocator<char>> *local_40;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_3;
  local_48 = param_2;
  local_40 = this;
  local_30 = begin();
  local_28 = cbegin();
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_50,(__normal_iterator *)&local_28);
  uVar2 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                    ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_30,
                     CONCAT44(extraout_var,dVar1));
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)&local_28);
  uVar3 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                    ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_30,
                     CONCAT44(extraout_var_00,dVar1));
  _M_erase(local_40,uVar3,uVar2);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > > std::vector<char,
   std::allocator<char> >::insert<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, void>(__gnu_cxx::__normal_iterator<char const*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

void __thiscall
std::vector<char,std::allocator<char>>::
insert<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,void>
          (vector<char,std::allocator<char>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<char,std::allocator<char>> *local_30;
  undefined8 local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = this;
  local_20 = cbegin();
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_20);
  local_18 = CONCAT44(extraout_var,dVar1);
  local_20 = begin();
  uVar2 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                    ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_20,
                     local_18);
  _M_insert_dispatch<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            (local_30,uVar2,param_3,param_4);
  local_20 = begin();
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::vector<char, std::allocator<char> >::_S_check_init_len(unsigned long, std::allocator<char>
   const&) */

ulong std::vector<char,std::allocator<char>>::_S_check_init_len(ulong param_1,allocator *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator(&local_21);
  uVar1 = _S_max_size(&local_21);
  std::allocator<char>::~allocator((allocator<char> *)&local_21);
  if (uVar1 < param_1) {
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_base(unsigned long, std::allocator<char>
   const&) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_base
          (_Vector_base<char,std::allocator<char>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00102006 to 0010200a has its CatchHandler @ 0010200d */
  _M_create_storage(this,param_1);
  return;
}



/* std::vector<char, std::allocator<char> >::_M_default_initialize(unsigned long) */

void __thiscall
std::vector<char,std::allocator<char>>::_M_default_initialize
          (vector<char,std::allocator<char>> *this,ulong param_1)

{
  allocator *paVar1;
  char *pcVar2;
  
  paVar1 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  pcVar2 = __uninitialized_default_n_a<char*,unsigned_long,char>(*(char **)this,param_1,paVar1);
  *(char **)(this + 8) = pcVar2;
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



/* void std::allocator_traits<std::allocator<char> >::construct<char, char
   const&>(std::allocator<char>&, char*, char const&) */

void std::allocator_traits<std::allocator<char>>::construct<char,char_const&>
               (allocator *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = forward<char_const&>((type *)param_3);
  __gnu_cxx::new_allocator<char>::construct<char,char_const&>
            ((new_allocator<char> *)param_1,param_2,pcVar1);
  return;
}



/* void std::vector<char, std::allocator<char> >::_M_realloc_insert<char
   const&>(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, char
   const&) */

void std::vector<char,std::allocator<char>>::_M_realloc_insert<char_const&>
               (vector<char,std::allocator<char>> **param_1,undefined8 param_2,type *param_3,
               undefined8 param_4,allocator *param_5)

{
  difference_type dVar1;
  undefined4 extraout_var;
  char *pcVar2;
  char **ppcVar3;
  long lVar4;
  vector<char,std::allocator<char>> **ppvVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  vector<char,std::allocator<char>> **local_60;
  undefined8 local_58;
  ulong local_50;
  vector<char,std::allocator<char>> *local_48;
  vector<char,std::allocator<char>> *local_40;
  long local_38;
  vector<char,std::allocator<char>> *local_30;
  vector<char,std::allocator<char>> *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  local_50 = _M_check_len((vector<char,std::allocator<char>> *)param_1,1,"vector::_M_realloc_insert"
                         );
  local_48 = *local_60;
  local_40 = local_60[1];
  local_58 = begin();
  dVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_68,(__normal_iterator *)&local_58);
  local_38 = CONCAT44(extraout_var,dVar1);
  local_30 = (vector<char,std::allocator<char>> *)
             _Vector_base<char,std::allocator<char>>::_M_allocate
                       ((_Vector_base<char,std::allocator<char>> *)local_60,local_50);
  local_28 = local_30;
  pcVar2 = forward<char_const&>(param_3);
  allocator_traits<std::allocator<char>>::construct<char,char_const&>
            ((allocator *)local_60,(char *)(local_30 + local_38),pcVar2);
  local_28 = (vector<char,std::allocator<char>> *)0x0;
  pcVar2 = (char *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  ppcVar3 = (char **)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     base();
  lVar4 = _S_relocate(local_48,*ppcVar3,(char *)local_30,pcVar2,param_5);
  local_28 = (vector<char,std::allocator<char>> *)(lVar4 + 1);
  pcVar2 = (char *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  ppvVar5 = (vector<char,std::allocator<char>> **)
            __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  local_28 = (vector<char,std::allocator<char>> *)
             _S_relocate(*ppvVar5,(char *)local_40,(char *)local_28,pcVar2,param_5);
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



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::__normal_iterator(char* const&) */

void __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,char **param_1)

{
  *(char **)this = *param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >::base() const */

undefined8 __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::cbegin() const */

undefined8 std::vector<char,std::allocator<char>>::cbegin(void)

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



/* __gnu_cxx::__normal_iterator<char const*, std::vector<char, std::allocator<char> >
   >::difference_type __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char const*,
   std::vector<char, std::allocator<char> > > const&, __gnu_cxx::__normal_iterator<char const*,
   std::vector<char, std::allocator<char> > > const&) */

difference_type __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           __normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::base();
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)
           __normal_iterator<char_const*,std::vector<char,std::allocator<char>>>::base();
  return (int)uVar1 - (int)*puVar2;
}



/* std::vector<char, std::allocator<char> >::_M_fill_insert(__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > >, unsigned long, char const&) */

void __thiscall
std::vector<char,std::allocator<char>>::_M_fill_insert
          (vector<char,std::allocator<char>> *this,undefined8 param_2,ulong param_3,char *param_4)

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  char **ppcVar4;
  long *plVar5;
  char *pcVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  char **local_80;
  undefined8 local_78;
  char *local_70;
  ulong local_68;
  long local_60;
  char *local_58;
  char *local_50;
  ulong local_48;
  char *local_40;
  _Temporary_value local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = (char **)this;
  if (param_3 != 0) {
    if ((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) < param_3) {
      local_68 = _M_check_len(this,param_3,"vector::_M_fill_insert");
      local_78 = begin();
      dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_88,(__normal_iterator *)&local_78);
      local_60 = CONCAT44(extraout_var_00,dVar2);
      local_70 = (char *)_Vector_base<char,std::allocator<char>>::_M_allocate
                                   ((_Vector_base<char,std::allocator<char>> *)local_80,local_68);
      local_58 = local_70;
      paVar3 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
                    /* try { // try from 001026ae to 00102735 has its CatchHandler @ 001027e1 */
      __uninitialized_fill_n_a<char*,unsigned_long,char,char>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (char *)0x0;
      paVar3 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
      ppcVar4 = (char **)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                         ::base();
      local_70 = __uninitialized_move_if_noexcept_a<char*,char*,std::allocator<char>>
                           (*local_80,*ppcVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
      pcVar6 = local_80[1];
      ppcVar4 = (char **)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                         ::base();
      local_70 = __uninitialized_move_if_noexcept_a<char*,char*,std::allocator<char>>
                           (*ppcVar4,pcVar6,local_70,paVar3);
      paVar3 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
      _Destroy<char*,char>(*local_80,local_80[1],paVar3);
      _Vector_base<char,std::allocator<char>>::_M_deallocate
                ((_Vector_base<char,std::allocator<char>> *)local_80,*local_80,
                 (long)local_80[2] - (long)*local_80);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<char_const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 0010244a to 00102609 has its CatchHandler @ 001027c3 */
      local_50 = (char *)_Temporary_value::_M_val();
      local_78 = end();
      dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        paVar3 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
        __uninitialized_move_a<char*,char*,std::allocator<char>>
                  (local_80[1] + -param_3,local_80[1],local_80[1],paVar3);
        local_80[1] = local_80[1] + param_3;
        pcVar6 = local_40 + -param_3;
        ppcVar4 = (char **)__gnu_cxx::
                           __normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
        move_backward<char*,char*>(*ppcVar4,pcVar6,local_40);
        plVar5 = (long *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                         ::base();
        lVar1 = *plVar5;
        ppcVar4 = (char **)__gnu_cxx::
                           __normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
        fill<char*,char>(*ppcVar4,(char *)(lVar1 + param_3),local_50);
      }
      else {
        paVar3 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
        pcVar6 = __uninitialized_fill_n_a<char*,unsigned_long,char,char>
                           (local_80[1],param_3 - local_48,local_50,paVar3);
        local_80[1] = pcVar6;
        paVar3 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
        pcVar6 = local_80[1];
        ppcVar4 = (char **)__gnu_cxx::
                           __normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
        __uninitialized_move_a<char*,char*,std::allocator<char>>(*ppcVar4,local_40,pcVar6,paVar3);
        local_80[1] = local_80[1] + local_48;
        ppcVar4 = (char **)__gnu_cxx::
                           __normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
        fill<char*,char>(*ppcVar4,local_40,local_50);
      }
      _Temporary_value::~_Temporary_value(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::vector<char, std::allocator<char> >::_M_erase(__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

undefined8 __thiscall
std::vector<char,std::allocator<char>>::_M_erase
          (vector<char,std::allocator<char>> *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  difference_type dVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 extraout_var;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  vector<char,std::allocator<char>> *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  local_30 = this;
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_40);
  if (bVar2) {
    local_28 = end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_28);
    if (bVar2) {
      uVar4 = end();
      move<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                (local_40,uVar4,local_38);
    }
    plVar5 = (long *)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                     base();
    lVar1 = *plVar5;
    local_28 = end();
    dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_28,(__normal_iterator *)&local_40);
    _M_erase_at_end(local_30,(char *)(lVar1 + CONCAT44(extraout_var,dVar3)));
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38;
}



/* void std::vector<char, std::allocator<char>
   >::_M_insert_dispatch<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char>
   > > >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   std::__false_type) */

void std::vector<char,std::allocator<char>>::
     _M_insert_dispatch<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  __iterator_category<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            ((__normal_iterator *)&local_30);
  _M_range_insert<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            (local_20,local_28,local_30,param_4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl::_Vector_impl(std::allocator<char>
   const&) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  std::allocator<char>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_M_create_storage
          (_Vector_base<char,std::allocator<char>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = *(long *)this + param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_default_n_a<char*, unsigned long, char>(char*, unsigned long,
   std::allocator<char>&) */

char * std::__uninitialized_default_n_a<char*,unsigned_long,char>
                 (char *param_1,ulong param_2,allocator *param_3)

{
  char *pcVar1;
  
  pcVar1 = __uninitialized_default_n<char*,unsigned_long>(param_1,param_2);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<char*>(char*, char*) */

void std::_Destroy<char*>(char *param_1,char *param_2)

{
  _Destroy_aux<true>::__destroy<char*>(param_1,param_2);
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char const& std::forward<char const&>(std::remove_reference<char const&>::type&) */

char * std::forward<char_const&>(type *param_1)

{
  return (char *)param_1;
}



/* void __gnu_cxx::new_allocator<char>::construct<char, char const&>(char*, char const&) */

void __thiscall
__gnu_cxx::new_allocator<char>::construct<char,char_const&>
          (new_allocator<char> *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = std::forward<char_const&>((type *)param_2);
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



/* void std::allocator_traits<std::allocator<char> >::destroy<char>(std::allocator<char>&, char*) */

void std::allocator_traits<std::allocator<char>>::destroy<char>(allocator *param_1,char *param_2)

{
  __gnu_cxx::new_allocator<char>::destroy<char>((char *)param_1);
  return;
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



/* std::vector<char, std::allocator<char> >::_Temporary_value::_Temporary_value<char
   const&>(std::vector<char, std::allocator<char> >*, char const&) */

void __thiscall
std::vector<char,std::allocator<char>>::_Temporary_value::_Temporary_value<char_const&>
          (_Temporary_value *this,vector *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  *(vector **)this = param_1;
  pcVar1 = forward<char_const&>((type *)param_2);
  pcVar2 = (char *)_M_ptr();
  allocator_traits<std::allocator<char>>::construct<char,char_const&>
            (*(allocator **)this,pcVar2,pcVar1);
  return;
}



/* std::vector<char, std::allocator<char> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<char,std::allocator<char>>::_Temporary_value::~_Temporary_value(_Temporary_value *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)_M_ptr();
  allocator_traits<std::allocator<char>>::destroy<char>(*(allocator **)this,pcVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::_Temporary_value::_M_val() */

void std::vector<char,std::allocator<char>>::_Temporary_value::_M_val(void)

{
  _M_ptr();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_move_a<char*, char*, std::allocator<char> >(char*, char*, char*,
   std::allocator<char>&) */

char * std::__uninitialized_move_a<char*,char*,std::allocator<char>>
                 (char *param_1,char *param_2,char *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  char *pcVar3;
  
  mVar1 = make_move_iterator<char*>(param_2);
  mVar2 = make_move_iterator<char*>(param_1);
  pcVar3 = __uninitialized_copy_a<std::move_iterator<char*>,char*,char>(mVar2,mVar1,param_3,param_4)
  ;
  return pcVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::move_backward<char*, char*>(char*, char*, char*) */

char * std::move_backward<char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = __miter_base<char*>(param_2);
  pcVar2 = __miter_base<char*>(param_1);
  pcVar1 = __copy_move_backward_a<true,char*,char*>(pcVar2,pcVar1,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<char*, char>(char*, char*, char const&) */

void std::fill<char*,char>(char *param_1,char *param_2,char *param_3)

{
  __fill_a<char*,char>(param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_fill_n_a<char*, unsigned long, char, char>(char*, unsigned long, char
   const&, std::allocator<char>&) */

char * std::__uninitialized_fill_n_a<char*,unsigned_long,char,char>
                 (char *param_1,ulong param_2,char *param_3,allocator *param_4)

{
  char *pcVar1;
  
  pcVar1 = uninitialized_fill_n<char*,unsigned_long,char>(param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_move_if_noexcept_a<char*, char*, std::allocator<char> >(char*, char*,
   char*, std::allocator<char>&) */

char * std::__uninitialized_move_if_noexcept_a<char*,char*,std::allocator<char>>
                 (char *param_1,char *param_2,char *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  char *pcVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<char,std::move_iterator<char*>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<char,std::move_iterator<char*>>(param_1);
  pcVar3 = __uninitialized_copy_a<std::move_iterator<char*>,char*,char>(mVar2,mVar1,param_3,param_4)
  ;
  return pcVar3;
}



/* bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > const&) */

bool __gnu_cxx::operator!=(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  return lVar1 != *plVar2;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::move<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >) */

void std::
     move<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (param_2);
  uVar2 = __miter_base<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (param_1);
  __copy_move_a<true,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            (uVar2,uVar1,param_3);
  return;
}



/* std::vector<char, std::allocator<char> >::_M_erase_at_end(char*) */

void __thiscall
std::vector<char,std::allocator<char>>::_M_erase_at_end
          (vector<char,std::allocator<char>> *this,char *param_1)

{
  allocator *paVar1;
  
  if (*(char **)(this + 8) != param_1) {
    paVar1 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
    _Destroy<char*,char>(param_1,*(char **)(this + 8),paVar1);
    *(char **)(this + 8) = param_1;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   > >::iterator_category std::__iterator_category<__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > > const&) */

iterator_category
std::__iterator_category<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
          (__normal_iterator *param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* std::iterator_traits<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   > >::difference_type std::distance<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

void std::distance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = param_1;
  __iterator_category<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            ((__normal_iterator *)&local_10);
  __distance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            (local_10,param_2);
  return;
}



/* void std::vector<char, std::allocator<char>
   >::_M_range_insert<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   std::forward_iterator_tag) */

void std::vector<char,std::allocator<char>>::
     _M_range_insert<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (char **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  bool bVar2;
  difference_type dVar3;
  undefined4 extraout_var;
  allocator *paVar4;
  char **ppcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char **local_60;
  undefined8 local_58;
  char *local_50;
  ulong local_48;
  ulong local_40;
  char *local_38;
  ulong local_30;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_78);
  if (bVar2) {
    local_48 = distance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                         (local_70,local_78);
    if ((ulong)((long)local_60[2] - (long)local_60[1]) < local_48) {
      local_40 = _M_check_len((vector<char,std::allocator<char>> *)local_60,local_48,
                              "vector::_M_range_insert");
      local_50 = (char *)_Vector_base<char,std::allocator<char>>::_M_allocate
                                   ((_Vector_base<char,std::allocator<char>> *)local_60,local_40);
      local_38 = local_50;
      paVar4 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
      ppcVar5 = (char **)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                         ::base();
                    /* try { // try from 001033a2 to 00103409 has its CatchHandler @ 00103494 */
      local_50 = __uninitialized_move_if_noexcept_a<char*,char*,std::allocator<char>>
                           (*local_60,*ppcVar5,local_38,paVar4);
      uVar6 = _Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
      local_50 = (char *)__uninitialized_copy_a<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*,char>
                                   (local_70,local_78,local_50,uVar6);
      paVar4 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
      pcVar1 = local_60[1];
      ppcVar5 = (char **)__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                         ::base();
      local_50 = __uninitialized_move_if_noexcept_a<char*,char*,std::allocator<char>>
                           (*ppcVar5,pcVar1,local_50,paVar4);
      paVar4 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
      _Destroy<char*,char>(*local_60,local_60[1],paVar4);
      _Vector_base<char,std::allocator<char>>::_M_deallocate
                ((_Vector_base<char,std::allocator<char>> *)local_60,*local_60,
                 (long)local_60[2] - (long)*local_60);
      *local_60 = local_38;
      local_60[1] = local_50;
      local_60[2] = local_38 + local_40;
    }
    else {
      local_58 = end();
      dVar3 = __gnu_cxx::operator-((__normal_iterator *)&local_58,(__normal_iterator *)&local_68);
      local_30 = CONCAT44(extraout_var,dVar3);
      local_28 = local_60[1];
      if (local_48 < local_30) {
        paVar4 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
        __uninitialized_move_a<char*,char*,std::allocator<char>>
                  (local_60[1] + -local_48,local_60[1],local_60[1],paVar4);
        local_60[1] = local_60[1] + local_48;
        pcVar1 = local_28 + -local_48;
        ppcVar5 = (char **)__gnu_cxx::
                           __normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
        move_backward<char*,char*>(*ppcVar5,pcVar1,local_28);
        copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                  (local_70,local_78,local_68);
      }
      else {
        local_58 = local_70;
        advance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,unsigned_long>
                  ((__normal_iterator *)&local_58,local_30);
        uVar6 = _Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
        __uninitialized_copy_a<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*,char>
                  (local_58,local_78,local_60[1],uVar6);
        local_60[1] = local_60[1] + (local_48 - local_30);
        paVar4 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
        pcVar1 = local_60[1];
        ppcVar5 = (char **)__gnu_cxx::
                           __normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
        __uninitialized_move_a<char*,char*,std::allocator<char>>(*ppcVar5,local_28,pcVar1,paVar4);
        local_60[1] = local_60[1] + local_30;
        copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                  (local_70,local_58,local_68);
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::allocator_traits<std::allocator<char> >::max_size(std::allocator<char> const&) */

void std::allocator_traits<std::allocator<char>>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<char>::max_size();
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
/* char* std::__uninitialized_default_n<char*, unsigned long>(char*, unsigned long) */

char * std::__uninitialized_default_n<char*,unsigned_long>(char *param_1,ulong param_2)

{
  char *pcVar1;
  
  pcVar1 = __uninitialized_default_n_1<true>::__uninit_default_n<char*,unsigned_long>
                     (param_1,param_2);
  return pcVar1;
}



/* void std::_Destroy_aux<true>::__destroy<char*>(char*, char*) */

void std::_Destroy_aux<true>::__destroy<char*>(char *param_1,char *param_2)

{
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
/* std::vector<char, std::allocator<char> >::max_size() const */

void std::vector<char,std::allocator<char>>::max_size(void)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator();
  _S_max_size(paVar1);
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



/* std::allocator_traits<std::allocator<char> >::allocate(std::allocator<char>&, unsigned long) */

void std::allocator_traits<std::allocator<char>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<char>::allocate((ulong)param_1,(void *)param_2);
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



/* void __gnu_cxx::new_allocator<char>::destroy<char>(char*) */

void __gnu_cxx::new_allocator<char>::destroy<char>(char *param_1)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<char, std::allocator<char> >::_Temporary_value::_M_ptr() */

long std::vector<char,std::allocator<char>>::_Temporary_value::_M_ptr(void)

{
  long in_RDI;
  
  return in_RDI + 8;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<char*> std::make_move_iterator<char*>(char*) */

move_iterator std::make_move_iterator<char*>(char *param_1)

{
  char **ppcVar1;
  long in_FS_OFFSET;
  char *local_20;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = param_1;
  ppcVar1 = (char **)move<char*&>(&local_20);
  move_iterator<char*>::move_iterator((move_iterator<char*> *)local_18,*ppcVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__uninitialized_copy_a<std::move_iterator<char*>, char*,
   char>(std::move_iterator<char*>, std::move_iterator<char*>, char*, std::allocator<char>&) */

char * std::__uninitialized_copy_a<std::move_iterator<char*>,char*,char>
                 (move_iterator param_1,move_iterator param_2,char *param_3,allocator *param_4)

{
  char *pcVar1;
  
  pcVar1 = uninitialized_copy<std::move_iterator<char*>,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__miter_base<char*>(char*) */

char * std::__miter_base<char*>(char *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_backward_a<true, char*, char*>(char*, char*, char*) */

char * std::__copy_move_backward_a<true,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  char *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pcVar1 = __niter_base<char*>(param_3);
  pcVar2 = __niter_base<char*>(local_28);
  pcVar3 = __niter_base<char*>(local_20);
  pcVar1 = __copy_move_backward_a1<true,char*,char*>(pcVar3,pcVar2,pcVar1);
  pcVar1 = __niter_wrap<char*>(&local_30,pcVar1);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__fill_a<char*, char>(char*, char*, char const&) */

void std::__fill_a<char*,char>(char *param_1,char *param_2,char *param_3)

{
  __fill_a1<char>(param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::uninitialized_fill_n<char*, unsigned long, char>(char*, unsigned long, char const&) */

char * std::uninitialized_fill_n<char*,unsigned_long,char>
                 (char *param_1,ulong param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<char*,unsigned_long,char>
                     (param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<char*> std::__make_move_if_noexcept_iterator<char, std::move_iterator<char*>
   >(char*) */

move_iterator std::__make_move_if_noexcept_iterator<char,std::move_iterator<char*>>(char *param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<char*>::move_iterator((move_iterator<char*> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::__miter_base<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >) */

undefined8
std::__miter_base<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
          (undefined8 param_1)

{
  return param_1;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::__copy_move_a<true, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

void std::
     __copy_move_a<true,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(param_3);
  pcVar2 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(param_2);
  pcVar3 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(param_1);
  pcVar1 = __copy_move_a1<true,char*,char*>(pcVar3,pcVar2,pcVar1);
  __niter_wrap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
            (param_3,pcVar1);
  return;
}



/* std::iterator_traits<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   > >::difference_type std::__distance<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, std::random_access_iterator_tag) */

void std::__distance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  __gnu_cxx::operator-((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  return;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::copy<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >) */

void std::
     copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (param_2);
  uVar2 = __miter_base<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (param_1);
  __copy_move_a<false,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            (uVar2,uVar1,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::advance<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   unsigned long>(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >&,
   unsigned long) */

void std::
     advance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,unsigned_long>
               (__normal_iterator *param_1,ulong param_2)

{
  __iterator_category<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
            (param_1);
  __advance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,long>
            (param_1,param_2,(random_access_iterator_tag)param_2);
  return;
}



/* char* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char*, char>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char*, std::allocator<char>&) */

void std::
     __uninitialized_copy_a<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*,char>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
            (param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__addressof<char>(char&) */

char * std::__addressof<char>(char *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char>::max_size() const */

void __gnu_cxx::new_allocator<char>::max_size(void)

{
  _M_max_size();
  return;
}



/* char* std::__uninitialized_default_n_1<true>::__uninit_default_n<char*, unsigned long>(char*,
   unsigned long) */

char * std::__uninitialized_default_n_1<true>::__uninit_default_n<char*,unsigned_long>
                 (char *param_1,ulong param_2)

{
  char *pcVar1;
  char *local_20;
  
  local_20 = param_1;
  if (param_2 != 0) {
    pcVar1 = __addressof<char>(param_1);
    _Construct<char>(pcVar1);
    local_20 = fill_n<char*,unsigned_long,char>(param_1 + 1,param_2 - 1,pcVar1);
  }
  return local_20;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Vector_base<char, std::allocator<char> >::_M_get_Tp_allocator() const */

undefined8 std::_Vector_base<char,std::allocator<char>>::_M_get_Tp_allocator(void)

{
  undefined8 in_RDI;
  
  return in_RDI;
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
/* std::remove_reference<char*&>::type&& std::move<char*&>(char*&) */

type * std::move<char*&>(char **param_1)

{
  return (type *)param_1;
}



/* std::move_iterator<char*>::move_iterator(char*) */

void __thiscall std::move_iterator<char*>::move_iterator(move_iterator<char*> *this,char *param_1)

{
  undefined8 *puVar1;
  char *local_18;
  undefined8 *local_10;
  
  local_18 = param_1;
  local_10 = (undefined8 *)this;
  puVar1 = (undefined8 *)move<char*&>(&local_18);
  *local_10 = *puVar1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::uninitialized_copy<std::move_iterator<char*>, char*>(std::move_iterator<char*>,
   std::move_iterator<char*>, char*) */

char * std::uninitialized_copy<std::move_iterator<char*>,char*>
                 (move_iterator param_1,move_iterator param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<char*>,char*>
                     (param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__niter_base<char*>(char*) */

char * std::__niter_base<char*>(char *param_1)

{
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_backward_a1<true, char*, char*>(char*, char*, char*) */

char * std::__copy_move_backward_a1<true,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move_backward_a2<true,char*,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__niter_wrap<char*>(char* const&, char*) */

char * std::__niter_wrap<char*>(char **param_1,char *param_2)

{
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::__enable_if<std::__is_byte<char>::__value, void>::__type std::__fill_a1<char>(char*,
   char*, char const&) */

__type std::__fill_a1<char>(char *param_1,char *param_2,char *param_3)

{
  char *__n;
  
  __n = param_2 + -(long)param_1;
  if (__n != (char *)0x0) {
    __n = (char *)memset(param_1,(uint)(byte)*param_3,(size_t)__n);
  }
  return (__type)__n;
}



/* char* std::__uninitialized_fill_n<true>::__uninit_fill_n<char*, unsigned long, char>(char*,
   unsigned long, char const&) */

char * std::__uninitialized_fill_n<true>::__uninit_fill_n<char*,unsigned_long,char>
                 (char *param_1,ulong param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = fill_n<char*,unsigned_long,char>(param_1,param_2,param_3);
  return pcVar1;
}



/* char* std::__niter_base<char*, std::vector<char, std::allocator<char> >
   >(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >) */

undefined8 std::__niter_base<char*,std::vector<char,std::allocator<char>>>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::base();
  return *puVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a1<true, char*, char*>(char*, char*, char*) */

char * std::__copy_move_a1<true,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move_a2<true,char*,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::__niter_wrap<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   char*>(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, char*) */

void std::
     __niter_wrap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  lVar1 = __niter_base<char*,std::vector<char,std::allocator<char>>>(param_1);
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_10,
             param_2 - lVar1);
  return;
}



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >
   std::__copy_move_a<false, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > > >(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >) */

void std::
     __copy_move_a<false,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(param_3);
  pcVar2 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(param_2);
  pcVar3 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(param_1);
  pcVar1 = __copy_move_a1<false,char*,char*>(pcVar3,pcVar2,pcVar1);
  __niter_wrap<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
            (param_3,pcVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__advance<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >, long>(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >&, long,
   std::random_access_iterator_tag) */

void std::__advance<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,long>
               (__normal_iterator *param_1,long param_2,random_access_iterator_tag param_3)

{
  __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+=
            ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)param_1,param_2);
  return;
}



/* char* std::uninitialized_copy<__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char*>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char*) */

void std::
     uninitialized_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
            (param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::iterator_traits<char*>::iterator_category std::__iterator_category<char*>(char* const&) */

iterator_category std::__iterator_category<char*>(char **param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Construct<char>(char*) */

void std::_Construct<char>(char *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)operator_new(1,param_1);
  *puVar1 = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::fill_n<char*, unsigned long, char>(char*, unsigned long, char const&) */

char * std::fill_n<char*,unsigned_long,char>(char *param_1,ulong param_2,char *param_3)

{
  ulong uVar1;
  char *pcVar2;
  char *local_10;
  
  local_10 = param_1;
  __iterator_category<char*>(&local_10);
  uVar1 = __size_to_integer(param_2);
  pcVar2 = __fill_n_a<char*,unsigned_long,char>
                     (local_10,uVar1,param_3,(random_access_iterator_tag)uVar1);
  return pcVar2;
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



/* char* std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<char*>,
   char*>(std::move_iterator<char*>, std::move_iterator<char*>, char*) */

char * std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<char*>,char*>
                 (move_iterator param_1,move_iterator param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = copy<std::move_iterator<char*>,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_backward_a2<true, char*, char*>(char*, char*, char*) */

char * std::__copy_move_backward_a2<true,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<char>
                     (param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a2<true, char*, char*>(char*, char*, char*) */

char * std::__copy_move_a2<true,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<char>
                     (param_1,param_2,param_3);
  return pcVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a1<false, char*, char*>(char*, char*, char*) */

char * std::__copy_move_a1<false,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move_a2<false,char*,char*>(param_1,param_2,param_3);
  return pcVar1;
}



/* char* std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > >, char*>(__gnu_cxx::__normal_iterator<char*,
   std::vector<char, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char*) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
            (param_1,param_2,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__fill_n_a<char*, unsigned long, char>(char*, unsigned long, char const&,
   std::random_access_iterator_tag) */

char * std::__fill_n_a<char*,unsigned_long,char>
                 (char *param_1,ulong param_2,char *param_3,random_access_iterator_tag param_4)

{
  if (param_2 != 0) {
    __fill_a<char*,char>(param_1,param_1 + param_2,param_3);
    param_1 = param_1 + param_2;
  }
  return param_1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::copy<std::move_iterator<char*>, char*>(std::move_iterator<char*>,
   std::move_iterator<char*>, char*) */

char * std::copy<std::move_iterator<char*>,char*>
                 (move_iterator param_1,move_iterator param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)__miter_base<char*>(param_2);
  pcVar2 = (char *)__miter_base<char*>(param_1);
  pcVar1 = __copy_move_a<true,char*,char*>(pcVar2,pcVar1,param_3);
  return pcVar1;
}



/* char* std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<char>(char const*, char const*, char*) */

char * std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<char>
                 (char *param_1,char *param_2,char *param_3)

{
  size_t __n;
  
  __n = (long)param_2 - (long)param_1;
  if (__n != 0) {
    memmove(param_3 + -__n,param_1,__n);
  }
  return param_3 + -__n;
}



/* char* std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<char>(char const*,
   char const*, char*) */

char * std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<char>
                 (char *param_1,char *param_2,char *param_3)

{
  size_t __n;
  
  __n = (long)param_2 - (long)param_1;
  if (__n != 0) {
    memmove(param_3,param_1,__n);
  }
  return param_3 + __n;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a2<false, char*, char*>(char*, char*, char*) */

char * std::__copy_move_a2<false,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>
                     (param_1,param_2,param_3);
  return pcVar1;
}



/* char* std::copy<__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   char*>(__gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >,
   __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> > >, char*) */

void std::copy<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (param_2);
  uVar2 = __miter_base<__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>>
                    (param_1);
  __copy_move_a<false,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
            (uVar2,uVar1,param_3);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)())) std::__miter_base<char*>(std::move_iterator<char*>) */

void std::__miter_base<char*>(move_iterator param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)move_iterator<char*>::base();
  __miter_base<char*>(pcVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__copy_move_a<true, char*, char*>(char*, char*, char*) */

char * std::__copy_move_a<true,char*,char*>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  char *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pcVar1 = __niter_base<char*>(param_3);
  pcVar2 = __niter_base<char*>(local_28);
  pcVar3 = __niter_base<char*>(local_20);
  pcVar1 = __copy_move_a1<true,char*,char*>(pcVar3,pcVar2,pcVar1);
  pcVar1 = __niter_wrap<char*>(&local_30,pcVar1);
  return pcVar1;
}



/* char* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<char>(char const*,
   char const*, char*) */

char * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>
                 (char *param_1,char *param_2,char *param_3)

{
  size_t __n;
  
  __n = (long)param_2 - (long)param_1;
  if (__n != 0) {
    memmove(param_3,param_1,__n);
  }
  return param_3 + __n;
}



/* char* std::__copy_move_a<false, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char*>(__gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::vector<char,
   std::allocator<char> > >, char*) */

void std::
     __copy_move_a<false,__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>,char*>
               (undefined8 param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pcVar1 = __niter_base<char*>(param_3);
  pcVar2 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(local_28);
  pcVar3 = (char *)__niter_base<char*,std::vector<char,std::allocator<char>>>(local_20);
  pcVar1 = __copy_move_a1<false,char*,char*>(pcVar3,pcVar2,pcVar1);
  __niter_wrap<char*>(&local_30,pcVar1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<char*>::base() const */

undefined8 std::move_iterator<char*>::base(void)

{
  undefined8 *in_RDI;
  
  return *in_RDI;
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memset@GLIBC_2.2.5 */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC1ERKS_@GLIBCXX_3.4 */
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

void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcED1Ev@GLIBCXX_3.4 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC2ERKS_@GLIBCXX_3.4 */
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSaIcEC1Ev@GLIBCXX_3.4 */
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


