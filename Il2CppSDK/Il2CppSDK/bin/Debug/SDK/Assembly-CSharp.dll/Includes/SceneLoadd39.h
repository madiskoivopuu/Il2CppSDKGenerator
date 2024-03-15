#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneLoadd39
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SceneLoad>d__39"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BaseWorldInitLS*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = BaseClientWorld*> R& world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& pingTimeout5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& startSceneLoad5__3() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = uintptr_t> R& ao5__4() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA080))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA084))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA33C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA344))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(SceneLoadd39*))(Il2CppBase() + 0xEEA384))(this);
	}

};

