#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RollButtonCooldownd24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RollButtonCooldown>d__24"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ChestRewardWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A07C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A080))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A160))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A168))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A1A8))(this);
	}

};

