#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC;
IL2CPP_EXTERN_C String_t* _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9;
IL2CPP_EXTERN_C String_t* _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t894B2B5A3362895139D0DBC8AC91F6CF31FBD3BA 
{
};
struct Il2CppArrayBounds;

// System.Threading.Tasks.AsyncInfoIdGenerator
struct AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96  : public RuntimeObject
{
};

struct AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields
{
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_idGenerator_0;
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// Windows.Foundation.TokenizerHelper
struct TokenizerHelper_t1A1FDF4DB0F4C8B0A4727721AFD64637A876433B  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D  : public RuntimeObject
{
};

// System.WindowsRuntimeSystemExtensions
struct WindowsRuntimeSystemExtensions_tEDF4DAA53DC87A4A33D83BFDDDB6C404612648A6  : public RuntimeObject
{
};

// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2  : public RuntimeObject
{
};

struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields
{
	// System.WindowsRuntimeSystemExtensions/<>c System.WindowsRuntimeSystemExtensions/<>c::<>9
	U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_1
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___U3CU3E9__0_1_2;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Windows.Foundation.Point
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;
};

// Windows.Foundation.Rect
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Windows.Foundation.Size
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.VoidValueTypeParameter
struct VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C 
{
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C__padding[1];
	};
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m2147692C917CB17E1644432087C1839C7E7F2C63 (RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m47B2846E44214E013BF3069B0F9015AD223FF16E (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, RuntimeObject* ___arg24, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m1B48A3E97A33E2C9D69ED2994255DEACB6396444 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___point10, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___point21, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m53E23099B231DDA09A4EDDB8A5F1184131159E43 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___rect10, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___rect21, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m8048651160FD3B476ADBE98B599B3871758F1620 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___size10, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___size21, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m68D84692285114DC53C752EFC2A559319D117E71 (RuntimeObject* ___formatProvider0, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9 (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___continuationAction0, RuntimeObject* ___state1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, int32_t ___continuationOptions3, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler4, const RuntimeMethod* method) ;
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m613A202D0ED585775B5487F743A9E14C65790360 (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___Seed0, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____x_0;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____y_1;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2;
		L_2 = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___provider1;
		Il2CppChar L_1;
		L_1 = TokenizerHelper_GetNumericListSeparator_m2147692C917CB17E1644432087C1839C7E7F2C63(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___provider1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___format0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___format0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_11;
		L_11 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_10, NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_13);
		double L_15;
		L_15 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(__this, NULL);
		double L_16 = L_15;
		RuntimeObject* L_17 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_16);
		double L_18;
		L_18 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(__this, NULL);
		double L_19 = L_18;
		RuntimeObject* L_20 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_m47B2846E44214E013BF3069B0F9015AD223FF16E(L_2, L_11, L_14, L_17, L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m1B48A3E97A33E2C9D69ED2994255DEACB6396444 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___point10, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___point21, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516((&___point10), NULL);
		double L_1;
		L_1 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516((&___point21), NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2;
		L_2 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F((&___point10), NULL);
		double L_3;
		L_3 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F((&___point21), NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 L_1 = (*(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)__this);
		RuntimeObject* L_2 = ___o0;
		bool L_3;
		L_3 = Point_op_Equality_m1B48A3E97A33E2C9D69ED2994255DEACB6396444(L_1, ((*(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)((Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)UnBox(L_2, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	bool _returnValue;
	_returnValue = Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_2;
		L_2 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(L_1^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____x_0;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____y_1;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width_2;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____height_3;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width_2;
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2;
		L_2 = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___provider1;
		Il2CppChar L_2;
		L_2 = TokenizerHelper_GetNumericListSeparator_m2147692C917CB17E1644432087C1839C7E7F2C63(L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___provider1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = ___format0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___format0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = ___format0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = ___format0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_17, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject* L_23 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		float L_25 = __this->____x_0;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		float L_29 = __this->____y_1;
		float L_30 = L_29;
		RuntimeObject* L_31 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_28;
		float L_33 = __this->____width_2;
		float L_34 = L_33;
		RuntimeObject* L_35 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
		float L_37 = __this->____height_3;
		float L_38 = L_37;
		RuntimeObject* L_39 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_39);
		String_t* L_40;
		L_40 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_3, L_18, L_36, NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m53E23099B231DDA09A4EDDB8A5F1184131159E43 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___rect10, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___rect21, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606((&___rect10), NULL);
		double L_1;
		L_1 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606((&___rect21), NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2;
		L_2 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E((&___rect10), NULL);
		double L_3;
		L_3 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E((&___rect21), NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4;
		L_4 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2((&___rect10), NULL);
		double L_5;
		L_5 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2((&___rect21), NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6;
		L_6 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E((&___rect10), NULL);
		double L_7;
		L_7 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E((&___rect21), NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 L_1 = (*(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)__this);
		RuntimeObject* L_2 = ___o0;
		bool L_3;
		L_3 = Rect_op_Equality_m53E23099B231DDA09A4EDDB8A5F1184131159E43(L_1, ((*(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)((Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)UnBox(L_2, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_2;
		L_2 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_4;
		L_4 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2(__this, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_6;
		L_6 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^L_3))^L_5))^L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width_0;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____height_1;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(__this, NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 L_1 = (*(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)__this);
		RuntimeObject* L_2 = ___o0;
		bool L_3;
		L_3 = Size_Equals_m8048651160FD3B476ADBE98B599B3871758F1620(L_1, ((*(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)((Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)UnBox(L_2, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1;
		L_1 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(__this, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_3;
		L_3 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438(__this, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(L_2^L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m8048651160FD3B476ADBE98B599B3871758F1620 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___size10, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___size21, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD((&___size10), NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD((&___size21), NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2;
		L_2 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE((&___size10), NULL);
		V_0 = L_2;
		double L_3;
		L_3 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE((&___size21), NULL);
		bool L_4;
		L_4 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_0), L_3, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5;
		L_5 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438((&___size10), NULL);
		V_0 = L_5;
		double L_6;
		L_6 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438((&___size21), NULL);
		bool L_7;
		L_7 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_0), L_6, NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
	}

IL_000e:
	{
		float L_1 = __this->____width_0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->____height_1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_3, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m2147692C917CB17E1644432087C1839C7E7F2C63 (RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1;
		L_1 = NumberFormatInfo_GetInstance_m68D84692285114DC53C752EFC2A559319D117E71(L_0, NULL);
		V_1 = L_1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_6, NULL);
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, 0, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mB240699D41EACE8C0D905919F091668DD1E09386 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___source0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___sink1, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___concatenationLifetime2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B2_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* G_B2_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B1_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* G_B1_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B4_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B4_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B3_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___source0);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___source0);
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_2 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = L_3;
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_5 = ___sink1;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859(G_B2_1, G_B2_0, L_5, NULL);
		V_0 = L_6;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = ___concatenationLifetime2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_8 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_10 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_11 = (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*)il2cpp_codegen_object_new(Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var), NULL);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_12 = L_11;
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13 = V_0;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_14 = L_13;
		RuntimeObject* L_15 = Box(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var, &L_14);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16;
		L_16 = CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB(NULL);
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17;
		L_17 = TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline(NULL);
		NullCheck(G_B4_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
		L_18 = Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, NULL);
		return;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m82F656F6C165EFA94E1B6256F706A205D27600AB (Exception_t* ___e0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___e0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m32236F53E27E37CA09364E91B62D023673AC40D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_0 = (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2*)il2cpp_codegen_object_new(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163(L_0, NULL);
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___state0;
		NullCheck(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___state1;
		V_0 = ((*(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)UnBox(L_0, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_0), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m613A202D0ED585775B5487F743A9E14C65790360 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
			Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = ((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_4, 1, ((int32_t)2147483647LL));
			V_2 = L_5;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m1BC953187B0CE0CEBA5AC928832CA3F2EC00258B (uint32_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___id0;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___id0;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = AsyncInfoIdGenerator_CreateNext_m613A202D0ED585775B5487F743A9E14C65790360(NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___id0;
		V_1 = L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA((int32_t*)((uintptr_t)L_6), L_7, ((int32_t)2147483647LL), NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_m95C8D6F3D46DD8893685DCF6AB9BB78440847C5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_0, ((int32_t)19830118), NULL);
		((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberDecimalSeparator_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
