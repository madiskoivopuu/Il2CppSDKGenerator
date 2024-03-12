#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShareTextInAnroidd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShareTextInAnroid>d__7"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& link() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A93B4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A93B8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A9BDC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A9BE4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShareTextInAnroidd7*))(Il2CppBase() + 0x10A9C24))(this);
	}

};

}
