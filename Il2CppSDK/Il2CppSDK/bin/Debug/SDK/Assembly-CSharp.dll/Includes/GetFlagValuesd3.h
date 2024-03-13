#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetFlagValuesd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetFlagValues>d__3"));
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
	template <typename T = uintptr_t> T& enumType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 3__enumType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& flag5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = IEnumerator1uintptr_t>*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9C7B4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9C88C))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9C7D0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Enum_get_Current() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC04))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC0C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC4C))(this);
	}
	template <typename T = IEnumerator1uintptr_t>*> T System_Collections_Generic_IEnumerableSystem_Enum_GetEnumerator() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CD04))(this);
	}

};

