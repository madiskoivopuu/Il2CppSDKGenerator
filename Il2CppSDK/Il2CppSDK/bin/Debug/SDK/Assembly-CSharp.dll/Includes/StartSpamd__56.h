#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartSpamd56
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartSpam>d__56"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& countInPack() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& delaySecond() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(StartSpamd56*))(Il2CppBase() + 0x1138DD4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartSpamd56*))(Il2CppBase() + 0x1138DD8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(StartSpamd56*))(Il2CppBase() + 0x1138EC0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(StartSpamd56*))(Il2CppBase() + 0x1138EC8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartSpamd56*))(Il2CppBase() + 0x1138F08))(this);
	}

};

}
