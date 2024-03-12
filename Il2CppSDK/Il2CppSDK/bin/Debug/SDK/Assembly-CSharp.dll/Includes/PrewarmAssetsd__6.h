#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrewarmAssetsd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PrewarmAssets>d__6"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5510))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5514))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5B48))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5B50))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PrewarmAssetsd6*))(Il2CppBase() + 0xED5B90))(this);
	}

};

}
