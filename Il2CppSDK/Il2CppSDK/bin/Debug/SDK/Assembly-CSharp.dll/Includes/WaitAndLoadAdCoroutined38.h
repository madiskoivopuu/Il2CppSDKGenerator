#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitAndLoadAdCoroutined38
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitAndLoadAdCoroutine>d__38"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = AdsManager*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WaitAndLoadAdCoroutined38*))(Il2CppBase() + 0x1138430))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WaitAndLoadAdCoroutined38*))(Il2CppBase() + 0x1138434))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WaitAndLoadAdCoroutined38*))(Il2CppBase() + 0x1138500))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WaitAndLoadAdCoroutined38*))(Il2CppBase() + 0x1138508))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WaitAndLoadAdCoroutined38*))(Il2CppBase() + 0x1138548))(this);
	}

};

