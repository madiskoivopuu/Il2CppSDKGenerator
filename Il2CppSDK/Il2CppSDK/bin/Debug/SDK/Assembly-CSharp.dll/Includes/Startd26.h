#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd26
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__26"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& l__initialThreadId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = UIWindowsManager*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Startd26*))(Il2CppBase() + 0x22A290C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Startd26*))(Il2CppBase() + 0x22A2910))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Startd26*))(Il2CppBase() + 0x22A2B64))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Startd26*))(Il2CppBase() + 0x22A2B6C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Startd26*))(Il2CppBase() + 0x22A2BAC))(this);
	}
	 IEnumerator1Il2CppObject*>* System_Collections_Generic_IEnumerableSystem_Object_GetEnumerator() {
		return ((IEnumerator1Il2CppObject*>* (*)(Startd26*))(Il2CppBase() + 0x22A2BB4))(this);
	}
	template <typename R = uintptr_t> R System_Collections_IEnumerable_GetEnumerator() {
		return ((R (*)(Startd26*))(Il2CppBase() + 0x22A2C64))(this);
	}

};

