#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__13"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = MapUnityWorld*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*& blueprints() {
		return *(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int64_t> R& now5__2() {
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
	 EnumeratorKeyValuePair2Il2CppString*, EntityBlueprint*>*>*& 7__wrap5() {
		return *(EnumeratorKeyValuePair2Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x50);
	}
	 KeyValuePair2Il2CppString*, EntityBlueprint*>*& entityData5__7() {
		return *(KeyValuePair2Il2CppString*, EntityBlueprint*>**)((uintptr_t)this + 0x70);
	}
	template <typename R = int64_t> R& currentTimeTicks5__8() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Created13*))(Il2CppBase() + 0x1169F14))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Created13*))(Il2CppBase() + 0x1169F94))(this);
	}
	template <typename R = void> R m__Finally1() {
		return ((R (*)(Created13*))(Il2CppBase() + 0x1169F40))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Created13*))(Il2CppBase() + 0x116AE70))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Created13*))(Il2CppBase() + 0x116AE78))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Created13*))(Il2CppBase() + 0x116AEB8))(this);
	}

};

