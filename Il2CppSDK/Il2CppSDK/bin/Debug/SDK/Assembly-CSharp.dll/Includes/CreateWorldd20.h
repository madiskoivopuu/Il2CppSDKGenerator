#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateWorldd20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateWorld>d__20"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ArenaUnityController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& cw5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateWorldd20*))(Il2CppBase() + 0xED9DBC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateWorldd20*))(Il2CppBase() + 0xED9DC0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateWorldd20*))(Il2CppBase() + 0xEDA168))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateWorldd20*))(Il2CppBase() + 0xEDA170))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateWorldd20*))(Il2CppBase() + 0xEDA1B0))(this);
	}

};

