#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnShipd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpawnShip>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TraidingPathController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& shipId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& posAtLine() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _speedRef5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ship5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& shipAnimator5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _timer5__5() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SpawnShipd13*))(Il2CppBase() + 0x229FC2C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SpawnShipd13*))(Il2CppBase() + 0x229FC30))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SpawnShipd13*))(Il2CppBase() + 0x22A0354))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SpawnShipd13*))(Il2CppBase() + 0x22A035C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SpawnShipd13*))(Il2CppBase() + 0x22A039C))(this);
	}

};

