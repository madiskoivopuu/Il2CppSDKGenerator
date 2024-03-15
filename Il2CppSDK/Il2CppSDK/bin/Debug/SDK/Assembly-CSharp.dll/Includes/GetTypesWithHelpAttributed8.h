#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTypesWithHelpAttributed8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetTypesWithHelpAttribute>d__8"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& l__initialThreadId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& assembly() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& 3__assembly() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& 7__wrap1() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& 7__wrap2() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1156EE0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1156EE4))(this);
	}
	template <typename R = uintptr_t> R System_Collections_Generic_IEnumeratorNewtonsoft_Json_JsonConverter_get_Current() {
		return ((R (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1157124))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x115712C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x115716C))(this);
	}
	 IEnumerator1uintptr_t>* System_Collections_Generic_IEnumerableNewtonsoft_Json_JsonConverter_GetEnumerator() {
		return ((IEnumerator1uintptr_t>* (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1157174))(this);
	}
	template <typename R = uintptr_t> R System_Collections_IEnumerable_GetEnumerator() {
		return ((R (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1157224))(this);
	}

};

