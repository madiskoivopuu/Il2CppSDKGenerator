#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MovingToNextScrollPosd41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MovingToNextScrollPos>d__41"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ProgressionExchangeWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& nextPos() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& content5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BBF00))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BBF04))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BC08C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BC094))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(MovingToNextScrollPosd41*))(Il2CppBase() + 0x10BC0D4))(this);
	}

};

