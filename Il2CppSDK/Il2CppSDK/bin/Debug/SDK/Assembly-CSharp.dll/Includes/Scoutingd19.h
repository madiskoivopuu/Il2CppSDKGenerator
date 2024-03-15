#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Scoutingd19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Scouting>d__19"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ScoutingWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& name() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& time5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Scoutingd19*))(Il2CppBase() + 0x10C87FC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Scoutingd19*))(Il2CppBase() + 0x10C8800))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Scoutingd19*))(Il2CppBase() + 0x10C89D8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Scoutingd19*))(Il2CppBase() + 0x10C89E0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Scoutingd19*))(Il2CppBase() + 0x10C8A20))(this);
	}

};

