#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetBundled19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAssetBundle>d__19"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IAssetPackBatchRequest*> T& _bundleRequest5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAA60))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAA64))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAE14))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAE1C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAE5C))(this);
	}

};

