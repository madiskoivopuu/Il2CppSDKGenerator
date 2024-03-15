#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Showingd25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Showing>d__25"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = HUDNotifyView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Showingd25*))(Il2CppBase() + 0xEA7C4C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Showingd25*))(Il2CppBase() + 0xEA7C50))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Showingd25*))(Il2CppBase() + 0xEA7E10))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Showingd25*))(Il2CppBase() + 0xEA7E18))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Showingd25*))(Il2CppBase() + 0xEA7E58))(this);
	}

};

