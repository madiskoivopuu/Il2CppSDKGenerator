#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetBundled40
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAssetBundle>d__40"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startABTime5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& timeForSendWaitMe5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEE8EC0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEE8EC4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEEA004))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEEA00C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEEA04C))(this);
	}

};

}
