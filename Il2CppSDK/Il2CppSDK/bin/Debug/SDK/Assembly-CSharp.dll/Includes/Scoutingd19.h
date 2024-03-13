#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Scoutingd19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Scouting>d__19"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ScoutingWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& time5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Scoutingd19*))(Il2CppBase() + 0x10C87FC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Scoutingd19*))(Il2CppBase() + 0x10C8800))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Scoutingd19*))(Il2CppBase() + 0x10C89D8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Scoutingd19*))(Il2CppBase() + 0x10C89E0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Scoutingd19*))(Il2CppBase() + 0x10C8A20))(this);
	}

};

