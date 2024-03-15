#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetBundled19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAssetBundle>d__19"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IAssetPackBatchRequest*> R& _bundleRequest5__2() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAA60))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAA64))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAE14))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAE1C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(LoadAssetBundled19*))(Il2CppBase() + 0xEDAE5C))(this);
	}

};

