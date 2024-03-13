#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = MapUnityWorld*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& blueprints() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& now5__2() {
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
	template <typename T = EnumeratorKeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& 7__wrap5() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = KeyValuePair2Il2CppString*, EntityBlueprint*>*> T& entityData5__7() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int64_t> T& currentTimeTicks5__8() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Created13*))(Il2CppBase() + 0x1169F14))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Created13*))(Il2CppBase() + 0x1169F94))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(Created13*))(Il2CppBase() + 0x1169F40))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Created13*))(Il2CppBase() + 0x116AE70))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Created13*))(Il2CppBase() + 0x116AE78))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Created13*))(Il2CppBase() + 0x116AEB8))(this);
	}

};

