#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Unloadingd15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Unloading>d__15"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = CutsceneWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Unloadingd15*))(Il2CppBase() + 0xE93708))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Unloadingd15*))(Il2CppBase() + 0xE9370C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Unloadingd15*))(Il2CppBase() + 0xE93C48))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Unloadingd15*))(Il2CppBase() + 0xE93C50))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Unloadingd15*))(Il2CppBase() + 0xE93C90))(this);
	}

};

