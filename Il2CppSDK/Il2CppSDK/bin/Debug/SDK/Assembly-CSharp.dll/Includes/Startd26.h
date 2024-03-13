#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd26
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__26"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = UIWindowsManager*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Startd26*))(Il2CppBase() + 0x22A290C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Startd26*))(Il2CppBase() + 0x22A2910))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Startd26*))(Il2CppBase() + 0x22A2B64))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Startd26*))(Il2CppBase() + 0x22A2B6C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Startd26*))(Il2CppBase() + 0x22A2BAC))(this);
	}
	template <typename T = IEnumerator1Il2CppObject*>*> T System_Collections_Generic_IEnumerableSystem_Object_GetEnumerator() {
		return ((T (*)(Startd26*))(Il2CppBase() + 0x22A2BB4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Startd26*))(Il2CppBase() + 0x22A2C64))(this);
	}

};

