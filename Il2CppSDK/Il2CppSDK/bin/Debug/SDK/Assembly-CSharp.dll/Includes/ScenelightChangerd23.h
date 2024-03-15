#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScenelightChangerd23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ScenelightChanger>d__23"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = SceneLightFogTrigger*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<uintptr_t>*& LightSettings() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& HFColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& HFHorizont() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& HFHeight() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& timer5__2() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8370))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8374))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8778))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C8780))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ScenelightChangerd23*))(Il2CppBase() + 0x10C87C0))(this);
	}

};

