#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadImaged23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadImage>d__23"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = PlayGamesUserProfile*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& www5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadImaged23*))(Il2CppBase() + 0x10B188C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadImaged23*))(Il2CppBase() + 0x10B1890))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadImaged23*))(Il2CppBase() + 0x10B1ABC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadImaged23*))(Il2CppBase() + 0x10B1AC4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadImaged23*))(Il2CppBase() + 0x10B1B04))(this);
	}

};

