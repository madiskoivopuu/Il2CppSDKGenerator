#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateWorldd19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateWorld>d__19"));
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
	template <typename T = uintptr_t> T& cw5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateWorldd19*))(Il2CppBase() + 0x1168E30))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateWorldd19*))(Il2CppBase() + 0x1168E34))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateWorldd19*))(Il2CppBase() + 0x1169160))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateWorldd19*))(Il2CppBase() + 0x1169168))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateWorldd19*))(Il2CppBase() + 0x11691A8))(this);
	}

};

