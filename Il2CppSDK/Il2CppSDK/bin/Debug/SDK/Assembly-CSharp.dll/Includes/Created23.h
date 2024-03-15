#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__23"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ArenaClientWorld*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*& blueprints() {
		return *(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = LocationEntity*> R& worldParams5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& sw5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Enumerator<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*& 7__wrap3() {
		return *(Enumerator<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Created23*))(Il2CppBase() + 0x114D740))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Created23*))(Il2CppBase() + 0x114D7B0))(this);
	}
	template <typename R = void> R m__Finally1() {
		return ((R (*)(Created23*))(Il2CppBase() + 0x114D75C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Created23*))(Il2CppBase() + 0x114DCD4))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Created23*))(Il2CppBase() + 0x114DCDC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Created23*))(Il2CppBase() + 0x114DD1C))(this);
	}

};

