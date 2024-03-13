#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateCoriutined27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateCoriutine>d__27"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ClassTabButton*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = AccountEntity*> T& avatar5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& previousMarkState5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(UpdateCoriutined27*))(Il2CppBase() + 0x111C0CC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdateCoriutined27*))(Il2CppBase() + 0x111C0D0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(UpdateCoriutined27*))(Il2CppBase() + 0x111C2BC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(UpdateCoriutined27*))(Il2CppBase() + 0x111C2C4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateCoriutined27*))(Il2CppBase() + 0x111C304))(this);
	}

};

