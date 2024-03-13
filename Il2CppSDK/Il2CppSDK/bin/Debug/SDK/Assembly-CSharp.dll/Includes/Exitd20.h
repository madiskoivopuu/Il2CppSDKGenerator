#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Exitd20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Exit>d__20"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = MapUnityController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Exitd20*))(Il2CppBase() + 0x11699F4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Exitd20*))(Il2CppBase() + 0x11699F8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Exitd20*))(Il2CppBase() + 0x1169A68))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Exitd20*))(Il2CppBase() + 0x1169A70))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Exitd20*))(Il2CppBase() + 0x1169AB0))(this);
	}

};

