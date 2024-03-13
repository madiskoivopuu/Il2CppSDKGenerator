#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartGameLoadd89
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartGameLoad>d__89"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = AppController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnInitGameLoader() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ILoaderStep*> T& step5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(StartGameLoadd89*))(Il2CppBase() + 0x1148C80))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartGameLoadd89*))(Il2CppBase() + 0x1148D64))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(StartGameLoadd89*))(Il2CppBase() + 0x1148C9C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(StartGameLoadd89*))(Il2CppBase() + 0x11497E8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(StartGameLoadd89*))(Il2CppBase() + 0x11497F0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartGameLoadd89*))(Il2CppBase() + 0x1149830))(this);
	}

};

