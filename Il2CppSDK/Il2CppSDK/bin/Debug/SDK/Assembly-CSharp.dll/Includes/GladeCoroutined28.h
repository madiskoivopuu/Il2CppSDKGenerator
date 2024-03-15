#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GladeCoroutined28
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GladeCoroutine>d__28"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TrophyRoadMilestoneItem*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& leftTime5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(GladeCoroutined28*))(Il2CppBase() + 0x22A19AC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(GladeCoroutined28*))(Il2CppBase() + 0x22A19B0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(GladeCoroutined28*))(Il2CppBase() + 0x22A1B44))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(GladeCoroutined28*))(Il2CppBase() + 0x22A1B4C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(GladeCoroutined28*))(Il2CppBase() + 0x22A1B8C))(this);
	}

};

