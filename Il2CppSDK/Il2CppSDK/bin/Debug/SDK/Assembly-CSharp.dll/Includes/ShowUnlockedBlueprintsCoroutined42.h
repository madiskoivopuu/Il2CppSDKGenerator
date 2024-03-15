#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowUnlockedBlueprintsCoroutined42
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowUnlockedBlueprintsCoroutine>d__42"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BlueprintsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& blueprints() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& 7__wrap1() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& 7__wrap2() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = BlueprintLearnedWindow*> R& window5__4() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBB20))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBB24))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBCE0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBCE8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBD28))(this);
	}

};

