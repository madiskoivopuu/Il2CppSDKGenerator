#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MovingToNextScrollPosd41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MovingToNextScrollPos>d__41"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& nextPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& content5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BBF00))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BBF04))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BC08C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BC094))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BC0D4))(this);
	}

};

}
