#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetFlagValuesd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetFlagValues>d__3"));
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
	template <typename R = uintptr_t> R& enumType() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& 3__enumType() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uint64_t> R& flag5__2() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 IEnumerator1uintptr_t>*& 7__wrap2() {
		return *(IEnumerator1uintptr_t>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9C7B4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9C88C))(this);
	}
	template <typename R = void> R m__Finally1() {
		return ((R (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9C7D0))(this);
	}
	template <typename R = uintptr_t> R System_Collections_Generic_IEnumeratorSystem_Enum_get_Current() {
		return ((R (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC04))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC0C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC4C))(this);
	}
	 IEnumerator1uintptr_t>* System_Collections_Generic_IEnumerableSystem_Enum_GetEnumerator() {
		return ((IEnumerator1uintptr_t>* (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CC54))(this);
	}
	template <typename R = uintptr_t> R System_Collections_IEnumerable_GetEnumerator() {
		return ((R (*)(GetFlagValuesd3*))(Il2CppBase() + 0xE9CD04))(this);
	}

};

