#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLoadingFinishCrtd93
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnLoadingFinishCrt>d__93"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = AppController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x114873C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148740))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148C04))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148C0C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148C4C))(this);
	}

};

