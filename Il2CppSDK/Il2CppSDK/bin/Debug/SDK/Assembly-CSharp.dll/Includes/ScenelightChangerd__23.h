#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScenelightChangerd23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ScenelightChanger>d__23"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& LightSettings() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& HFColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& HFHorizont() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& HFHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& timer5__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8370))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8374))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8778))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8780))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C87C0))(this);
	}

};

}
