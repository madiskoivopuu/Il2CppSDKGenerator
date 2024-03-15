#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnShipd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpawnShip>d__13"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TraidingPathController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& shipId() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& posAtLine() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& _speedRef5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& ship5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& shipAnimator5__4() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _timer5__5() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(SpawnShipd13*))(Il2CppBase() + 0x229FC2C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(SpawnShipd13*))(Il2CppBase() + 0x229FC30))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(SpawnShipd13*))(Il2CppBase() + 0x22A0354))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(SpawnShipd13*))(Il2CppBase() + 0x22A035C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(SpawnShipd13*))(Il2CppBase() + 0x22A039C))(this);
	}

};

