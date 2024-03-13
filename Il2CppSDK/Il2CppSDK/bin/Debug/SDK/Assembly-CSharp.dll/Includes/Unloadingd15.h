#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Unloadingd15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Unloading>d__15"));
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
		return ((T (*)(Unloadingd15*))(Il2CppBase() + 0xE93708))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Unloadingd15*))(Il2CppBase() + 0xE9370C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Unloadingd15*))(Il2CppBase() + 0xE93C48))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Unloadingd15*))(Il2CppBase() + 0xE93C50))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Unloadingd15*))(Il2CppBase() + 0xE93C90))(this);
	}

};

