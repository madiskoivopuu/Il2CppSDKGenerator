#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsSpawnDelayd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsSpawnDelay>d__3"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = MimicSpawnHack*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(IsSpawnDelayd3*))(Il2CppBase() + 0x1096500))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(IsSpawnDelayd3*))(Il2CppBase() + 0x1096504))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(IsSpawnDelayd3*))(Il2CppBase() + 0x1096658))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(IsSpawnDelayd3*))(Il2CppBase() + 0x1096660))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IsSpawnDelayd3*))(Il2CppBase() + 0x10966A0))(this);
	}

};

