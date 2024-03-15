#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReinitCoroutined25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReinitCoroutine>d__25"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& level() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TrophyRoadMilestoneItem*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TrophyRoadEntity*> R& nextMilestone5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& framesLeft5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& hideLength5__4() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1BC0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1BC4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1FC8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1FD0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A2010))(this);
	}

};

