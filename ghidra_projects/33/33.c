
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00104fe8;
  if (PTR___gmon_start___00104fe8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00104fe8)();
  }
  return (int)puVar1;
}



void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}



void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00104fc8)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00104f28)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,ulong param_1)

{
  (*(code *)PTR_operator<<_00104f30)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00104f38)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00104f40)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00104f48)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00104f50)();
  return;
}



void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00104f58)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00104f60)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104f68)();
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_00104f70)();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00104f78)();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  (*(code *)PTR__allocator_00104f80)();
  return;
}



void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00104f88)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

basic_ostream * std::operator<<(basic_ostream *param_1,char param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)(*(code *)PTR_operator<<_00104f90)();
  return pbVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(allocator *param_1)

{
  (*(code *)PTR_allocator_00104f98)();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_00104fa0)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00104fa8)();
  return pvVar1;
}



void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104fb0)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::allocator<char>::allocator(void)

{
  (*(code *)PTR_allocator_00104fb8)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_toupper_00104fc0)();
  return iVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00104fd8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void deregister_tm_clones(void)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00104fc8 != (undefined *)0x0) {
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
  basic_ostream *pbVar3;
  ulong uVar4;
  basic_ostream<char,std::char_traits<char>> *this;
  undefined *puVar5;
  char *pcVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  allocator local_51;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  vector<char,std::allocator<char>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    /* try { // try from 001013e1 to 001013e5 has its CatchHandler @ 0010170a */
  std::vector<char,std::allocator<char>>::vector(local_38,5,&local_51);
  std::allocator<char>::~allocator((allocator<char> *)&local_51);
                    /* try { // try from 00101406 to 001016e5 has its CatchHandler @ 00101728 */
  pbVar3 = std::operator<<((basic_ostream *)std::cout,"Size of the vector : ");
  uVar4 = std::vector<char,std::allocator<char>>::size();
  this = (basic_ostream<char,std::char_traits<char>> *)
         std::basic_ostream<char,std::char_traits<char>>::operator<<
                   ((basic_ostream<char,std::char_traits<char>> *)pbVar3,uVar4);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            (this,(_func_basic_ostream_ptr_basic_ostream_ptr *)
                  PTR_endl<char,std_char_traits<char>>_00104fd0);
  local_50 = 0;
  while( true ) {
    uVar7 = (ulong)local_50;
    uVar4 = std::vector<char,std::allocator<char>>::size();
    if (uVar4 <= uVar7) break;
    cVar1 = (char)local_50;
    pcVar6 = (char *)std::vector<char,std::allocator<char>>::operator[](local_38,(long)local_50);
    *pcVar6 = cVar1 + 'a';
    local_50 = local_50 + 1;
  }
  std::operator<<((basic_ostream *)std::cout,"Vector : ");
  local_4c = 0;
  while( true ) {
    uVar7 = (ulong)local_4c;
    uVar4 = std::vector<char,std::allocator<char>>::size();
    if (uVar4 <= uVar7) break;
    pcVar6 = (char *)std::vector<char,std::allocator<char>>::operator[](local_38,(long)local_4c);
    pbVar3 = std::operator<<((basic_ostream *)std::cout,*pcVar6);
    std::operator<<(pbVar3," ");
    local_4c = local_4c + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00104fd0);
  for (local_48 = 0; local_48 < 10; local_48 = local_48 + 1) {
    local_51 = (allocator)((char)local_48 + 'f');
    std::vector<char,std::allocator<char>>::push_back(local_38,(char *)&local_51);
  }
  std::operator<<((basic_ostream *)std::cout,"Vector : ");
  local_44 = 0;
  while( true ) {
    uVar7 = (ulong)local_44;
    uVar4 = std::vector<char,std::allocator<char>>::size();
    if (uVar4 <= uVar7) break;
    pcVar6 = (char *)std::vector<char,std::allocator<char>>::operator[](local_38,(long)local_44);
    pbVar3 = std::operator<<((basic_ostream *)std::cout,*pcVar6);
    std::operator<<(pbVar3," ");
    local_44 = local_44 + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00104fd0);
  local_40 = 0;
  while( true ) {
    uVar7 = (ulong)local_40;
    uVar4 = std::vector<char,std::allocator<char>>::size();
    if (uVar4 <= uVar7) break;
    pcVar6 = (char *)std::vector<char,std::allocator<char>>::operator[](local_38,(long)local_40);
    iVar2 = toupper((int)*pcVar6);
    puVar5 = (undefined *)
             std::vector<char,std::allocator<char>>::operator[](local_38,(long)local_40);
    *puVar5 = (char)iVar2;
    local_40 = local_40 + 1;
  }
  std::operator<<((basic_ostream *)std::cout,"Vector : ");
  local_3c = 0;
  while( true ) {
    uVar7 = (ulong)local_3c;
    uVar4 = std::vector<char,std::allocator<char>>::size();
    if (uVar4 <= uVar7) break;
    pcVar6 = (char *)std::vector<char,std::allocator<char>>::operator[](local_38,(long)local_3c);
    pbVar3 = std::operator<<((basic_ostream *)std::cout,*pcVar6);
    std::operator<<(pbVar3," ");
    local_3c = local_3c + 1;
  }
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)std::cout,
             (_func_basic_ostream_ptr_basic_ostream_ptr *)
             PTR_endl<char,std_char_traits<char>>_00104fd0);
  std::vector<char,std::allocator<char>>::~vector(local_38);
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
    __cxa_atexit(PTR__Init_00104ff8,&std::__ioinit,&__dso_handle);
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



/* std::vector<char, std::allocator<char> >::vector(unsigned long, std::allocator<char> const&) */

void __thiscall
std::vector<char,std::allocator<char>>::vector
          (vector<char,std::allocator<char>> *this,ulong param_1,allocator *param_2)

{
  ulong uVar1;
  
  uVar1 = _S_check_init_len(param_1,param_2);
  _Vector_base<char,std::allocator<char>>::_Vector_base
            ((_Vector_base<char,std::allocator<char>> *)this,uVar1,param_2);
                    /* try { // try from 0010183b to 0010183f has its CatchHandler @ 00101842 */
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



/* std::_Vector_base<char, std::allocator<char> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  std::allocator<char>::~allocator((allocator<char> *)this);
  return;
}



/* std::_Vector_base<char, std::allocator<char> >::_Vector_base(unsigned long, std::allocator<char>
   const&) */

void __thiscall
std::_Vector_base<char,std::allocator<char>>::_Vector_base
          (_Vector_base<char,std::allocator<char>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00101a08 to 00101a0c has its CatchHandler @ 00101a0f */
  _M_create_storage(this,param_1);
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<char&>::type&& std::move<char&>(char&) */

type * std::move<char&>(char *param_1)

{
  return (type *)param_1;
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



/* std::allocator_traits<std::allocator<char> >::deallocate(std::allocator<char>&, char*, unsigned
   long) */

void std::allocator_traits<std::allocator<char>>::deallocate
               (allocator *param_1,char *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<char>::deallocate((new_allocator<char> *)param_1,param_2,param_3);
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



/* __gnu_cxx::__normal_iterator<char*, std::vector<char, std::allocator<char> >
   >::__normal_iterator(char* const&) */

void __thiscall
__gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::__normal_iterator
          (__normal_iterator<char*,std::vector<char,std::allocator<char>>> *this,char **param_1)

{
  *(char **)this = *param_1;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* std::__addressof<char>(char&) */

char * std::__addressof<char>(char *param_1)

{
  return param_1;
}



/* __gnu_cxx::new_allocator<char>::deallocate(char*, unsigned long) */

void __thiscall
__gnu_cxx::new_allocator<char>::deallocate(new_allocator<char> *this,char *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __gnu_cxx::new_allocator<char>::max_size() const */

void __gnu_cxx::new_allocator<char>::max_size(void)

{
  _M_max_size();
  return;
}



/* std::allocator_traits<std::allocator<char> >::allocate(std::allocator<char>&, unsigned long) */

void std::allocator_traits<std::allocator<char>>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<char>::allocate((ulong)param_1,(void *)param_2);
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



/* std::vector<char, std::allocator<char> >::_S_do_relocate(char*, char*, char*,
   std::allocator<char>&, std::integral_constant<bool, true>) */

void std::vector<char,std::allocator<char>>::_S_do_relocate
               (char *param_1,char *param_2,char *param_3,allocator *param_4,
               integral_constant param_5)

{
  __relocate_a<char*,char*,std::allocator<char>>(param_1,param_2,param_3,param_4);
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__fill_a<char*, char>(char*, char*, char const&) */

void std::__fill_a<char*,char>(char *param_1,char *param_2,char *param_3)

{
  __fill_a1<char>(param_1,param_2,param_3);
  return;
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* toupper@GLIBC_2.2.5 */
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


