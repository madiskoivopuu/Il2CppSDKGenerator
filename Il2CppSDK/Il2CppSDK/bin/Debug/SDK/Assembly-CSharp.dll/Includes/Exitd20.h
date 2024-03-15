#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Exitd20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Exit>d__20"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = MapUnityController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Exitd20*))(Il2CppBase() + 0x11699F4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Exitd20*))(Il2CppBase() + 0x11699F8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Exitd20*))(Il2CppBase() + 0x1169A68))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Exitd20*))(Il2CppBase() + 0x1169A70))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Exitd20*))(Il2CppBase() + 0x1169AB0))(this);
	}

};

