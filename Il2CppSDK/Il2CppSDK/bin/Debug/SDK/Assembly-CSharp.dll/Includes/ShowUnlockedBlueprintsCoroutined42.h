#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowUnlockedBlueprintsCoroutined42
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowUnlockedBlueprintsCoroutine>d__42"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = BlueprintsWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& blueprints() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = BlueprintLearnedWindow*> T& window5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBB20))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBB24))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBCE0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBCE8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowUnlockedBlueprintsCoroutined42*))(Il2CppBase() + 0xEEBD28))(this);
	}

};

