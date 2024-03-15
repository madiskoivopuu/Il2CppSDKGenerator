#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetBundled40
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadAssetBundle>d__40"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BaseWorldInitLS*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = BaseClientWorld*> R& world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& startABTime5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& timeForSendWaitMe5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEE8EC0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEE8EC4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEEA004))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEEA00C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(LoadAssetBundled40*))(Il2CppBase() + 0xEEA04C))(this);
	}

};

