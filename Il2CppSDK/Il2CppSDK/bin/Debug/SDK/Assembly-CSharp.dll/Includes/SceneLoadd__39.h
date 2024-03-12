#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneLoadd39
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SceneLoad>d__39"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& pingTimeout5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startSceneLoad5__3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ao5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA080))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA084))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA33C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA344))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA384))(this);
	}

};

}
