#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLoadingFinishCrtd93
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnLoadingFinishCrt>d__93"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = AppController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x114873C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148740))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148C04))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148C0C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(OnLoadingFinishCrtd93*))(Il2CppBase() + 0x1148C4C))(this);
	}

};

