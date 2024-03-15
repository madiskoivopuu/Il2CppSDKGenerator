#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartGameLoadd89
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartGameLoad>d__89"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = AppController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& OnInitGameLoader() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& 7__wrap1() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ILoaderStep*> R& step5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(StartGameLoadd89*))(Il2CppBase() + 0x1148C80))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(StartGameLoadd89*))(Il2CppBase() + 0x1148D64))(this);
	}
	template <typename R = void> R m__Finally1() {
		return ((R (*)(StartGameLoadd89*))(Il2CppBase() + 0x1148C9C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(StartGameLoadd89*))(Il2CppBase() + 0x11497E8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(StartGameLoadd89*))(Il2CppBase() + 0x11497F0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(StartGameLoadd89*))(Il2CppBase() + 0x1149830))(this);
	}

};

