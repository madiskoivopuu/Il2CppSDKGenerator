#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__29"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ArenaUnityWorld*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*& blueprints() {
		return *(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& cr5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& currentTime5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& timeForSendWaitMe5__4() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& timeForThrowFrame5__5() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int64_t> R& currentTimeTicks5__6() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Created29*))(Il2CppBase() + 0xEDAF04))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Created29*))(Il2CppBase() + 0xEDAF08))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Created29*))(Il2CppBase() + 0xEDBCA0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Created29*))(Il2CppBase() + 0xEDBCA8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Created29*))(Il2CppBase() + 0xEDBCE8))(this);
	}

};

