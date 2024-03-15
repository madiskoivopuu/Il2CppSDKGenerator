#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitItemTexturesd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitItemTextures>d__4"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ResourcesPreloader*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& prefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& smr5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(InitItemTexturesd4*))(Il2CppBase() + 0x10C4914))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(InitItemTexturesd4*))(Il2CppBase() + 0x10C4918))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(InitItemTexturesd4*))(Il2CppBase() + 0x10C4D48))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(InitItemTexturesd4*))(Il2CppBase() + 0x10C4D50))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(InitItemTexturesd4*))(Il2CppBase() + 0x10C4D90))(this);
	}

};

