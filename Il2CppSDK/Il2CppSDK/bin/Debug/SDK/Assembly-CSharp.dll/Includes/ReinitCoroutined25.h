#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReinitCoroutined25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReinitCoroutine>d__25"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TrophyRoadMilestoneItem*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TrophyRoadEntity*> T& nextMilestone5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& framesLeft5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& hideLength5__4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1BC0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1BC4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1FC8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A1FD0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ReinitCoroutined25*))(Il2CppBase() + 0x22A2010))(this);
	}

};

