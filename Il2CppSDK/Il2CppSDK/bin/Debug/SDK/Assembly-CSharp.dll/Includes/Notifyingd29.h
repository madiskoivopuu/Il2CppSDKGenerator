#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Notifyingd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Notifying>d__29"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& questName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = QuestTrackerView*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& ownerId5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Notifyingd29*))(Il2CppBase() + 0x10BE174))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Notifyingd29*))(Il2CppBase() + 0x10BE178))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Notifyingd29*))(Il2CppBase() + 0x10BE964))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Notifyingd29*))(Il2CppBase() + 0x10BE96C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Notifyingd29*))(Il2CppBase() + 0x10BE9AC))(this);
	}

};

