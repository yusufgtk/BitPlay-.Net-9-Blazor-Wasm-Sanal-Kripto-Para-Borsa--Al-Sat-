#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
220,
233,
234,
235,
236,
237,
238,
239,
240,
241,
244,
245,
246,
422,
423,
424,
452,
453,
454,
481,
482,
483,
600,
601,
602,
605,
643,
644,
645,
646,
647,
651,
653,
655,
657,
663,
671,
672,
673,
674,
675,
676,
677,
678,
679,
680,
681,
682,
683,
684,
685,
686,
687,
689,
690,
691,
692,
693,
694,
695,
792,
793,
794,
795,
796,
797,
798,
799,
800,
801,
802,
803,
804,
805,
806,
807,
808,
810,
811,
812,
813,
814,
815,
816,
878,
887,
888,
959,
966,
969,
971,
976,
977,
979,
980,
984,
985,
987,
988,
991,
992,
993,
996,
998,
1001,
1003,
1005,
1014,
1082,
1084,
1086,
1096,
1097,
1098,
1100,
1106,
1107,
1108,
1109,
1110,
1118,
1119,
1120,
1124,
1125,
1127,
1131,
1132,
1133,
1430,
1620,
1621,
9998,
9999,
10001,
10002,
10003,
10004,
10005,
10007,
10008,
10009,
10010,
10028,
10030,
10037,
10039,
10041,
10043,
10046,
10096,
10097,
10099,
10100,
10101,
10102,
10103,
10105,
10107,
11255,
11259,
11261,
11262,
11263,
11264,
11706,
11707,
11708,
11709,
11727,
11728,
11729,
11774,
11842,
11845,
11854,
11855,
11856,
11857,
11858,
11859,
12188,
12189,
12194,
12195,
12230,
12273,
12280,
12287,
12298,
12302,
12328,
12411,
12413,
12424,
12426,
12427,
12428,
12435,
12450,
12470,
12471,
12479,
12481,
12488,
12489,
12492,
12494,
12499,
12505,
12506,
12513,
12515,
12527,
12530,
12531,
12532,
12543,
12553,
12559,
12560,
12561,
12563,
12564,
12581,
12583,
12598,
12620,
12621,
12646,
12651,
12681,
12682,
13303,
13317,
13406,
13407,
13629,
13630,
13637,
13638,
13639,
13645,
13715,
14245,
14246,
14676,
14677,
14678,
14683,
14693,
15699,
15720,
15722,
15724,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
int ves_icall_System_GC_GetMaxGeneration ();
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
int64_t ves_icall_System_GC_GetTotalAllocatedBytes_raw (int,int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int64_t ves_icall_System_Threading_Monitor_Monitor_get_lock_contention_count ();
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 220,
ves_icall_System_Array_InternalCreate,
// token 233,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 234,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 235,
ves_icall_System_Array_CanChangePrimitive,
// token 236,
ves_icall_System_Array_FastCopy,
// token 237,
ves_icall_System_Array_GetLengthInternal_raw,
// token 238,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 239,
ves_icall_System_Array_GetGenericValue_icall,
// token 240,
ves_icall_System_Array_GetValueImpl_raw,
// token 241,
ves_icall_System_Array_SetGenericValue_icall,
// token 244,
ves_icall_System_Array_SetValueImpl_raw,
// token 245,
ves_icall_System_Array_InitializeInternal_raw,
// token 246,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 422,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 423,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 424,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 452,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 453,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 454,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 481,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 482,
ves_icall_System_Enum_InternalGetCorElementType,
// token 483,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 600,
ves_icall_System_Environment_get_ProcessorCount,
// token 601,
ves_icall_System_Environment_get_TickCount,
// token 602,
ves_icall_System_Environment_get_TickCount64,
// token 605,
ves_icall_System_Environment_FailFast_raw,
// token 643,
ves_icall_System_GC_GetCollectionCount,
// token 644,
ves_icall_System_GC_GetMaxGeneration,
// token 645,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 646,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 647,
ves_icall_System_GC_GetTotalAllocatedBytes_raw,
// token 651,
ves_icall_System_GC_SuppressFinalize_raw,
// token 653,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 655,
ves_icall_System_GC_GetGCMemoryInfo,
// token 657,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 663,
ves_icall_System_Object_MemberwiseClone_raw,
// token 671,
ves_icall_System_Math_Acos,
// token 672,
ves_icall_System_Math_Acosh,
// token 673,
ves_icall_System_Math_Asin,
// token 674,
ves_icall_System_Math_Asinh,
// token 675,
ves_icall_System_Math_Atan,
// token 676,
ves_icall_System_Math_Atan2,
// token 677,
ves_icall_System_Math_Atanh,
// token 678,
ves_icall_System_Math_Cbrt,
// token 679,
ves_icall_System_Math_Ceiling,
// token 680,
ves_icall_System_Math_Cos,
// token 681,
ves_icall_System_Math_Cosh,
// token 682,
ves_icall_System_Math_Exp,
// token 683,
ves_icall_System_Math_Floor,
// token 684,
ves_icall_System_Math_Log,
// token 685,
ves_icall_System_Math_Log10,
// token 686,
ves_icall_System_Math_Pow,
// token 687,
ves_icall_System_Math_Sin,
// token 689,
ves_icall_System_Math_Sinh,
// token 690,
ves_icall_System_Math_Sqrt,
// token 691,
ves_icall_System_Math_Tan,
// token 692,
ves_icall_System_Math_Tanh,
// token 693,
ves_icall_System_Math_FusedMultiplyAdd,
// token 694,
ves_icall_System_Math_Log2,
// token 695,
ves_icall_System_Math_ModF,
// token 792,
ves_icall_System_MathF_Acos,
// token 793,
ves_icall_System_MathF_Acosh,
// token 794,
ves_icall_System_MathF_Asin,
// token 795,
ves_icall_System_MathF_Asinh,
// token 796,
ves_icall_System_MathF_Atan,
// token 797,
ves_icall_System_MathF_Atan2,
// token 798,
ves_icall_System_MathF_Atanh,
// token 799,
ves_icall_System_MathF_Cbrt,
// token 800,
ves_icall_System_MathF_Ceiling,
// token 801,
ves_icall_System_MathF_Cos,
// token 802,
ves_icall_System_MathF_Cosh,
// token 803,
ves_icall_System_MathF_Exp,
// token 804,
ves_icall_System_MathF_Floor,
// token 805,
ves_icall_System_MathF_Log,
// token 806,
ves_icall_System_MathF_Log10,
// token 807,
ves_icall_System_MathF_Pow,
// token 808,
ves_icall_System_MathF_Sin,
// token 810,
ves_icall_System_MathF_Sinh,
// token 811,
ves_icall_System_MathF_Sqrt,
// token 812,
ves_icall_System_MathF_Tan,
// token 813,
ves_icall_System_MathF_Tanh,
// token 814,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 815,
ves_icall_System_MathF_Log2,
// token 816,
ves_icall_System_MathF_ModF,
// token 878,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 887,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 888,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 959,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 966,
ves_icall_RuntimeType_make_array_type_raw,
// token 969,
ves_icall_RuntimeType_make_byref_type_raw,
// token 971,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 976,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 977,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 979,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 980,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 984,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 985,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 987,
ves_icall_System_RuntimeType_getFullName_raw,
// token 988,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 991,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 992,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 993,
ves_icall_RuntimeType_GetFields_native_raw,
// token 996,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 998,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1001,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1003,
ves_icall_RuntimeType_GetName_raw,
// token 1005,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1014,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1082,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1084,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1086,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1096,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1097,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1098,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1100,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1106,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1107,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1108,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1109,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1110,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1118,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1119,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1120,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1124,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1125,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1127,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1131,
ves_icall_System_String_FastAllocateString_raw,
// token 1132,
ves_icall_System_String_InternalIsInterned_raw,
// token 1133,
ves_icall_System_String_InternalIntern_raw,
// token 1430,
ves_icall_System_Type_internal_from_handle_raw,
// token 1620,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1621,
ves_icall_System_ValueType_Equals_raw,
// token 9998,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 9999,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 10001,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 10002,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 10003,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 10004,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 10005,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 10007,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 10008,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 10009,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 10010,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 10028,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 10030,
mono_monitor_exit_icall_raw,
// token 10037,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 10039,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 10041,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 10043,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 10046,
ves_icall_System_Threading_Monitor_Monitor_get_lock_contention_count,
// token 10096,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 10097,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 10099,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 10100,
ves_icall_System_Threading_Thread_GetState_raw,
// token 10101,
ves_icall_System_Threading_Thread_SetState_raw,
// token 10102,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 10103,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 10105,
ves_icall_System_Threading_Thread_YieldInternal,
// token 10107,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 11255,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 11259,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 11261,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 11262,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 11263,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 11264,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11706,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11707,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11708,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11709,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11727,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11728,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11729,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11774,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 11842,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 11845,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 11854,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 11855,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 11856,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 11857,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 11858,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 11859,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 12188,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 12189,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 12194,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 12195,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 12230,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 12273,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 12280,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 12287,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 12298,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 12302,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 12328,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 12411,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 12413,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 12424,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 12426,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 12427,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 12428,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 12435,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 12450,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 12470,
ves_icall_reflection_get_token_raw,
// token 12471,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 12479,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 12481,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 12488,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 12489,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 12492,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 12494,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 12499,
ves_icall_reflection_get_token_raw,
// token 12505,
ves_icall_get_method_info_raw,
// token 12506,
ves_icall_get_method_attributes,
// token 12513,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 12515,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 12527,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 12530,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 12531,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 12532,
ves_icall_reflection_get_token_raw,
// token 12543,
ves_icall_InternalInvoke_raw,
// token 12553,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 12559,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 12560,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 12561,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 12563,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 12564,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 12581,
ves_icall_InvokeClassConstructor_raw,
// token 12583,
ves_icall_InternalInvoke_raw,
// token 12598,
ves_icall_reflection_get_token_raw,
// token 12620,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12621,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12646,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12651,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12681,
ves_icall_reflection_get_token_raw,
// token 12682,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 13303,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 13317,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 13406,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 13407,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 13629,
ves_icall_ModuleBuilder_basic_init_raw,
// token 13630,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 13637,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 13638,
ves_icall_ModuleBuilder_getToken_raw,
// token 13639,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 13645,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13715,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 14245,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 14246,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 14676,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 14677,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 14678,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14683,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 14693,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 15699,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 15720,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 15722,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 15724,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
