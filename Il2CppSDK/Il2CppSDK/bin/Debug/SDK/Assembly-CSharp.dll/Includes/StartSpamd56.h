#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartSpamd56
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartSpam>d__56"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& action() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& countInPack() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& count() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& delaySecond() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(StartSpamd56*))(Il2CppBase() + 0x1138DD4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(StartSpamd56*))(Il2CppBase() + 0x1138DD8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(StartSpamd56*))(Il2CppBase() + 0x1138EC0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(StartSpamd56*))(Il2CppBase() + 0x1138EC8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(StartSpamd56*))(Il2CppBase() + 0x1138F08))(this);
	}

};

