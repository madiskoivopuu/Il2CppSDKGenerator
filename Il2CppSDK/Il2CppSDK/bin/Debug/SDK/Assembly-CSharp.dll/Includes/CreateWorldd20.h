#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateWorldd20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateWorld>d__20"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ArenaUnityController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& cw5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(CreateWorldd20*))(Il2CppBase() + 0xED9DBC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(CreateWorldd20*))(Il2CppBase() + 0xED9DC0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(CreateWorldd20*))(Il2CppBase() + 0xEDA168))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(CreateWorldd20*))(Il2CppBase() + 0xEDA170))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(CreateWorldd20*))(Il2CppBase() + 0xEDA1B0))(this);
	}

};

