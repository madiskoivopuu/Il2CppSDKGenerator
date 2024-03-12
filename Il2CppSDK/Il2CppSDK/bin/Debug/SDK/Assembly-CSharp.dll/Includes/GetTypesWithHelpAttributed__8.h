#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTypesWithHelpAttributed8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetTypesWithHelpAttribute>d__8"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& assembly() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 3__assembly() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1156EE0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1156EE4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_JsonConverter_get_Current() {
		return ((T (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1157124))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x115712C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x115716C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_JsonConverter_GetEnumerator() {
		return ((T (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1157174))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetTypesWithHelpAttributed8*))(Il2CppBase() + 0x1157224))(this);
	}

};

}
