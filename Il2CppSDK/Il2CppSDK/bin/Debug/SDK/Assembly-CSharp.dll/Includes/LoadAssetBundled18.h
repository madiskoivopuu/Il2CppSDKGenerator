#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetBundled18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAssetBundle>d__18"));
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
		return ((R (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169AE4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169AE8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169E98))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169EA0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(LoadAssetBundled18*))(Il2CppBase() + 0x1169EE0))(this);
	}

};

