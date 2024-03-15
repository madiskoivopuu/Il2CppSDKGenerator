#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrewarmAssetsd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PrewarmAssets>d__6"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5510))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5514))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5B48))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5B50))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5B90))(this);
	}

};

