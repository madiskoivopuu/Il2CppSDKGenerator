#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitAndDisabled17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitAndDisable>d__17"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RuneItemEffect*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7EAC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7EB0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7F4C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7F54))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7F94))(this);
	}

};

