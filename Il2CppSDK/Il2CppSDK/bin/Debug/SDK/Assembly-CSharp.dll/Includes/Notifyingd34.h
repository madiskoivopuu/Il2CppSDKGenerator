#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Notifyingd34
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Notifying>d__34"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& ownerId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& questName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ManualQuestTrackerView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ICommonUnityWorld*> R& world5__2() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Notifyingd34*))(Il2CppBase() + 0x11640A4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Notifyingd34*))(Il2CppBase() + 0x11640A8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Notifyingd34*))(Il2CppBase() + 0x116472C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Notifyingd34*))(Il2CppBase() + 0x1164734))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Notifyingd34*))(Il2CppBase() + 0x1164774))(this);
	}

};

