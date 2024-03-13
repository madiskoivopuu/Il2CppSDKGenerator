#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Loadingd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Loading>d__9"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = CutsceneWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Loadingd9*))(Il2CppBase() + 0xE92F7C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Loadingd9*))(Il2CppBase() + 0xE92F80))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Loadingd9*))(Il2CppBase() + 0xE9368C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Loadingd9*))(Il2CppBase() + 0xE93694))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Loadingd9*))(Il2CppBase() + 0xE936D4))(this);
	}

};

