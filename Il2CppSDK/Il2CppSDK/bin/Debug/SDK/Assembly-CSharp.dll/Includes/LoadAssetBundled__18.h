#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetBundled18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAssetBundle>d__18"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _bundleRequest5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169AE4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169AE8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169E98))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169EA0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169EE0))(this);
	}

};

}
