#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__23"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ArenaClientWorld*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& blueprints() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = LocationEntity*> T& worldParams5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sw5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = EnumeratorKeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& 7__wrap3() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Created23*))(Il2CppBase() + 0x114D740))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Created23*))(Il2CppBase() + 0x114D7B0))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(Created23*))(Il2CppBase() + 0x114D75C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Created23*))(Il2CppBase() + 0x114DCD4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Created23*))(Il2CppBase() + 0x114DCDC))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Created23*))(Il2CppBase() + 0x114DD1C))(this);
	}

};

