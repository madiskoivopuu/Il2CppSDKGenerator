#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Notifyingd34
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Notifying>d__34"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& ownerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& questName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = ManualQuestTrackerView*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ICommonUnityWorld*> T& world5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Notifyingd34*))(Il2CppBase() + 0x11640A4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Notifyingd34*))(Il2CppBase() + 0x11640A8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Notifyingd34*))(Il2CppBase() + 0x116472C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Notifyingd34*))(Il2CppBase() + 0x1164734))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Notifyingd34*))(Il2CppBase() + 0x1164774))(this);
	}

};

