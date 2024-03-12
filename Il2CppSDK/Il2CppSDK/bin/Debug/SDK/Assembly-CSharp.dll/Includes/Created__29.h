#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__29"));
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
	template <typename T = Il2CppList<void*>*> T& blueprints() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& cr5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& currentTime5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& timeForSendWaitMe5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& timeForThrowFrame5__5() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& currentTimeTicks5__6() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Created29*))(Il2CppBase() + 0xEDAF04))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Created29*))(Il2CppBase() + 0xEDAF08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Created29*))(Il2CppBase() + 0xEDBCA0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Created29*))(Il2CppBase() + 0xEDBCA8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Created29*))(Il2CppBase() + 0xEDBCE8))(this);
	}

};

}
