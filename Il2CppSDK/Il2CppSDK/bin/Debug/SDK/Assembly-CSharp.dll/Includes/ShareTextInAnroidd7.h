#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShareTextInAnroidd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShareTextInAnroid>d__7"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& title() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& message() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& link() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = NativeTextShare*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A93B4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A93B8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A9BDC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A9BE4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A9C24))(this);
	}

};

