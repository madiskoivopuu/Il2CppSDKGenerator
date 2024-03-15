#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitAndDisabled17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitAndDisable>d__17"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RuneItemEffect*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7EAC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7EB0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7F4C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7F54))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WaitAndDisabled17*))(Il2CppBase() + 0x10C7F94))(this);
	}

};

